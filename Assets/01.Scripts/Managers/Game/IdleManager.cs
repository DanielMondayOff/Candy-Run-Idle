using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine.SceneManagement;
using DG.Tweening;
using Cinemachine;

public class IdleManager : MonoBehaviour
{
    public IdleMap currentMap;

    [SerializeField] private List<IdleWorker2> workers = new List<IdleWorker2>();
    [SerializeField] private List<GameObject> customers = new List<GameObject>();


    public Queue<CandyOrder> orderQueue = new Queue<CandyOrder>();

    public List<CandyJar> candyJars = new List<CandyJar>();

    public List<CandyMachine> candyMachines = new List<CandyMachine>();

    public List<CandySlot> candySlots = new List<CandySlot>();


    public Counter counter;

    public Collector startCollector;

    [FoldoutGroup("참조")] public UnityEngine.UI.Text moneyText;
    [FoldoutGroup("참조")] public GameObject idleUI;
    [FoldoutGroup("참조")] public GameObject upgradePanel;
    [FoldoutGroup("참조")] public CinemachineVirtualCamera idleCamera;
    public void ChangeIdleCameraOffsetTest() => idleCamera.GetCinemachineComponent<CinemachineTransposer>().m_FollowOffset = new Vector3(35, 45, 0);
    [FoldoutGroup("참조")] public PlayerMovement playerMovement;
    [FoldoutGroup("참조")] public GameObject nextStageBtn;
    [FoldoutGroup("참조")] public GameObject nextStageHighlight;
    [FoldoutGroup("참조")] public GameObject upgradeBtn;
    [FoldoutGroup("참조")] public GameObject blackPanel;
    [FoldoutGroup("참조")] public LineRenderer arrowLine = null;
    [FoldoutGroup("참조")] public Transform playerTrans;

    public CanvasGroup[] idleUIs;

    [FoldoutGroup("Value")] public Color activeBtnColor;
    [FoldoutGroup("Value")] public Color deactiveBtnColor;

    [FoldoutGroup("Value")] public Color activeCostColor;
    [FoldoutGroup("Value")] public Color deactiveCostColor;

    [FoldoutGroup("업그레이드")] public IdleUpgrade hireWorker;
    [FoldoutGroup("업그레이드")] public IdleUpgrade workerSpeedUp;
    [FoldoutGroup("업그레이드")] public IdleUpgrade promotion;
    [FoldoutGroup("업그레이드")] public IdleUpgrade extraIncome;
    [FoldoutGroup("업그레이드")] public IdleUpgrade playerSpeedUp;
    [FoldoutGroup("업그레이드")] public IdleUpgrade playerCapacity;
    [FoldoutGroup("업그레이드")] public IdleUpgrade workerCapacity;


    [Space]

    // [FoldoutGroup("업그레이드")] public IdleUpgrade[] upgrades;

