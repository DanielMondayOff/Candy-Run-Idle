using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class IdleManager : MonoBehaviour
{
    public IdleMap currentMap;

    [SerializeField] private List<IdleWorker> workers = new List<IdleWorker>();
    [SerializeField] private List<GameObject> customers = new List<GameObject>();


    public Queue<CandyOrder> orderQueue = new Queue<CandyOrder>();

    public List<CandyJar> candyJars = new List<CandyJar>();

    public List<CandyMachine> candyMachines = new List<CandyMachine>();

    public Counter counter;

    [FoldoutGroup("참조")] public UnityEngine.UI.Text moneyText;
    [FoldoutGroup("참조")] public GameObject idleUI;
    [FoldoutGroup("참조")] public GameObject upgradePanel;
    [FoldoutGroup("참조")] public GameObject idleCamera;

    public CanvasGroup[] idleUIs;


    [FoldoutGroup("Value")] public Color activeBtnColor;
    [FoldoutGroup("Value")] public Color deactiveBtnColor;

    [FoldoutGroup("Value")] public Color activeCostColor;
    [FoldoutGroup("Value")] public Color deactiveCostColor;

    [FoldoutGroup("업그레이드")] public IdleUpgrade hireWorker;
    [FoldoutGroup("업그레이드")] public IdleUpgrade workerSpeedUp;
    [FoldoutGroup("업그레이드")] public IdleUpgrade promotion;

    [Space]

    // [FoldoutGroup("업그레이드")] public IdleUpgrade[] upgrades;

    public readonly float[] workerSpeed = { 6, 6.5f, 7f, 7.5f, 8f, 8.5f, 9f, 10f, 10.5f, 11f, 11.5f };
    public readonly float[] customerSpawnSpeed = { 6f, 5.5f, 5f, 4.5f, 4f, 3.5f, 3f, 2.5f, 2f, 1.5f, 1f };
    public readonly float[] maxCustomerCount = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    private bool playIdle = false;

    private TaskUtil.WhileTaskMethod spawnCustomer = null;


    public static IdleManager instance;

    private void Awake()
    {
        instance = this;

        // StartCoroutine(SceneLoading());
        SceneManager.LoadScene("Run", LoadSceneMode.Additive);
    }

    private void Start()
    {
        if (ES3.KeyExists("enableShop"))
            if (ES3.Load<bool>("enableShop"))
                StartIdle();

        if (ES3.KeyExists("workerSpeedUp"))
            workerSpeedUp.currentLevel = ES3.Load<IdleUpgrade>("workerSpeedUp").currentLevel;

        if (ES3.KeyExists("hireWorker"))
        {
            hireWorker.currentLevel = ES3.Load<IdleUpgrade>("hireWorker").currentLevel;
            SpawnWorker(hireWorker.currentLevel + 1);
        }
        else
        {
            // SpawnWorker(1);
        }

        if (ES3.KeyExists("promotion"))
        {
            promotion.currentLevel = ES3.Load<IdleUpgrade>("promotion").currentLevel;
            print(customerSpawnSpeed);
            SetCustomerSpawnSpeed(customerSpawnSpeed[promotion.currentLevel]);
        }

        SaveManager.instance.AddMoneyText(moneyText);

        // SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        // StartCoroutine(SceneLoading());
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Z))
        {
            foreach (var canvas in idleUIs)
            {
                canvas.alpha = (canvas.alpha == 1) ? 1 : 0;
            }
        }
    }

    public void testbtn()
    {
        SceneManager.LoadScene("Run", LoadSceneMode.Additive);
    }

    IEnumerator SceneLoading()
    {
        var mAsyncOperation = SceneManager.LoadSceneAsync("Run", LoadSceneMode.Additive);

        yield return mAsyncOperation;
    }

    private void OnEnable()
    {
        // print(SaveManager.instance);
    }

    private void OnDestroy()
    {
        SaveManager.instance.RemoveMoneyText(moneyText);
    }

    public void StartIdle()
    {
        if (SaveManager.instance.candyInventory.Count >= 0 && !playIdle)
        {
            // GenerateCandyJar();
            // CheckingCandyJar();
            spawnCustomer = this.TaskWhile(customerSpawnSpeed[promotion.currentLevel], 2, () => GenenrateCustomer());
            playIdle = true;
        }
    }

    public void GoToIdleGame()
    {
        idleUI.SetActive(true);
        StartIdle();
        idleCamera.SetActive(true);
    }

    public OrderLine FindEmptyOrderLine_Customer()
    {
        foreach (var order in currentMap.orderLines)
        {
            if (order.currentCustomer == null)
                return order;
        }

        return null;
    }

    public OrderLine FindEmptyOrderLine_Worker()
    {
        foreach (var line in currentMap.orderLines)
        {
            if (line.currentCustomer != null)
                if (line.currentWorker == null)
                    if (line.currentCustomer.waitForCandy)
                        return line;
        }

        return null;
    }

    public OrderLine FindClosestEmptyOrderLine_Worker(IdleWorker worker)
    {
        if (currentMap.orderLines.Length <= 0)
            return null;

        var filter = currentMap.orderLines.Where((n) => (n.currentCustomer != null && n.currentWorker == null));

        return filter.Where((n) => n.currentCustomer.waitForCandy).OrderByDescending((n) => Vector3.Distance(n.currentCustomer.transform.position, worker.transform.position)).FirstOrDefault();
    }

    // public void BookTheLine(IdleCustomer customer)
    // {
    //     OrderLine orderLine = FindEmptyOrderLine_Customer();

    //     if (orderLine != null)
    //     {
    //         var newOrder = MakeOrder(customer, orderLine);
    //         orderLine.currentCustomer = customer;
    //         orderLine.currentCustomer.line = orderLine;

    //         customer.SetDestination(orderLine.customerLine.position, () =>
    //         {
    //             customer.order = newOrder;
    //             customer.WaitUntilCandy();
    //         });
    //     }
    // }

    public CandyOrder MakeOrder(IdleCustomer customer, OrderLine line)
    {
        var candyItem = SaveManager.instance.candyInventory[Random.Range(0, SaveManager.instance.candyInventory.Count)].DuplicateCandy(1, 3);

        return new CandyOrder() { candy = SaveManager.instance.FindCandyObjectInReousrce(candyItem.id), requestCount = candyItem.count, currentCustomer = customer, currentLine = line };
    }

    public CandyOrder TakeOrder()
    {
        return orderQueue.Dequeue();
    }

    public void GenenrateCustomer()
    {
        if (SaveManager.instance.candyInventory.Count <= 0 || !playIdle || maxCustomerCount[promotion.currentLevel] <= customers.Count)
            return;

        var spawnPoint = currentMap.GetRandomSpawnPoint();
        var customer = Instantiate(Managers.Resource.Load<GameObject>("Customer")).GetComponentInChildren<IdleCustomer>();

        customer.transform.position = spawnPoint.position;

        customer.Init(spawnPoint);

        customers.Add(customer.transform.root.gameObject);

        SetTargetCustomer(customer);

        // var order = MakeOrder(customer.GetComponentInChildren<IdleCustomer>());

        // var emptyLine = FindEmptyOrderLine();

        // order.currentLine = emptyLine;

        // BookTheLine(customer);

        bool CheckCandyJar()
        {
            if (candyJars.Count <= 0)
                return true;

            foreach (var jar in candyJars)
            {
                if (jar.candyItem.count <= 0)
                    return true;
            }

            return false;
        }
    }

    public void GenerateCandyJar()
    {
        for (int i = 0; i < SaveManager.instance.candyInventory.Count; i++)
        {
            var candyJar = Instantiate(Managers.Resource.Load<GameObject>("CandyJar"), currentMap.candyJarSpawnPos[i].position, Quaternion.identity);

            var savedata = SaveManager.instance.FindCandyItem(SaveManager.instance.candyInventory[i].id);

            candyJar.GetComponentInChildren<CandyJar>().Init(savedata);
            candyJars.Add(candyJar.GetComponentInChildren<CandyJar>());
        }
    }

    public void CheckingCandyJar()
    {
        foreach (var candy in SaveManager.instance.candyInventory)
        {
            var find = candyJars.Find((n) => n.candyItem.id == candy.id);

            if (find == null)
            {
                var candyJar = Instantiate(Managers.Resource.Load<GameObject>("CandyJar"), currentMap.candyJarSpawnPos[candyJars.Count].position, Quaternion.identity);

                var savedata = SaveManager.instance.FindCandyItem(candy.id);

                candyJar.GetComponentInChildren<CandyJar>().Init(savedata);
                candyJars.Add(candyJar.GetComponentInChildren<CandyJar>());
            }
            else
            {
                find.candyItem.count = candy.count;

                find.UpdateUI();
            }
        }
    }

    public void OnChangeInventory()
    {
        candyJars.ForEach((n) => n.OnChangeOrder());
    }

    public CandyJar FindCandyJar(int id)
    {
        foreach (var jar in candyJars)
        {
            if (jar.candyItem.id == id)
                return jar;
        }

        return null;
    }


    //모든 사탕 판매 완료
    public void SellComplete()
    {

    }

    public void PlayRunGame()
    {
        idleUI.SetActive(false);
        CameraManager.instance.ChangeCamera("follow");
        RunManager.instance.ChangeToRunGame();

        MondayOFF.EventTracker.LogCustomEvent(
        "UI",
        new Dictionary<string, string> { { "UI_TYPE", "GoToRun" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
        );

        idleCamera.SetActive(false);

    }

    public void Upgrade_HireWorker()
    {
        if (hireWorker.cost[hireWorker.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(hireWorker.cost[hireWorker.currentLevel]);

        hireWorker.currentLevel++;

        ES3.Save<IdleUpgrade>("hireWorker", hireWorker);

        SpawnWorker(1);

        MondayOFF.EventTracker.LogCustomEvent(
        "IDLE",
        new Dictionary<string, string> { { "IDLE_TYPE", "HireWorker" } }
);
    }

    public void Upgrade_WorkerSpeedUp()
    {
        if (workerSpeedUp.cost[workerSpeedUp.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(workerSpeedUp.cost[workerSpeedUp.currentLevel]);

        workerSpeedUp.currentLevel++;

        ES3.Save<IdleUpgrade>("workerSpeedUp", workerSpeedUp);

        workers.ForEach((n) => n.ChangeMoveSpeed(workerSpeed[workerSpeedUp.currentLevel]));

        MondayOFF.EventTracker.LogCustomEvent(
        "IDLE",
        new Dictionary<string, string> { { "IDLE_TYPE", "WorkerSpeedUp" } }
);
    }

    public void Upgrade_Promotion()
    {
        if (promotion.cost[promotion.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(promotion.cost[promotion.currentLevel]);
        promotion.currentLevel++;

        ES3.Save<IdleUpgrade>("promotion", promotion);

        SetCustomerSpawnSpeed(customerSpawnSpeed[promotion.currentLevel]);

        MondayOFF.EventTracker.LogCustomEvent(
        "IDLE",
        new Dictionary<string, string> { { "IDLE_TYPE", "Promotion" } }
);
    }

    public void SetCustomerSpawnSpeed(float speed)
    {
        spawnCustomer.SetIntervalTime(speed);
    }

    public void SpawnWorker(int count)
    {
        for (int i = 0; i < count; i++)
        {
            var worker = Instantiate(Resources.Load<GameObject>("Worker"), currentMap.workerSpawnPoint.position, Quaternion.identity).GetComponentInChildren<IdleWorker>();

            worker.ChangeMoveSpeed(workerSpeed[workerSpeedUp.currentLevel]);
            workers.Add(worker);
        }
    }

    public void OpenUpgradePanel()
    {
        upgradePanel.SetActive(true);
    }

    public void CloseUpgradePanel()
    {
        upgradePanel.SetActive(false);
    }

    public void ExitCustomer(GameObject customer)
    {
        customers.Remove(customer);
    }

    public int GetCurrentUpgradeCost(IdleUpgradeType type)
    {
        var upgrade = GetUpgradeValue(type);

        if (upgrade != null)
        {
            return upgrade.cost[upgrade.currentLevel];
        }
        else
        {
            Debug.LogError("해당되는 업그레이드가 없습니다.");
            return int.MaxValue;
        }

        switch (type)
        {
            case IdleUpgradeType.HireWorker:
                return hireWorker.cost[hireWorker.currentLevel];

            case IdleUpgradeType.WorkerSpeedUp:
                return workerSpeedUp.cost[workerSpeedUp.currentLevel];

            case IdleUpgradeType.Promotion:
                return promotion.cost[promotion.currentLevel];

            default:
                Debug.LogError("정의가 없습니다. 추가해 주십시요");
                return 100000;
        }
    }

    public int GetUpgradeCost(IdleUpgradeType type)
    {
        var upgrade = GetUpgradeValue(type);

        if (upgrade != null)
        {
            return upgrade.cost[upgrade.currentLevel];
        }
        else
        {
            Debug.LogError("해당되는 업그레이드가 없습니다.");
            return int.MaxValue;
        }

        switch (type)
        {
            case IdleUpgradeType.HireWorker:
                return IdleManager.instance.hireWorker.cost[IdleManager.instance.hireWorker.currentLevel];

            case IdleUpgradeType.WorkerSpeedUp:
                return IdleManager.instance.workerSpeedUp.cost[IdleManager.instance.workerSpeedUp.currentLevel];

            case IdleUpgradeType.Promotion:
                return IdleManager.instance.promotion.cost[IdleManager.instance.promotion.currentLevel];

            default:
                Debug.LogError("정의가 없습니다. 추가해 주십시요");
                return int.MaxValue;

        }
    }

    public IdleUpgrade GetUpgradeValue(IdleUpgradeType type)
    {
        switch (type)
        {
            case IdleUpgradeType.HireWorker:
                return IdleManager.instance.hireWorker;

            case IdleUpgradeType.WorkerSpeedUp:
                return IdleManager.instance.workerSpeedUp;

            case IdleUpgradeType.Promotion:
                return IdleManager.instance.promotion;

            default:
                Debug.LogError("정의가 없습니다. 추가해 주십시요");
                return null;

        }
    }

    public Poolable GenerateDummyObject(string path, Vector3 pos)
    {
        var dummy = Managers.Pool.Pop(Resources.Load<GameObject>(path));

        dummy.transform.position = pos;

        return dummy;
    }

    public void GenerateDummyMoney(string path, Vector3 pos, Vector3 end)
    {
        var money = GenerateDummyObject(path, pos);

        money.transform.DOJump(end, 10f, 1, 0.3f).OnComplete(() => Managers.Pool.Push(money));
    }

    ///손님 할일 정하기
    public void SetTargetCustomer(IdleCustomer customer)
    {
        var useableCandyMachines = candyMachines.Where((n) => n.isReady && (n.candyItem.count > 0)).ToList();

        print(useableCandyMachines.Count);

        if (useableCandyMachines.Count > 0)
        {
            useableCandyMachines.OrderBy(x => Random.value).FirstOrDefault().EnqueueCustomer(customer);
            // customer.SetDestination() useableCandyMachines.OrderBy(x => Random.value).FirstOrDefault().;
        }
    }
}

[System.Serializable]
public enum IdleUpgradeType
{
    HireWorker = 1,
    WorkerSpeedUp = 2,
    Promotion = 3
}

[System.Serializable]
public class IdleUpgrade
{
    public IdleUpgradeType upgradeType;

    public int maxLevel = 10;
    public int currentLevel = 0;

    public int[] cost;
}

[System.Serializable]
public class OrderLine
{
    public Transform customerLine;
    public Transform workerLine;
    public IdleCustomer currentCustomer = null;
    public IdleWorker currentWorker = null;
}

[System.Serializable]
public class CandyOrder
{
    public CandyObject candy;
    public int requestCount;
    public int currentCount = 0;

    public IdleCustomer currentCustomer;

    public OrderLine currentLine;

    public void CompleteOrder()
    {
        currentCustomer = null;

        currentLine.currentCustomer = null;
    }

    public int CalculateTotalCost()
    {
        return candy.cost * requestCount;
    }
}

[System.Serializable]
public class CandyItem
{
    [SerializeField] public CandyObject candy;
    public int count;

    public CandyItem DuplicateCandy(int minCount, int maxCount)
    {
        int count = Random.Range(minCount, maxCount);

        // this.count -= count;

        count = Mathf.Clamp(count, 0, int.MaxValue);

        return new CandyItem() { candy = this.candy, count = count };
    }

    public void TakeCandy(int count)
    {
        this.count -= count;
    }
}