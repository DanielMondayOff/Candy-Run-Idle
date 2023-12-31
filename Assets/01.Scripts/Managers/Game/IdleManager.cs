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
    [FoldoutGroup("참조")] public GameObject upgradeDot;
    [FoldoutGroup("참조")] public GameObject blackPanel;
    [FoldoutGroup("참조")] public GameObject joyStickCanvas;
    [FoldoutGroup("참조")] public LineRenderer arrowLine = null;
    [FoldoutGroup("참조")] public Transform playerTrans;
    [FoldoutGroup("참조")] public IdlePlayer idlePlayer;
    [FoldoutGroup("참조")] public Transform[] fieldRvSpawnPoint1;
    [FoldoutGroup("참조")] public Transform[] fieldRvSpawnPoint2;
    [FoldoutGroup("참조")] public RunGameType runGameType;
    [FoldoutGroup("참조")] public GameObject playerHat;
    [FoldoutGroup("참조")] public SkinUI skinUI;
    [FoldoutGroup("참조")] public ShopUI shopUI;
    [FoldoutGroup("참조")] public UIBase skinUIButton;
    [FoldoutGroup("참조")] public UIBase shopUIButton;
    [FoldoutGroup("참조")] public Camera uiCamera;
    [FoldoutGroup("참조")] public Transform particleUI;
    [FoldoutGroup("참조")] public Transform firstCollector;
    [FoldoutGroup("참조")] public MoneyDrops bonusMoneyDrops;
    [FoldoutGroup("참조")] public FixedTouchField FixedTouchField;
    [FoldoutGroup("참조")] public GameObject iapLoadingScreen;



    public CanvasGroup[] idleUIs;

    [FoldoutGroup("Value")] public Color activeBtnColor;
    [FoldoutGroup("Value")] public Color deactiveBtnColor;

    [FoldoutGroup("Value")] public Color activeCostColor;
    [FoldoutGroup("Value")] public Color deactiveCostColor;

    [FoldoutGroup("업그레이드")] public IdleUpgrade[] upgrades;

    // [FoldoutGroup("업그레이드")] public IdleUpgrade hireWorker;
    // [FoldoutGroup("업그레이드")] public IdleUpgrade workerSpeedUp;
    // [FoldoutGroup("업그레이드")] public IdleUpgrade promotion;
    // [FoldoutGroup("업그레이드")] public IdleUpgrade extraIncome;
    // [FoldoutGroup("업그레이드")] public IdleUpgrade playerSpeedUp;
    // [FoldoutGroup("업그레이드")] public IdleUpgrade playerCapacity;
    // [FoldoutGroup("업그레이드")] public IdleUpgrade workerCapacity;


    [Space]

    // [FoldoutGroup("업그레이드")] public IdleUpgrade[] upgrades;

    public readonly float[] workerSpeed = { 6, 6.5f, 7f, 7.5f, 8f, 8.5f, 9f, 10f, 10.5f, 11f, 11.5f };
    public readonly float[] customerSpawnSpeed = { 8f, 7.75f, 7.5f, 7.25f, 7f, 6.75f, 6.5f, 6.25f, 6f, 5.75f, 5.5f };
    public readonly float[] maxCustomerCount = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    public readonly float[] extraIncomePercent = { 1f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2f };
    public readonly float[] playerSpeed = { 17, 17.25f, 17.5f, 17.75f, 18f, 18.25f, 18.5f, 18.75f, 19f, 19.25f, 19.5f };
    public readonly float[] playerCapacityValue = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
    public readonly float[] workerCapacityValue = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    public float currentSkinMoveSpeedBonus;
    public int currentSkinMaxStackBonus;
    public float currentSkinCuttingSpeedBonus;
    public int maxCustomerCountBonus_Machine = 0;
    public int maxCustomerRequestBonus = 0;
    public float customerSpawnTimeBonus = 0;

    public int nextOrderPercent = 45;

    public float GetCurrentPlayerSpeed() => playerSpeed[GetUpgrade(IdleUpgradeType.PlayerSpeedUp).currentLevel] * (currentSkinMoveSpeedBonus + 1f);
    public int GetCurrentPlayerMaxStack() => (int)playerCapacityValue[GetUpgrade(IdleUpgradeType.PlayerCapacityUp).currentLevel] + (currentSkinMaxStackBonus);
    public float GetCurrentCuttingSpeed() => RunManager.instance.candyCuttingSpeed + currentSkinCuttingSpeedBonus;

    public bool playIdle = false;
    public bool puaseIRADs = false;

    private TaskUtil.WhileTaskMethod spawnCustomerTask = null;
    private TaskUtil.DelayTaskMethod fieldRvSpeedUpTask = null;

    private List<FieldRvType> bannedFieldRv = new List<FieldRvType>();

    private GameObject nextStageBtnFocus = null;

    //==============================================================================================================================

    public List<DisplayStand> candyDisplayStandList = new List<DisplayStand>();
    public List<StandBuildObject> standBuildList = new List<StandBuildObject>();


    public static IdleManager instance;

    private void OnEnable()
    {
        instance = this;

        // StartCoroutine(SceneLoading());

        SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        if (ES3.KeyExists("workerSpeedUp"))
        {
            GetUpgrade(IdleUpgradeType.WorkerSpeedUp).currentLevel = ES3.Load<IdleUpgrade>("workerSpeedUp").currentLevel;
            workers.ForEach((n) => n.ChangeMoveSpeed(workerSpeed[GetUpgrade(IdleUpgradeType.WorkerSpeedUp).currentLevel]));
        }

        // if (ES3.KeyExists("hireWorker"))
        // {
        //     hireWorker.currentLevel = ES3.Load<IdleUpgrade>("hireWorker").currentLevel;
        //     SpawnWorker(hireWorker.currentLevel + 1);
        // }

        if (ES3.KeyExists("promotion"))
        {
            GetUpgrade(IdleUpgradeType.Promotion).currentLevel = ES3.Load<IdleUpgrade>("promotion").currentLevel;
        }

        if (ES3.KeyExists("income"))
        {
            GetUpgrade(IdleUpgradeType.Income).currentLevel = ES3.Load<IdleUpgrade>("income").currentLevel;
        }

        if (ES3.KeyExists("playerSpeedUp"))
        {
            GetUpgrade(IdleUpgradeType.PlayerSpeedUp).currentLevel = ES3.Load<IdleUpgrade>("playerSpeedUp").currentLevel;

            playerMovement.SetPlayerMoveSpeed(GetCurrentPlayerSpeed());
        }

        if (ES3.KeyExists("playerCapacity"))
        {
            GetUpgrade(IdleUpgradeType.PlayerCapacityUp).currentLevel = ES3.Load<IdleUpgrade>("playerCapacity").currentLevel;
        }

        if (ES3.KeyExists("workerCapacity"))
        {
            GetUpgrade(IdleUpgradeType.WorkerCapacityUp).currentLevel = ES3.Load<IdleUpgrade>("workerCapacity").currentLevel;
        }

    }

    private void Start()
    {
        if (ES3.KeyExists("enableShop"))
            if (ES3.Load<bool>("enableShop"))
                StartIdle(false);

        SaveManager.instance.OnChangeMoney();

        // SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        // StartCoroutine(SceneLoading());

        // startCollector.ActiveThisCollector();

        if (ES3.KeyExists("NextStageEnable"))
        {
            if (ES3.Load<bool>("NextStageEnable"))
            {
                // IdleManager.instance.ChangeIdleCameraOffsetTest();
            }
        }

        if (ES3.KeyExists("NextStageEnable"))
            if (ES3.Load<bool>("NextStageEnable"))
                blackPanel.SetActive(false);


        if (ES3.KeyExists("idlePlayerSkin"))
        {
            foreach (var skin in GetComponentsInChildren<SkinActiveUI>())
            {
                if (skin.type == SkinType.IdlePlayer && skin.id == ES3.Load<int>("idlePlayerSkin"))
                    skin.EnableUsedIcon();
            }

            ChangeIdleSkin(ES3.Load<int>("idlePlayerSkin"));
        }
        else
        {
            ChangeIdleSkin(0);
        }


        SaveManager.instance.onMoneyChangeEvent.AddListener(CheckAnyUpgradeable);

        this.TaskWhile(45, 0, GenerateFieldRVProbTask);

        Managers.Sound.Play("Wonderland - Rooftops", Define.Sound.Bgm, 0.3f);

        // this.TaskWaitUntil(() => { MondayOFF.EventTracker.Initialize(); print("firebaseInit1231451"); }, () => MondayOFF.EveryDay.isInitialized);

        MondayOFF.AdsManager.OnAfterInterstitial += () =>
        {
            if (!playIdle)
                return;

            ES3.Save<int>("IRCount", ES3.KeyExists("IRCount") ? ES3.Load<int>("IRCount") + 1 : 3);

            if ((ES3.KeyExists("IRCount") ? ES3.Load<int>("IRCount") : 1) >= 4)
            {
                ShowIAPPopUp();

                ES3.Save<int>("IRCount", 0);
            }
        };

        SaveManager.instance.onRoyalCandyChangeEvent.AddListener(IdleManager.instance.skinUI.UpdateSlotUI);

        MondayOFF.IAPManager.OnBeforePurchase += () =>
        {
            if (iapLoadingScreen != null)
                Destroy(iapLoadingScreen);
            iapLoadingScreen = Instantiate(Resources.Load<GameObject>("UI/Loading"), null);
        };

        MondayOFF.IAPManager.OnAfterPurchase += (result) =>
        {
            if (iapLoadingScreen != null)
                Destroy(iapLoadingScreen);
        };
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
        else if (Input.GetKeyDown(KeyCode.F4))
        {
            GenerateFieldRVProbTask();
        }
        else if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            Time.timeScale = Time.timeScale + 0.1f;
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            Time.timeScale = Time.timeScale - 0.1f;
        }
        else if (Input.GetKeyDown(KeyCode.N))
        {
            if (!playIdle)
                return;

            ES3.Save<int>("IRCount", ES3.KeyExists("IRCount") ? ES3.Load<int>("IRCount") + 1 : 3);

            if ((ES3.KeyExists("IRCount") ? ES3.Load<int>("IRCount") : 1) >= 4)
            {
                ShowIAPPopUp();

                ES3.Save<int>("IRCount", 0);
            }
        }
        else if (Input.GetKeyDown(KeyCode.B))
        {
            if (ES3.KeyExists("NextStageFocusMask") ? !ES3.Load<bool>("NextStageFocusMask") : true)
            {
                this.TaskDelay(2.5f, () =>
                {

                    nextStageBtn.SetActive(true);

                    var focus = Util.GenerateMask(idleUI.transform, nextStageBtn.GetComponentInChildren<UnityEngine.UI.Text>(true).transform.position);

                    nextStageBtnFocus = focus.gameObject;

                    focus.transform.SetParent(nextStageBtn.GetComponentInChildren<UnityEngine.UI.Text>(true).transform);
                    focus.transform.localPosition = Vector3.zero;
                    focus.transform.SetParent(idleUI.transform);

                    focus.transform.SetSiblingIndex(nextStageBtn.transform.GetSiblingIndex());

                    focus.StartFocus();
                });
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

    public void StartIdle(bool _playIdle = true)
    {
        if (SaveManager.instance.candyInventory.Count >= 0 && !playIdle)
        {
            // GenerateCandyJar();
            // CheckingCandyJar();
            if (spawnCustomerTask == null)
                spawnCustomerTask = this.TaskWhile(customerSpawnSpeed[GetUpgrade(IdleUpgradeType.Promotion).currentLevel], 2, () => GenenrateCustomer());

            playIdle = _playIdle;
        }
    }

    public void GoToIdleGame()
    {
        idleUI.SetActive(true);
        StartIdle();
        idleCamera.gameObject.SetActive(true);
        joyStickCanvas.SetActive(true);

        if (!ES3.KeyExists("FirstIdleEnter"))
        {
            ES3.Save<bool>("FirstIdleEnter", true);
            idlePlayer.ActiveNaviArrow(firstCollector);

            if (SaveManager.instance.GetCurrentMoney < 125)
            {
                bonusMoneyDrops.AddMoney(125 - SaveManager.instance.GetCurrentMoney);
            }
        }

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
        // print("customer Spawn : " + maxCustomerCount[GetUpgrade(IdleUpgradeType.Promotion).currentLevel] + " / " + spawnCustomerTask.GetIntervalTime());

        if (/*SaveManager.instance.candyInventory.Count <= 0 || */ !playIdle || maxCustomerCount[GetUpgrade(IdleUpgradeType.Promotion).currentLevel] + maxCustomerCountBonus_Machine <= customers.Count || candyMachines.Where((n => n.isReady)).Count() == 0)
            return;

        var spawnPoint = currentMap.GetRandomSpawnPoint();
        var customer = Instantiate(Managers.Resource.Load<GameObject>("Customer")).GetComponentInChildren<IdleCustomer>();

        customer.transform.position = spawnPoint.position;

        SetTargetCustomer(customer);

        customer.Init(spawnPoint);

        customers.Add(customer.transform.root.gameObject);


        // var order = MakeOrder(customer.GetComponentInChildren<IdleCustomer>());

        // var emptyLine = FindEmptyOrderLine();

        // order.currentLine = emptyLine;

        // BookTheLine(customer);
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
        puaseIRADs = false;
        idleUI.SetActive(false);
        RunManager.instance.ChangeToRunGame();

        EventManager.instance.CustomEvent(AnalyticsType.UI, "GoToRun", true, true);

        // MondayOFF.EventTracker.LogCustomEvent(
        // "UI",
        // new Dictionary<string, string> { { "UI_TYPE", "GoToRun" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
        // );

        // idleCamera.gameObject.SetActive(false);
        nextStageHighlight.SetActive(false);
        joyStickCanvas.SetActive(false);

        RunManager.instance.blackPanel.SetActive(false);

        if (nextStageBtnFocus != null)
            Destroy(nextStageBtnFocus);

        MondayOFF.AdsManager.ChangeAdvertyCamera(Camera.main);

        // this.TaskDelay(0.1f, () => CameraManager.instance.ChangeCamera("follow"));
        // Managers.Sound.BgmOnOff(false);
    }

    public void TryUpgrade(IdleUpgradeType type)
    {
        foreach (var upgrade in upgrades)
        {
            if (upgrade.upgradeType == type)
            {
                if (upgrade.cost[upgrade.currentLevel] > SaveManager.instance.GetMoney())
                    return;

                SaveManager.instance.LossMoney(upgrade.cost[upgrade.currentLevel]);

                Upgrade(type);
                ES3.Save<IdleUpgrade>("type", upgrade);

                break;
            }
        }
    }

    public void Upgrade(IdleUpgradeType type)
    {
        switch (type)
        {
            case IdleUpgradeType.WorkerSpeedUp:
                GetUpgrade(IdleUpgradeType.WorkerSpeedUp).currentLevel++;
                ES3.Save<IdleUpgrade>("workerSpeedUp", GetUpgrade(IdleUpgradeType.WorkerSpeedUp));
                EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Upgrade - WorkerSpeedUp", true, true);
                break;

            case IdleUpgradeType.Income:
                GetUpgrade(IdleUpgradeType.Income).currentLevel++;
                ES3.Save<IdleUpgrade>("income", GetUpgrade(IdleUpgradeType.Income));
                EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Upgrade - Income", true, true);
                break;

            case IdleUpgradeType.PlayerCapacityUp:
                GetUpgrade(IdleUpgradeType.PlayerCapacityUp).currentLevel++;
                ES3.Save<IdleUpgrade>("playerCapacity", GetUpgrade(IdleUpgradeType.PlayerCapacityUp));
                EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Upgrade - PlayerCapacityUp", true, true);
                break;

            case IdleUpgradeType.PlayerSpeedUp:
                GetUpgrade(IdleUpgradeType.PlayerSpeedUp).currentLevel++;
                ES3.Save<IdleUpgrade>("playerSpeedUp", GetUpgrade(IdleUpgradeType.PlayerSpeedUp));
                playerMovement.SetPlayerMoveSpeed(GetCurrentPlayerSpeed());
                EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Upgrade - PlayerSpeedUp", true, true);
                break;

            case IdleUpgradeType.WorkerCapacityUp:
                GetUpgrade(IdleUpgradeType.WorkerCapacityUp).currentLevel++;
                ES3.Save<IdleUpgrade>("workerCapacity", GetUpgrade(IdleUpgradeType.WorkerCapacityUp));
                EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Upgrade - WorkerCapacityUp", true, true);
                break;

            case IdleUpgradeType.Promotion:
                GetUpgrade(IdleUpgradeType.Promotion).currentLevel++;
                ES3.Save<IdleUpgrade>("promotion", GetUpgrade(IdleUpgradeType.Promotion));
                SetCustomerSpawnSpeed(customerSpawnSpeed[GetUpgrade(IdleUpgradeType.Promotion).currentLevel]);
                EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Upgrade - Promotion", true, true);
                break;
        }
    }

    public void SetCustomerSpawnSpeed(float speed)
    {
        this.TaskWaitUntil(() => spawnCustomerTask.SetIntervalTime(speed), () => spawnCustomerTask != null);
    }

    public void AddCustomerSpawnSpeedBonus(float speed)
    {
        customerSpawnTimeBonus += speed;

        SetCustomerSpawnSpeed(8 - customerSpawnTimeBonus);
    }

    public void SpawnWorker(int count)
    {
        for (int i = 0; i < count; i++)
        {
            var worker = Instantiate(Resources.Load<GameObject>("Worker"), currentMap.workerSpawnPoint.position, Quaternion.identity).GetComponentInChildren<IdleWorker>();

            worker.ChangeMoveSpeed(workerSpeed[GetUpgrade(IdleUpgradeType.WorkerSpeedUp).currentLevel]);
            // workers.Add(worker);
        }
    }

    public void OpenUpgradePanel()
    {
        UpgradeUISort();
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
        var upgrade = GetUpgrade(type);

        if (upgrade != null)
        {
            return upgrade.cost[upgrade.currentLevel];
        }
        else
        {
            Debug.LogError("해당되는 업그레이드가 없습니다.");
            return int.MaxValue;
        }

    }

    public int GetUpgradeCost(IdleUpgradeType type)
    {
        var upgrade = GetUpgrade(type);

        if (upgrade != null)
        {
            return upgrade.cost[upgrade.currentLevel];
        }
        else
        {
            Debug.LogError("해당되는 업그레이드가 없습니다.");
            return int.MaxValue;
        }

    }

    public IdleUpgrade GetUpgrade(IdleUpgradeType type)
    {
        foreach (var upgrade in upgrades)
        {
            if (upgrade.upgradeType == type)
                return upgrade;
        }

        return null;
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

        var useableCandySlots = candySlots.Where((n) => n.isReady && n.CheckHasQueue() && n.IsEnableEnqueue());
        var useableStandBuild = standBuildList.Where((n) => n.isReady && n.CheckHasQueue() && n.IsEnableEnqueue());

        List<IdleCustomer.CustomerOrder> orders = new List<IdleCustomer.CustomerOrder>();

        List<CandySlot> candySlotList = new List<CandySlot>();
        List<StandBuildObject> standList = new List<StandBuildObject>();
        int percent = nextOrderPercent;

        do
        {
            NextOrder();
        }
        while (randomList.Count > 0 && Random.Range(0, 100) < percent && useableStandBuild.Count() > 1);


        void NextOrder()
        {
            randomList.Clear();

            BuildObject build = null;


            percent -= 15;

            if (useableCandySlots.ToArray().Length > 0 && useableCandySlots.Where((n) => !candySlotList.Contains(n)).Count() > 0)
                randomList.Add(candyBuildType.CandySlot);


            if (useableStandBuild.ToArray().Length > 0 && useableStandBuild.Where((n) => !standList.Contains(n)).Count() > 0)
            {
                for (int i = 0; i < 5; i++)
                    randomList.Add(candyBuildType.StandBuild);
            }

            if (randomList.Count > 0)
            {
                switch (randomList[Random.Range(0, randomList.Count)])
                {

                    case candyBuildType.CandySlot:
                        var temp = useableCandySlots.Where((n) => !candySlotList.Contains(n)).OrderBy(x => Random.value).First();

                        build = temp;

                        candySlotList.Add(temp);

                        if (randomList.Contains(candyBuildType.CandySlot))
                            randomList.Remove(candyBuildType.CandySlot);

                        break;

                    case candyBuildType.StandBuild:

                        var temp2 = useableStandBuild.Where((n) => !standList.Contains(n)).OrderBy(x => Random.value).First();

                        build = temp2;

                        if (randomList.Contains(candyBuildType.StandBuild))
                            randomList.Remove(candyBuildType.StandBuild);

                        standList.Add(temp2);

                        if (standList.Count == useableStandBuild.Count())
                            randomList.Clear();

                        break;
                }
            }

            var newOrder = new IdleCustomer.CustomerOrder() { targetBuildObject = build, requestItemCount = Random.Range(1, 3) + maxCustomerRequestBonus };

            orders.Add(newOrder);

            // Debug.LogError(newOrder.targetBuildObject.name + " - " + newOrder.requestItemCount);

            customer.orders = orders;

            customer.StartShopping();

        }

        //타겟을 못찾았을시 5초뒤에 다시 시도
        // this.TaskDelay(5f, () => SetTargetCustomer(customer));
    }

    public void PopParticle(string path, Vector3 pos, Transform parent = null)
    {
        if (Resources.Load<GameObject>(path) == null || Managers.Pool == null || Managers.Scene.CurrentScene == null)
            return;

        var particle = Managers.Pool.Pop(Resources.Load<GameObject>(path), parent);

        particle.transform.localPosition = pos;

        particle.GetComponentInChildren<ParticleSystem>().Play();

        this.TaskDelay(5f, () => { if (particle != null) Managers.Pool.Push(particle); });
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

            newList.Add(new CandyItem() { candy = tempcandy1, count = 10 });
            newList.Add(new CandyItem() { candy = tempcandy2, count = 10 });
            newList.Add(new CandyItem() { candy = tempcandy3, count = 10 });
            newList.Add(new CandyItem() { candy = tempcandy4, count = 10 });
            newList.Add(new CandyItem() { candy = tempcandy5, count = 10 });


            SaveManager.instance.AddCandy(newList);

            ES3.Save<bool>("NextStageEnable", false);
        }

        upgradeBtn.SetActive(false);
        nextStageBtn.SetActive(false);

        Debug.LogError(1513523);


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

        nextStageHighlight.SetActive(ES3.KeyExists("NextStageEnable") ? ES3.Load<bool>("NextStageEnable") : false);

        ES3.Save<bool>("enableIAPShop", true);
        // shopUIButton.Show();
        ES3.Save<bool>("enableSkin", true);
        // skinUIButton.Show();
        ES3.Save<bool>("NextStageEnable", true);
        puaseIRADs = true;

        if (ES3.KeyExists("NextStageFocusMask") ? !ES3.Load<bool>("NextStageFocusMask") : true)
        {
            this.TaskDelay(2.5f, () =>
            {
                ES3.Save<bool>("NextStageFocusMask", true);

                nextStageBtn.SetActive(true);

                var focus = Util.GenerateMask(idleUI.transform, nextStageBtn.GetComponentInChildren<UnityEngine.UI.Text>(true).transform.position);

                nextStageBtnFocus = focus.gameObject;

                focus.transform.SetParent(nextStageBtn.GetComponentInChildren<UnityEngine.UI.Text>(true).transform);
                focus.transform.localPosition = Vector3.zero;
                focus.transform.SetParent(idleUI.transform);

                focus.transform.SetSiblingIndex(nextStageBtn.transform.GetSiblingIndex());

                focus.StartFocus();
            });
        }
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

        worker.GetComponentInChildren<IdleWorker2>().ChangeMoveSpeed(workerSpeed[GetUpgrade(IdleUpgradeType.WorkerSpeedUp).currentLevel]);

        workers.Add(worker.GetComponentInChildren<IdleWorker2>());

        IdleManager.instance.PopParticle("Particles/FX_ShardRock_Dust_End_01", worker.transform.position + Vector3.up * 3);
    }

    void CheckAnyUpgradeable()
    {
        foreach (var slot in upgradePanel.GetComponentsInChildren<IdleUpgradeSlot>())
        {
            if (slot.isPossibleUpgrade)
            {
                upgradeDot.SetActive(true);
                return;
            }
        }
        upgradeDot.SetActive(false);
    }

    public void UpgradeUISort()
    {
        var upgrades = upgradePanel.GetComponentsInChildren<IdleUpgradeSlot>();

        // var parent = upgrades[0].transform.parent;

        // upgrades.OrderBy((n) => n.GetUpgradeCost);

        // foreach (var upgrade in upgrades)
        // {
        //     print(upgrade.GetUpgradeCost);
        // }

        // foreach (var upgrade in upgrades)
        // {
        //     upgrade.transform.SetParent(null);
        // }

        // for (int i = 0; i < upgrades.Length; i++)
        // {
        //     upgrades[i].transform.SetParent(parent);
        // }

        // for (int i = 0; i < upgrades.Length; i++)
        // {
        //     var upgradesObj = GetComponentsInChildren<IdleUpgradeSlot>();
        //     for (int x = 0; x < upgradesObj.Length; x++)
        //     {
        //         if (upgradesObj[x] == upgrades[i])
        //         {
        //             upgradesObj[x].transform.SetSiblingIndex(i);
        //             break;
        //         }
        //     }
        // }

        for (int x = 0; x < upgrades.Length; x++)
        {
            for (int i = 1; i < upgrades.Length; i++)
            {
                if (upgrades[i].GetUpgradeCost < upgrades[i - 1].GetUpgradeCost)
                {
                    upgrades[i].transform.SetSiblingIndex(i - 1);

                    upgrades = upgradePanel.GetComponentsInChildren<IdleUpgradeSlot>();

                    i--;
                }
            }
        }
    }

    public void FieldRV_PlayerSpeedUp()
    {
        playerMovement.extraSpeed = 6f;

        if (fieldRvSpeedUpTask != null)
        {
            fieldRvSpeedUpTask.Kill();
            fieldRvSpeedUpTask = null;
        }

        this.TaskDelay(60, () => { playerMovement.extraSpeed = 0f; bannedFieldRv.Remove(FieldRvType.SpeedUp); });
    }

    public void FieldRV_Money(int value)
    {
        playerMovement.GetComponent<PlayerMoneyText>().ChangeFloatingText(value);
        SaveManager.instance.GetMoney(value);
    }

    public void GenerateFieldRVUI(FieldRvType type, System.Action onComplete = null, string pos = "", System.Action onClickNoThanks = null)
    {
        if (idleUI.GetComponentInChildren<FieldRvUI>() != null)
            return;

        FieldRvUI ui = null;
        switch (type)
        {
            case FieldRvType.SpeedUp:
                ui = Instantiate(Resources.Load<GameObject>("UI/FieldRvUI - SpeedUp"), idleUI.transform).GetComponent<FieldRvUI>();
                break;

            case FieldRvType.Money:
                ui = Instantiate(Resources.Load<GameObject>("UI/FieldRvUI - Money"), idleUI.transform).GetComponent<FieldRvUI>();
                break;
        }

        if (ui != null)
        {
            ui.onComplete = onComplete;
            ui.onClickNoThanks = onClickNoThanks;
            ui.pos = pos;
        }
    }

    void GenerateFieldRVProbTask()
    {
        if (candyMachines.Where((n) => n.isReady).ToList().Count == 0)
            return;

        GameObject prob = null;

        var array = (FieldRvType[])System.Enum.GetValues(typeof(FieldRvType));

        if (SaveManager.instance.GetCurrentMoney < 100)
        {
            var closestSpawnPoint = fieldRvSpawnPoint1.Concat(fieldRvSpawnPoint2).OrderBy((n) => Vector3.Distance(n.transform.position, idlePlayer.transform.position)).ToArray()[0];

            prob = Instantiate(Resources.Load<GameObject>("RVFieldProb - Money"), closestSpawnPoint.position + (Vector3.up * 0.5f), Quaternion.identity);
            prob.GetComponent<fieldRVProbs>().pos = closestSpawnPoint.name;

            EventManager.instance.CustomEvent(AnalyticsType.IDLE, "RV - Spawn MoneyBag_Cloest", true, true);
        }
        else
        {
            var list = array.Where((n) => !bannedFieldRv.Contains(n));

            switch (list.ToArray()[Random.Range(0, list.Count())])
            {
                case FieldRvType.SpeedUp:
                    var pos = fieldRvSpawnPoint1[Random.Range(0, fieldRvSpawnPoint1.Length)];
                    prob = Instantiate(Resources.Load<GameObject>("RVFieldProb - speedUp"), pos.position + (Vector3.up * 0.5f), Quaternion.identity);
                    prob.GetComponent<fieldRVProbs>().pos = pos.name;
                    break;

                case FieldRvType.Money:
                    var pos2 = fieldRvSpawnPoint2[Random.Range(0, fieldRvSpawnPoint2.Length)];
                    prob = Instantiate(Resources.Load<GameObject>("RVFieldProb - Money"), pos2.position + (Vector3.up * 0.5f), Quaternion.identity);
                    prob.GetComponent<fieldRVProbs>().pos = pos2.name;

                    break;
            }
        }



        print("Spawn FieldRVProb " + prob.name);

        prob.GetComponent<fieldRVProbs>().disableTask = this.TaskDelay(30, () => { if (prob != null) Destroy(prob); });
    }

    public void BanFieldRv(FieldRvType type)
    {
        bannedFieldRv.Add(type);
    }

    public void UnBanFieldRv(FieldRvType type)
    {
        bannedFieldRv.Remove(type);
    }

    public void ChangeToDefaultRunType()
    {
        runGameType = RunGameType.Default;

        RunManager.instance.ResetRunGame();
    }

    public void ChangeToCpi1RunType()
    {
        runGameType = RunGameType.CPI1;

        RunManager.instance.ResetRunGame();
    }

    public void ChangeToCpi2RunType()
    {
        runGameType = RunGameType.CPI2;

        RunManager.instance.ResetRunGame();
    }

    public void ChangeToCpi3RunType()
    {
        runGameType = RunGameType.CPI3;

        RunManager.instance.ResetRunGame();
    }

    public void AddRoyalCandy()
    {
        SaveManager.instance.AddRoyalCandy(100);
    }

    public void OnClickChangeShape()
    {

    }

    public void ChangeIdleSkin(int id)
    {
        idlePlayer.GetComponentInChildren<SkinnedMeshRenderer>().sharedMesh = Resources.LoadAll<IdlePlayerSkin>("Skin/IdlePlayer").Where((n) => n.id == id).First().skinMesh;

        SaveManager.instance.SaveCurrentIdlePlayerSkin(id);

        playerHat.SetActive((id == 0));

        ES3.Save<int>("idlePlayerSkin", id);

        SaveManager.instance.IdlePlayerSkinID = id;
    }

    public void AddMaxCustomerCount_Machine(int count) => maxCustomerCountBonus_Machine += count;

    public void AddCustomerRequestMax(int value) => maxCustomerRequestBonus += value;

    public void ShowIAPPopUp(string name = "", Transform parent = null)
    {
        List<GameObject> popupList = new List<GameObject>();

        if (name.Equals(""))
        {
            if (ES3.KeyExists("PurchasePremium") ? !ES3.Load<bool>("PurchasePremium") : true)
                popupList.Add(Resources.Load<GameObject>("UI/IAP_PopUp_Premium"));

            if (ES3.KeyExists("PurchaseNoAds") ? !ES3.Load<bool>("PurchaseNoAds") : true)
                popupList.Add(Resources.Load<GameObject>("UI/IAP_PopUp_NoAds"));

            if (popupList.Count > 0)
            {
                var popup = Instantiate(popupList[Random.Range(0, popupList.Count)], (parent == null) ? idleUI.transform : parent);
                // var popup = Managers.Pool.Pop(popupList[Random.Range(0, popupList.Count)], idleUI.transform);

                foreach (var dotween in GetComponentsInChildren<DG.Tweening.DOTweenAnimation>())
                {

                }

                popup.GetComponent<RectTransform>().localScale = Vector3.one;
                popup.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;

                SetStretch(popup.GetComponent<RectTransform>(), 0, 0, 0, 0);

                EventManager.instance.CustomEvent(AnalyticsType.IAP, "Show Popup IAP Offer_" + popup.name, true, true);
            }
        }
        else
        {
            var popup = Instantiate(Resources.Load<GameObject>(name), (parent == null) ? idleUI.transform : parent);

            popup.GetComponent<RectTransform>().localScale = Vector3.one;
            popup.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;

            SetStretch(popup.GetComponent<RectTransform>(), 0, 0, 0, 0);
        }

        void SetStretch(RectTransform rectTransform, float left, float right, float top, float bottom)
        {
            // anchorMin과 anchorMax를 조절하여 Stretch를 변경
            rectTransform.offsetMin = new Vector2(left, bottom);
            rectTransform.offsetMax = new Vector2(1 - right, 1 - top);
        }
    }
}

public enum candyBuildType
{
    CandyMachine = 1,
    CandySlot = 2,
    CandyDisplayStand = 3,
    StandBuild = 4

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