    public readonly float[] workerSpeed = { 6, 6.5f, 7f, 7.5f, 8f, 8.5f, 9f, 10f, 10.5f, 11f, 11.5f };
    public readonly float[] customerSpawnSpeed = { 6f, 5.5f, 5f, 4.5f, 4f, 3.5f, 3f, 2.5f, 2f, 1.5f, 1f };
    public readonly float[] maxCustomerCount = { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 };
    public readonly float[] extraIncomePercent = { 1f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2f };
    public readonly float[] playerSpeed = { 10, 10.5f, 11f, 11.5f, 12f, 12.5f, 13f, 13.5f, 14f, 14.5f, 16f };
    public readonly float[] playerCapacityValue = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
    public readonly float[] workerCapacityValue = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };


    public bool playIdle = false;

    private TaskUtil.WhileTaskMethod spawnCustomer = null;

    //==============================================================================================================================

    public List<DisplayStand> candyDisplayStandList = new List<DisplayStand>();

    public static IdleManager instance;

    private void OnEnable()
    {
        instance = this;

        // StartCoroutine(SceneLoading());

        SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        if (ES3.KeyExists("workerSpeedUp"))
        {
            workerSpeedUp.currentLevel = ES3.Load<IdleUpgrade>("workerSpeedUp").currentLevel;
            workers.ForEach((n) => n.ChangeMoveSpeed(workerSpeed[workerCapacity.currentLevel]));
        }

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
        }

        if (ES3.KeyExists("income"))
        {
            extraIncome.currentLevel = ES3.Load<IdleUpgrade>("income").currentLevel;
        }

        if (ES3.KeyExists("playerSpeed"))
        {
            playerSpeedUp.currentLevel = ES3.Load<IdleUpgrade>("playerSpeed").currentLevel;

            playerMovement.SetPlayerMoveSpeed(playerSpeed[playerSpeedUp.currentLevel]);
        }

        if (ES3.KeyExists("playerCapacity"))
        {
            playerCapacity.currentLevel = ES3.Load<IdleUpgrade>("playerCapacity").currentLevel;
        }

        if (ES3.KeyExists("workerCapacity"))
        {
            workerCapacity.currentLevel = ES3.Load<IdleUpgrade>("workerCapacity").currentLevel;
        }
    }

    private void Start()
    {
        if (ES3.KeyExists("enableShop"))
            if (ES3.Load<bool>("enableShop"))
                StartIdle();

        SetCustomerSpawnSpeed(customerSpawnSpeed[promotion.currentLevel]);

        SaveManager.instance.AddMoneyText(moneyText);
        SaveManager.instance.OnChangeMoney();

        // SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        // StartCoroutine(SceneLoading());

        // startCollector.ActiveThisCollector();

        if (ES3.KeyExists("NextStageEnable"))
        {
            if (ES3.Load<bool>("NextStageEnable"))
            {
                IdleManager.instance.ChangeIdleCameraOffsetTest();
            }
        }

        if (ES3.KeyExists("NextStageEnable"))
            if (ES3.Load<bool>("NextStageEnable"))
                blackPanel.SetActive(false);

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Z))
        {
            print(123451531);

            foreach (var canvas in idleUIs)
            {
                canvas.alpha = (canvas.alpha == 1) ? 0 : 1;
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
            if (spawnCustomer == null)
                spawnCustomer = this.TaskWhile(customerSpawnSpeed[promotion.currentLevel] * 0.25f, 2, () => GenenrateCustomer());
            playIdle = true;
        }
    }

    public void GoToIdleGame()
    {
        idleUI.SetActive(true);
        StartIdle();
        idleCamera.gameObject.SetActive(true);

        if (ES3.KeyExists("NextStageEnable"))
            nextStageBtn.SetActive(ES3.Load<bool>("NextStageEnable"));
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
        if (/*SaveManager.instance.candyInventory.Count <= 0 || */ !playIdle || maxCustomerCount[promotion.currentLevel] <= customers.Count || candyMachines.Where((n => n.isReady)).Count() == 0)
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

    public void CheckingCandyMachine()
    {
        foreach (var candy in candyMachines)
        {
            candy.UpdateUI(wiggle: false);
        }
    }

    public void OnChangeInventory()
    {
        // candyJars.ForEach((n) => n.OnChangeOrder());

        candyMachines.ForEach((n) => n.OnChangeInventory());
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
        playIdle = false;
        idleUI.SetActive(false);
        CameraManager.instance.ChangeCamera("follow");
        RunManager.instance.ChangeToRunGame();

        EventManager.instance.CustomEvent(AnalyticsType.UI, "GoToRun", true, true);

        // MondayOFF.EventTracker.LogCustomEvent(
        // "UI",
        // new Dictionary<string, string> { { "UI_TYPE", "GoToRun" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
        // );

        idleCamera.gameObject.SetActive(false);

        nextStageHighlight.SetActive(false);


        RunManager.instance.blackPanel.SetActive(false);
    }

    public void Upgrade_HireWorker()
    {
        if (hireWorker.cost[hireWorker.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(hireWorker.cost[hireWorker.currentLevel]);

        hireWorker.currentLevel++;

        ES3.Save<IdleUpgrade>("hireWorker", hireWorker);

        SpawnWorker(1);

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "HireWorker", true, true);


        // MondayOFF.EventTracker.LogCustomEvent(
        // "IDLE",
        // new Dictionary<string, string> { { "IDLE_TYPE", "HireWorker" } }
        // );
    }

    public void Upgrade_WorkerSpeedUp()
    {
        if (workerSpeedUp.cost[workerSpeedUp.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(workerSpeedUp.cost[workerSpeedUp.currentLevel]);

        workerSpeedUp.currentLevel++;

        ES3.Save<IdleUpgrade>("workerSpeedUp", workerSpeedUp);

        workers.ForEach((n) => n.ChangeMoveSpeed(workerSpeed[workerSpeedUp.currentLevel]));

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "WorkerSpeedUp", true, true);

        // MondayOFF.EventTracker.LogCustomEvent(
        // "IDLE",
        // new Dictionary<string, string> { { "IDLE_TYPE", "WorkerSpeedUp" } }
        // );
    }

    public void Upgrade_Promotion()
    {
        if (promotion.cost[promotion.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(promotion.cost[promotion.currentLevel]);
        promotion.currentLevel++;

        ES3.Save<IdleUpgrade>("promotion", promotion);

        SetCustomerSpawnSpeed(customerSpawnSpeed[promotion.currentLevel]);

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Promotion", true, true);


        //         MondayOFF.EventTracker.LogCustomEvent(
        //         "IDLE",
        //         new Dictionary<string, string> { { "IDLE_TYPE", "Promotion" } }
        // );
    }

    public void Upgrade_Income()
    {
        if (extraIncome.cost[extraIncome.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(extraIncome.cost[extraIncome.currentLevel]);
        extraIncome.currentLevel++;

        ES3.Save<IdleUpgrade>("income", extraIncome);

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Income", true, true);


        //         MondayOFF.EventTracker.LogCustomEvent(
        //         "IDLE",
        //         new Dictionary<string, string> { { "IDLE_TYPE", "Income" } }
        // );
    }

    public void Upgrade_PlayerSpeedUp()
    {
        if (playerSpeedUp.cost[playerSpeedUp.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(playerSpeedUp.cost[playerSpeedUp.currentLevel]);
        playerSpeedUp.currentLevel++;

        ES3.Save<IdleUpgrade>("playerSpeed", playerSpeedUp);

        playerMovement.SetPlayerMoveSpeed(playerSpeed[playerSpeedUp.currentLevel]);

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "PlayerSpeedUp", true, true);

        //         MondayOFF.EventTracker.LogCustomEvent(
        //         "IDLE",
        //         new Dictionary<string, string> { { "IDLE_TYPE", "PlayerSpeedUp" } }
        // );
    }

    public void Upgrade_PlayerCapacityUp()
    {
        if (playerCapacity.cost[playerCapacity.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(playerCapacity.cost[playerCapacity.currentLevel]);
        playerCapacity.currentLevel++;

        ES3.Save<IdleUpgrade>("playerCapacity", playerCapacity);

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "PlayerCapacityUp", true, true);
    }

    public void Upgrade_WorkerCapacityUp()
    {
        if (workerCapacity.cost[workerCapacity.currentLevel] > SaveManager.instance.GetMoney())
            return;

        SaveManager.instance.LossMoney(workerCapacity.cost[workerCapacity.currentLevel]);
        workerCapacity.currentLevel++;

        ES3.Save<IdleUpgrade>("workerCapacity", workerCapacity);

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "WorkerCapacityUp", true, true);
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
            // workers.Add(worker);
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

            case IdleUpgradeType.Income:
                return IdleManager.instance.extraIncome;

            case IdleUpgradeType.PlayerSpeedUp:
                return IdleManager.instance.playerSpeedUp;

            case IdleUpgradeType.PlayerCapacityUp:
                return IdleManager.instance.playerCapacity;

            case IdleUpgradeType.WorkerCapacityUp:
                return IdleManager.instance.workerCapacity;

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
        List<candyBuildType> randomList = new List<candyBuildType>();

        // var useableCandyMachines = candyMachines.Where((n) => n.isReady && n.candyItem != null && n.CheckHasQueue());

        var useableCandySlots = candySlots.Where((n) => n.isReady && n.CheckHasQueue());

        var useableCandyDisplayStand = candyDisplayStandList.Where((n) => n.isReady && n.CheckHasQueue());

        // if (useableCandyMachines.ToArray().Length > 0)
        //     randomList.Add(candyBuildType.CandyMachine);

        if (useableCandySlots.ToArray().Length > 0)
            randomList.Add(candyBuildType.CandySlot);

        if (useableCandyDisplayStand.ToArray().Length > 0)
        {
            randomList.Add(candyBuildType.CandyDisplayStand);
            randomList.Add(candyBuildType.CandyDisplayStand);
        }


        if (randomList.Count > 0)
        {
            switch (randomList[Random.Range(0, randomList.Count)])
            {
                // case candyBuildType.CandyMachine:
                //     useableCandyMachines.OrderBy(x => Random.value).FirstOrDefault().EnqueueCustomer(customer);

                //     return;

                case candyBuildType.CandyDisplayStand:
                    useableCandyDisplayStand.OrderBy(x => Random.value).FirstOrDefault().EnqueueCustomer(customer);
                    return;

                case candyBuildType.CandySlot:
                    useableCandySlots.OrderBy(x => Random.value).FirstOrDefault().EnqueueCustomer(customer);
                    return;
            }
        }

        // print(useableCandyMachines.ToArray().Length);

        // if (useableCandyMachines.ToArray().Length > 0)
        // {

        //     // customer.SetDestination() useableCandyMachines.OrderBy(x => Random.value).FirstOrDefault().;
        // }


        // print(useableCandySlots.ToArray().Length);

        // if (useableCandySlots.ToArray().Length > 0)
        // {
        //     useableCandySlots.OrderBy(x => Random.value).FirstOrDefault().EnqueueCustomer(customer);

        //     return;
        //     // customer.SetDestination() useableCandyMachines.OrderBy(x => Random.value).FirstOrDefault().;
        // }

        //타겟을 못찾았을시 5초뒤에 다시 시도
        this.TaskDelay(5f, () => SetTargetCustomer(customer));
    }

    public void PopParticle(string path, Vector3 pos, Transform parent = null)
    {
        if (Resources.Load<GameObject>(path) == null || Managers.Pool == null)
            return;

        var particle = Managers.Pool.Pop(Resources.Load<GameObject>(path), parent);

        particle.transform.localPosition = pos;

        particle.GetComponentInChildren<ParticleSystem>().Play();

        this.TaskDelay(5f, () => Managers.Pool.Push(particle));
    }

    public void StartIdleFirst()
    {
        // HighlightNextStageBtn();

        if (ES3.KeyExists("NextStageEnable"))
        {
            if (ES3.Load<bool>("NextStageEnable"))
            {

            }
            else
            {


            }
        }
        else
        {
            List<CandyItem> newList = new List<CandyItem>();

            var tempcandy1 = SaveManager.instance.FindCandyObjectInReousrce(1);
            var tempcandy2 = SaveManager.instance.FindCandyObjectInReousrce(2);
            var tempcandy3 = SaveManager.instance.FindCandyObjectInReousrce(3);
            var tempcandy4 = SaveManager.instance.FindCandyObjectInReousrce(4);
            var tempcandy5 = SaveManager.instance.FindCandyObjectInReousrce(5);


            newList.Add(new CandyItem() { candy = tempcandy1, count = 100 });
            newList.Add(new CandyItem() { candy = tempcandy2, count = 100 });
            newList.Add(new CandyItem() { candy = tempcandy3, count = 100 });
            newList.Add(new CandyItem() { candy = tempcandy4, count = 100 });
            newList.Add(new CandyItem() { candy = tempcandy5, count = 100 });


            SaveManager.instance.AddCandy(newList);

            ES3.Save<bool>("NextStageEnable", false);
        }

        upgradeBtn.SetActive(false);
        nextStageBtn.SetActive(false);

        nextStageHighlight.SetActive(false);

    }

    public void HighlightNextStageBtn()
    {
        if (ES3.KeyExists("AB_Test"))
        {
            if (ES3.Load<string>("AB_Test").Equals("B"))
                return;
        }
        else
            return;

        nextStageBtn.SetActive(true);

        if (ES3.KeyExists("NextStageEnable"))
        {
            if (ES3.Load<bool>("NextStageEnable"))
                nextStageHighlight.SetActive(true);
        }
        else
            nextStageHighlight.SetActive(true);


        ES3.Save<bool>("NextStageEnable", true);
    }

    public void ChangeUpgradeBtnActive(bool active)
    {
        if (ES3.KeyExists("AB_Test"))
        {
            if (ES3.Load<string>("AB_Test").Equals("B"))
                return;
        }
        else
            return;

        ES3.Save<bool>("ActivedUpgradeBtn", true);

        upgradeBtn.SetActive(active);
    }

    public GameObject GenerateItemObject(Transform parent, int id)
    {
        var find = Resources.LoadAll<GameObject>("Item").Where((n) => n.GetComponent<ItemObject>().GetItem.id == id).First();

        if (find == null)
        {
            Debug.LogError("해당 id의 itemObject를 찾을 수 없습니다. : " + id);
            return null;
        }

        var obj = Managers.Pool.Pop(find, parent);
        // obj.transform.localScale = Vector3.one * 0.2f;
        obj.transform.localPosition = Vector3.zero;

        return obj.gameObject;
    }

    public void SwapCamera(Transform target)
    {
        var lastTarget = idleCamera.m_Follow;
        Vector3 lastOffset = idleCamera.GetCinemachineComponent<CinemachineTransposer>().m_FollowOffset;

        idleCamera.m_Follow = target;
        idleCamera.GetCinemachineComponent<CinemachineTransposer>().m_FollowOffset = new Vector3(35, 45, -20);

        this.TaskDelay(2f, () =>
        {
            idleCamera.m_Follow = lastTarget;
            idleCamera.GetCinemachineComponent<CinemachineTransposer>().m_FollowOffset = lastOffset;
        });
    }

    public void HireWorker(Transform pos)
    {
        var worker = Instantiate(Resources.Load<GameObject>("Worker 1"), pos);

        worker.transform.parent = null;
        worker.transform.localScale = Vector3.one * 1.8f;

        worker.GetComponentInChildren<IdleWorker2>().ChangeMoveSpeed(workerSpeed[workerSpeedUp.currentLevel]);

        workers.Add(worker.GetComponentInChildren<IdleWorker2>());

        IdleManager.instance.PopParticle("Particles/FX_ShardRock_Dust_End_01", worker.transform.position + Vector3.up * 3);
    }
}

public enum candyBuildType
{
    CandyMachine = 1,
    CandySlot = 2,
    CandyDisplayStand = 3

}

[System.Serializable]
public enum IdleUpgradeType
{
    HireWorker = 1,
    WorkerSpeedUp = 2,
    Promotion = 3,
    Income = 4,
    PlayerSpeedUp = 5,
    PlayerCapacityUp = 6,
    WorkerCapacityUp = 7
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

    public int CalculateTotalCost()
    {
        return candy.cost * count;
    }

    public void GenerateItemObject(int id, Transform parent)
    {

    }
}