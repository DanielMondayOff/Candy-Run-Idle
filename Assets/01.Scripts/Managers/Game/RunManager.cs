using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine.SceneManagement;
using MoreMountains.NiceVibrations;
using System.Linq;
using Unity.Services.RemoteConfig;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class RunManager : MonoBehaviour
{
    public static RunManager instance;

    public static int ForceIdleStage = 3;

    [TitleGroup("setting Value")] public static float DefaultBulletFireRate = 0.5f;
    [TitleGroup("setting Value")] public float plusFireRate = 0f;
    [TitleGroup("setting Value")] public float addFireRateValue = 1f;
    [TitleGroup("setting Value")] public float defaultPillerFireRateValue = 100f;

    [TitleGroup("setting Value")] public static float defaultCandyLength = 200f;
    [Space]
    [TitleGroup("setting Value")] public float plusCandyLength = 1f;
    [TitleGroup("setting Value")] public float addCandyLengthValue = 1f;
    [TitleGroup("setting Value")] public float defaultPillerLengthValue = 100f;

    [TitleGroup("setting Value")] public static float defaultBulletRange = 100f;
    [Space]
    [TitleGroup("setting Value")] public float plusBulletRange = 0f;
    [TitleGroup("setting Value")] public float addBulletRangeValue = 100f;

    [TitleGroup("setting Value")] public static int defaultCandyCount = 1;
    [Space]
    [TitleGroup("setting Value")] public int plusCandyCount = 0;
    [Space]
    [TitleGroup("setting Value")] public float cutCandyLength = 0.1f;

    [Space]
    [TitleGroup("setting Value")] public float candyCuttingSpeed = 1f;

    [TitleGroup("setting Value")] public static float maxCandyLength = 2000;



    [FoldoutGroup("참조")] public List<GameObject> candyList = new List<GameObject>();
    [FoldoutGroup("참조")] public Material[] jellyBeanMats;
    [FoldoutGroup("참조")] public Transform runPlayer;
    [FoldoutGroup("참조")] public GameObject candyPrefab;
    [FoldoutGroup("참조")] public GameObject cutCandyPrefab;
    [FoldoutGroup("참조")] public GameObject startUI;
    [FoldoutGroup("참조")] public GameObject runEndUI;
    [FoldoutGroup("참조")] public Animator jarAnimator;
    [FoldoutGroup("참조")] public CandyInventory EndCandyInventoryUI;
    [FoldoutGroup("참조")] public Transform startPoint;
    [FoldoutGroup("참조")] public GameObject jellyGunStartUI;
    [FoldoutGroup("참조")] public GameObject swipeToStartUI;
    [FoldoutGroup("참조")] public UnityEngine.UI.Text moneyText;
    [FoldoutGroup("참조")] public Transform moneyImagePos;
    [FoldoutGroup("참조")] public GameObject runGameUI;
    [FoldoutGroup("참조")] public GameObject particleUI;
    [FoldoutGroup("참조")] public GameObject goToShopBtn;
    [FoldoutGroup("참조")] public GameObject nextStageBtn;
    [FoldoutGroup("참조")] public GameObject sellCandyBtn;
    [FoldoutGroup("참조")] public GameObject nextStageBtnGroup;
    [FoldoutGroup("참조")] public GameObject joyStickCanvas;
    [FoldoutGroup("참조")] public GameObject candyInventoryUI;

    [FoldoutGroup("참조")] public StartCard startCard;

    [FoldoutGroup("참조")] public CanvasGroup[] runUIs;
    [FoldoutGroup("참조")] public GameObject canvas;
    [FoldoutGroup("참조")] public GameObject blackPanel;

    [FoldoutGroup("참조")] public GameObject jarBlock;

    [FoldoutGroup("참조")] public Camera uiCamera;
    [FoldoutGroup("참조")] public Canvas particleCanvas;
    [FoldoutGroup("참조")] public ParticleUI particleUI2;

    [FoldoutGroup("참조")] public GameObject x2ClaimBtn;
    [FoldoutGroup("참조")] public GameObject noThanksBtn;
    [FoldoutGroup("참조")] public UIAttractorCustom[] uIAttractorCustoms;
    [FoldoutGroup("참조")] public GameObject DefaultPlayer;
    [FoldoutGroup("참조")] public CandyUnlockUI candyUnlockUI;

    [FoldoutGroup("참조")] public GameObject NewCandyUnlockedUI;
    [FoldoutGroup("참조")] public UnityEngine.UI.Image unlockedImage;
    [FoldoutGroup("참조")] public GameObject NewCandyUnlockedUI_NextStageBtn;
    [FoldoutGroup("참조")] public GameObject NewCandyUnlockedUI_SellCandyBtn;

    [FoldoutGroup("참조")] public Transform royalCandyTargetTrans;
    [FoldoutGroup("참조")] public CutterSkin[] cutterskins;

    [FoldoutGroup("참조")] public UnityEngine.UI.Text EndCardMoneyText;
    [FoldoutGroup("참조")] public Transform GetMoneyImage;
    [FoldoutGroup("참조")] public Transform x2clameStartPos;

    [FoldoutGroup("참조")] public Material moneyMat;
    [FoldoutGroup("참조")] public Cinemachine.CinemachineVirtualCamera rungame;



    [FoldoutGroup("CPI1")] public UnityEngine.UI.Text candyStackText;
    [FoldoutGroup("CPI1")] public GameObject CPI1Player;
    [FoldoutGroup("CPI1")] public Queue<GameObject> candyStackQueue = new Queue<GameObject>();
    [FoldoutGroup("CPI1")] public int maxCandyStackCount = 15;
    [FoldoutGroup("CPI1")] private int currentCandyCandyStackCount;
    [FoldoutGroup("CPI1")] public bool enableCandyStack = true;
    [FoldoutGroup("CPI1")] public PlayerCandyJar currentPlayerCandyJar;
    [FoldoutGroup("CPI1")] public MeshRenderer railRenderer;
    [FoldoutGroup("CPI1")] public Transform railEndPoint;
    [FoldoutGroup("CPI1")] public Transform jarSpawnParent;
    [FoldoutGroup("CPI1")] public GameObject endStand;
    [FoldoutGroup("CPI1")] public Transform[] jarStandPoint;
    [FoldoutGroup("CPI1")] public int jarStackCount;


    [FoldoutGroup("CPI2")] public GameObject candyCountTextParent;
    [FoldoutGroup("CPI2")] public UnityEngine.UI.Text candyCountText;
    [FoldoutGroup("CPI2")] public int currentCandyCount;
    [FoldoutGroup("CPI2")] public int maxCandyCount = 15;
    [FoldoutGroup("CPI2")] public List<GameObject> completedCandyList = new List<GameObject>();


    // [FoldoutGroup("CPI3")] public CandyTailController currentCandyTailController;
    [FoldoutGroup("CPI3")] public CandyTailController currentCandyTailController;
    [FoldoutGroup("CPI3")] public UnityEngine.UI.Text candyLengthText;
    [FoldoutGroup("CPI3")] public GameObject candyLengthTextParent;



    [TitleGroup("Game Value")] public int currentMoney;
    [TitleGroup("Game Value")] public bool fireBullet = false;
    [TitleGroup("Game Value")] public bool isGameStart = false;
    [TitleGroup("Game Value")] public bool isGameEnd = false;
    [TitleGroup("Game Value")] public bool canMove = false;
    [TitleGroup("Game Value")] public bool enableSwipe = true;


    [TitleGroup("Game Value")] public bool cuttingPhase = false;
    [TitleGroup("Game Value")] public bool cuttingReady = false;
    [TitleGroup("Game Value")] public bool cuttingPressed = false;

    [TitleGroup("Game Value")] public bool tripleShot = false;


    [TitleGroup("Cutting Phase")] public Transform cuttingPoint1;
    [TitleGroup("Cutting Phase")] public Transform cuttingPoint2;
    [TitleGroup("Cutting Phase")] public Animator cutterAnimator;
    [TitleGroup("Cutting Phase")] public GameObject touchToCutBtn;
    [TitleGroup("Cutting Phase")] public GameObject touchToCutImage;

    public float GetCurrentCandyLength() => defaultCandyLength + plusCandyLength;
    public float GetBulletRange() => defaultBulletRange + (plusBulletRange * 2);

    private List<GameObject> cuttedCandys = new List<GameObject>();

    TaskUtil.WhileTaskMethod fireTask;
    TaskUtil.DelayTaskMethod noThanksTask;

    private TempCandyInventory lastCandyInventory;
    public TempCandyInventory GetLastCandyInventory() => lastCandyInventory;

    private bool mergeChecking = false;

    private CandyArrangeType currentCandyArrangeType = CandyArrangeType.Pyramid;
    public void SetCandyArarngeType(CandyArrangeType type) => currentCandyArrangeType = type;

    public static bool forceIdle = true;
    public void SetForceIdle(bool force) => forceIdle = force;

    public bool fireBulletEnable = true;

    float moneyStack = 0;

    public bool showNewCandyUnlock = false;
    public TaskUtil.DelayTaskMethod showNewCandyUnlockTask;


    [SerializeField] private CutterSkin currentCutter;

    TempCandyInventory tempCandyInventory;
    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        runGameUI.SetActive(true);
        CameraManager.instance.ChangeCamera("follow");

        fireTask = this.TaskWhile(RunManager.instance.GetCurrentFireRate(), 1, () =>
        {
            if (fireBullet && !cuttingPhase && !isGameEnd && fireBulletEnable)
            {
                if (RunRunManager.instance != null)
                {
                    if (RunRunManager.instance.currentBulletCount > 0)
                    {
                        candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>(true).GenerateBullet());
                        RunRunManager.instance.UseBullet();
                        RunRunManager.instance.gunKnockBack();

                    }
                }
                else
                    candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().GenerateBullet());

                if (StageManager.instance.IsAllowJellyGun)
                    Managers.Sound.Play("J.BoB - Mobile Game - Interface Short Woody Click", volume: 0.5f, pitch: Random.Range(0.8f, 1f));
            }
        });

        if (IdleManager.instance != null)
        {
            if (StageManager.instance.currentStageNum == 2)
            {
                swipeToStartUI.SetActive(false);
                jellyGunStartUI.SetActive(true);

                enableSwipe = false;
            }

            if (ES3.KeyExists("enableShop"))
                if (ES3.Load<bool>("enableShop"))
                    goToShopBtn.SetActive(true);

            if (StageManager.instance.currentStageNum >= ForceIdleStage)
            {
                startCard.GenearteCards();
            }

            if (ES3.KeyExists("AB_Test"))
                if (ES3.Load<string>("AB_Test").Equals("A"))
                    blackPanel.SetActive(false);

            if (ES3.KeyExists("NextStageEnable"))
                if (ES3.Load<bool>("NextStageEnable"))
                    blackPanel.SetActive(false);

            // currentCandyArrangeType = ES3.KeyExists("CandyArrangeType") ? ES3.Load<CandyArrangeType>("CandyArrangeType") : CandyArrangeType.Horizontal;

            // ABManager.instance.SelectStart("B");

            // MondayOFF.AdsManager.ShowBanner();

            // this.TaskDelay(3f, TestCrash3);

            switch (IdleManager.instance.runGameType)
            {
                case RunGameType.Default:
                    DefaultPlayer.SetActive(true);

                    maxCandyLength = 2000;
                    break;

                case RunGameType.CPI1:
                    DefaultPlayer.SetActive(false);
                    CPI1Player.SetActive(true);

                    railRenderer.materials[0].DOOffset(new Vector2(0, 100), 40).SetLoops(-1);

                    endStand.SetActive(true);
                    cutterAnimator.gameObject.SetActive(false);
                    jarAnimator.gameObject.SetActive(false);

                    railRenderer.gameObject.SetActive(true);

                    maxCandyLength = 9999;
                    break;

                case RunGameType.CPI2:
                    candyCountTextParent.SetActive(true);

                    maxCandyLength = 9999;
                    break;

                case RunGameType.CPI3:
                    candyLengthTextParent.SetActive(true);

                    maxCandyLength = 9999;
                    break;


            }

            this.TaskWhile(0.2f, 0, () => { if (candyStackQueue.Count > 0 && enableCandyStack) currentPlayerCandyJar.StackCandy(candyStackQueue.Dequeue()); });

            if (ES3.KeyExists("cutterSkin"))
            {
                foreach (var skin in GetComponentsInChildren<SkinActiveUI>())
                {
                    if (skin.type == SkinType.Cutter && skin.id == ES3.Load<int>("cutterSkin"))
                        skin.EnableUsedIcon();
                }
                ChangeCutterSkin(ES3.Load<int>("cutterSkin"));
            }
            else
            {
                ChangeCutterSkin(0);
            }

            var cameraData = Camera.main.GetUniversalAdditionalCameraData();
            cameraData.cameraStack.Add(IdleManager.instance.uiCamera);

            if (ES3.KeyExists("focusSellCandy") ? ES3.Load<bool>("focusSellCandy") : false)
            {
                var focus = Util.GenerateMask(runGameUI.transform, goToShopBtn.transform.position);

                focus.transform.SetParent(goToShopBtn.GetComponentInChildren<UnityEngine.UI.Text>().transform);
                focus.transform.localPosition = Vector3.zero;
                focus.transform.SetParent(runGameUI.transform);

                focus.transform.SetSiblingIndex(goToShopBtn.transform.GetSiblingIndex());

                focus.StartFocus();

                ES3.Save<bool>("focusSellCandy", false);
            }

            if (candyInventoryUI != null)
                CandyInventory.instance.SyncCurrentCandyUI();

        }
    }

    private void OnEnable()
    {
        SaveManager.instance.OnChangeMoney();
        SaveManager.instance.OnChangeRoyalCandy();
    }

    private void OnDestroy()
    {
        SaveManager.instance.RemoveMoneyText(moneyText);
    }

    private void Update()
    {
        if (cuttingPressed && cuttingReady)
        {
            CuttingCandy();
        }

        #region Cheat

        if (Input.GetKeyDown(KeyCode.Alpha1))
            AddCandy();

        else if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            AddCandyLength(200, false);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            plusCandyLength -= 100;

            ChangeCandysLength();
        }
        else if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            TakeDamage(100, Vector3.zero);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            candyList.ForEach((n) => StartCoroutine(n.GetComponentInChildren<CandyTailController>().TailWave(100)));
        }
        else if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            tripleShot = true;
        }
        else if (Input.GetKeyDown(KeyCode.Alpha7))
        {
            StageManager.instance.ClearStage();
            SceneManager.UnloadScene("Run");
            SceneManager.LoadScene("Run", LoadSceneMode.Additive);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha8))
        {
            SaveManager.instance.GetMoney(500);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha9))
        {
            SaveManager.instance.LossMoney(500);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            CandyLevelUp();
        }
        else if (Input.GetKeyDown(KeyCode.F12))
        {
            ES3.DeleteFile();
            Application.Quit();
        }
        else if (Input.GetKeyDown(KeyCode.Q))
        {
            plusFireRate += 100;

            ChangeFireRate(GetCurrentFireRate());
        }
        else if (Input.GetKeyDown(KeyCode.W))
        {
            plusFireRate -= 100;

            ChangeFireRate(GetCurrentFireRate());
        }
        else if (Input.GetKeyDown(KeyCode.E))
        {
            plusBulletRange += 100;
        }
        else if (Input.GetKeyDown(KeyCode.R))
        {
            plusBulletRange -= 100;
        }
        else if (Input.GetKeyDown(KeyCode.M))
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
        }
        else if (Input.GetKeyDown(KeyCode.Z))
        {
            foreach (var canvas in runUIs)
            {
                canvas.alpha = (canvas.alpha == 1) ? 0 : 1;
            }

            particleCanvas.gameObject.SetActive(!particleCanvas.gameObject.activeSelf);
        }
        else if (Input.GetKeyDown(KeyCode.F3))
        {
            int nextEnumIndex = (int)currentCandyArrangeType + 1;

            if (nextEnumIndex > System.Enum.GetValues(typeof(CandyArrangeType)).Length)
            {
                nextEnumIndex = 1; // 마지막에서 처음으로 돌아감
            }

            currentCandyArrangeType = (CandyArrangeType)nextEnumIndex;
        }
        else if (Input.GetKeyDown(KeyCode.F4))
        {
            fireBulletEnable = !fireBulletEnable;
        }
        else if (Input.GetKeyDown(KeyCode.F7))
        {
            StageManager.instance.BackStage();
            SceneManager.UnloadScene("Run");
            SceneManager.LoadScene("Run", LoadSceneMode.Additive);
        }
        else if (Input.GetKeyDown(KeyCode.F10))
        {
            SaveManager.instance.RVTicketAdd(1);
        }
        else if (Input.GetKeyDown(KeyCode.F11))
        {
            SaveManager.instance.RVTicketUse(1);
        }
        else if (Input.GetKeyDown(KeyCode.V))
        {
            MondayOFF.AdsManager.ShowInterstitial();
        }
        // else if (Input.GetKeyDown(KeyCode.T))
        // {
        //     candyStackQueue.Enqueue(1);
        // }

        #endregion
    }

    public void RunGameStart()
    {
        startUI.SetActive(false);
        goToShopBtn.SetActive(false);
        isGameStart = true;
        canMove = true;

        ChangeCandysLength();

        startCard.gameObject.SetActive(false);

        StageManager.instance.TryStage();

        if (RunRunManager.instance == null)
            EventManager.instance.CustomEvent(AnalyticsType.RUN, "RunTryStage - " + StageManager.instance.currentStageNum, true, true);

        if (RunRunManager.instance != null)
        {
            RunRunManager.instance.StartStage();
        }
    }

    public float GetCurrentFireRate()
    {
        var result = DefaultBulletFireRate - (plusFireRate * 0.5f);

        return Mathf.Clamp(result, 0.1f, 1);
    }

    public void ChangeBulletFireRate(float value)
    {
        plusFireRate += value;
    }

    public void AddCandyLength(float value, bool tween = true)
    {
        value = Mathf.Clamp(value, -300, 300);

        switch (IdleManager.instance.runGameType)
        {
            case RunGameType.CPI2:

                currentCandyTailController.ChangeCandyLength(currentCandyCount * 70, true);

                currentCandyCount++;
                currentCandyTailController.GetComponent<CandyHead>().cpi2Length = currentCandyCount * 70;

                if (value > 0)
                {
                    if (tween)
                    {
                        StartCoroutine(currentCandyTailController.TailWave(value, () =>
                        {
                            plusCandyLength += value;

                            plusCandyLength = Mathf.Clamp(plusCandyLength, 0, maxCandyLength);

                            // ChangeCandysLength();

                            currentCandyTailController.ChangeCandyLength(currentCandyCount * 70, true);

                        }));
                    }
                    else
                    {
                        plusCandyLength += value;

                        plusCandyLength = Mathf.Clamp(plusCandyLength, 0, maxCandyLength);

                        // ChangeCandysLength();

                        currentCandyTailController.ChangeCandyLength(currentCandyCount * 70, true);
                    }
                }
                else
                {
                    plusCandyLength += value;
                    plusCandyLength = Mathf.Clamp(plusCandyLength, 0, maxCandyLength);
                    // ChangeCandysLength();
                    currentCandyTailController.ChangeCandyLength(currentCandyCount * 70, true);
                }

                if (currentCandyCount >= maxCandyCount)
                {
                    completedCandyList.Add(currentCandyTailController.gameObject);
                    currentCandyTailController = AddCandy().GetComponentInChildren<CandyTailController>();
                    currentCandyCount = 0;

                    currentCandyTailController.ChangeCandyLength(currentCandyCount * 70, true);
                }

                candyCountText.text = currentCandyCount + " / " + maxCandyCount;
                break;

            default:
                if (value > 0)
                {
                    if (tween)
                    {
                        candyList.ForEach((n) => StartCoroutine(n.GetComponentInChildren<CandyTailController>().TailWave(value, () =>
                        {
                            plusCandyLength += value;

                            plusCandyLength = Mathf.Clamp(plusCandyLength, 0, maxCandyLength);

                            ChangeCandysLength();
                        })));
                    }
                    else
                    {
                        plusCandyLength += value;

                        plusCandyLength = Mathf.Clamp(plusCandyLength, 0, maxCandyLength);

                        ChangeCandysLength();
                    }
                }
                else
                {
                    plusCandyLength += value;

                    plusCandyLength = Mathf.Clamp(plusCandyLength, 0, maxCandyLength);

                    ChangeCandysLength();
                }

                // if (IdleManager.instance.runGameType == RunGameType.CPI3)
                //     candyLengthTextParent.transform.localPosition = new Vector3(candyLengthTextParent.transform.localPosition.x, candyLengthTextParent.transform.localPosition.y, -5f - (plusCandyLength / 100f));
                break;
        }


    }

    public void ChangeCandysLength(bool clamp = true)
    {
        // candyList.ForEach((n) => n.transform.localScale = new Vector3(n.transform.localScale.x, n.transform.localScale.y, GetCurrentCandyLength() / 1000f));

        // candyList.ForEach((n) => n.GetComponentInChildren<FIMSpace.FTail.TailAnimator2>().TailAnimatorAmount = GetCurrentCandyLength());

        // print(GetCurrentCandyLength());

        candyList.ForEach((n) => n.GetComponentInChildren<CandyTailController>().ChangeCandyLength(GetCurrentCandyLength(), clamp));

        candyLengthText.text = (GetCurrentCandyLength() > 2000) ? "9999" : ((GetCurrentCandyLength() * 0.001f) * 39).ToString("F1");
    }

    public GameObject AddCandy()
    {
        var newCandy = Instantiate(candyPrefab, new Vector3(runPlayer.transform.position.x, candyPrefab.transform.position.y, runPlayer.transform.position.z), Quaternion.Euler(0, 180, 0), runPlayer);
        candyList.Add(newCandy);
        ArrangeCandy(currentCandyArrangeType);

        newCandy.GetComponentInChildren<CandyTailController>().ChangeCandyLength(GetCurrentCandyLength());

        // newCandy.GetComponentInChildren<FIMSpace.FTail.TailAnimator2>().enabled = true;
        newCandy.transform.DOScaleZ(1, 1f);

        // for (int i = 0; i < candyList.Count; i++)
        // {
        //     candyList[0].transform.DOMoveX()
        // }

        // OnChangeCandyList();

        return newCandy;
    }

    public void PillerPass(PillerType type, float value)
    {
        switch (type)
        {
            case PillerType.Length:

                AddCandyLength(value);
                // plusCandyLength += value;

                // ChangeCandysLength();
                break;

            case PillerType.FireRate:
                plusFireRate += (value / 1000f);

                ChangeFireRate(GetCurrentFireRate());

                break;

            case PillerType.Range:
                plusBulletRange += (value / 7f);

                break;

            case PillerType.Candy:
                plusCandyCount += Mathf.FloorToInt(value);
                AddCandy();
                break;

            case PillerType.TripleShot:
                tripleShot = true;
                break;

            case PillerType.CandyLevelUp:
                CandyLevelUp();
                break;

        }
    }

    void ArrangeCandy(CandyArrangeType type = CandyArrangeType.Horizontal)
    {
        int count = candyList.Count;

        float spacing = 1.3f;
        if (count == 0)
        {
            Debug.LogWarning("List에 GameObject가 없습니다.");
            return;
        }
        switch (type)
        {
            case CandyArrangeType.Horizontal:

                spacing = 1.3f;
                float startX = -spacing * (count / 2); // 시작 X 좌표 계산

                if (count % 2 == 1)
                {
                    for (int i = 0; i < count; i++)
                    {
                        Vector3 position = new Vector3((startX + i * spacing), candyList[i].transform.localPosition.y, 0f);
                        candyList[i].transform.localPosition = position;
                    }
                }
                else
                {
                    for (int i = 0; i < count; i++)
                    {
                        Vector3 position = new Vector3(startX + i * spacing + (spacing / 2f), candyList[i].transform.localPosition.y, 0f);
                        candyList[i].transform.localPosition = position;
                    }
                }
                break;

            case CandyArrangeType.Vertical:

                spacing = 1.25f;

                for (int i = 0; i < count; i++)
                {
                    Vector3 position = new Vector3(0, 0.75f + (i * spacing), 0f);
                    candyList[i].transform.localPosition = position;
                }

                break;

            case CandyArrangeType.Pyramid:

                // print("캔디 개수 : " + count + " / 피라미드 높이 : " + (Mathf.Sqrt(2) / 2));

                // float objectWidth = 1.25f;
                // float objectHeight = 1.25f;

                int height = GetPyramidHeight(count);

                int stack = 0;

                for (int x = height; x != 0; x--)
                {
                    float currentheight = 0.7f + (1f * (height - x));

                    for (int i = 0; i < x; i++)
                    {
                        spacing = 1.3f;
                        startX = -spacing * (x / 2); // 시작 X 좌표 계산

                        Vector3 position;

                        if (x % 2 == 1)
                            position = new Vector3((startX + (i * spacing)), currentheight, 0f);
                        else
                            position = new Vector3(startX + (i * spacing) + (spacing / 2f), currentheight, 0f);

                        if (candyList.Count <= stack)
                            return;

                        candyList[stack].transform.localPosition = position;

                        stack++;

                        if (candyList.Count < stack)
                            return;

                        print("test");

                    }
                }

                break;
        }
    }

    public int GetPyramidHeight(int count)
    {
        int height = 0;
        int tempCount = 0;

        while (true)
        {
            tempCount += height;
            // tempCount += height;
            if (count - 1 < tempCount)
            {
                print("개수 : " + count + " / 피라미드의 높이 : " + (height - 1) + " / " + tempCount);

                return height;
            }

            height++;
        }
    }

    public int GetSqureSideLength(int count)
    {
        int num1 = 1;
        while (true)
        {
            if (count >= num1 * num1 && count <= (num1 + 1) * (num1 + 1))
            {

                return num1 + 1;
            }
            else
                num1++;
        }
    }

    public void TakeDamage(float damage, Vector3 hitPoint, bool knockBack = false)
    {
        plusCandyLength -= damage;

        switch (IdleManager.instance.runGameType)
        {
            case RunGameType.CPI2:

                break;

            default:
                ChangeCandysLength();
                break;
        }


        // runPlayer.transform.Translate(new Vector3(0, 0, -1f));

        foreach (var candy in candyList)
        {
            var candypiece = Instantiate(Managers.Resource.Load<GameObject>("Candy_Piece"), hitPoint, Quaternion.identity);

            candypiece.GetComponent<CandyPieces>().Init(candy.GetComponentInChildren<CandyHead>().candyObject.mat);

            candypiece.GetComponentInChildren<CandyPieces>().ExplosionPieces(candy.transform);
        }

        foreach (var candy in candyList)
        {
            var candypiece = Instantiate(Managers.Resource.Load<GameObject>("Candy_Piece"), hitPoint, Quaternion.identity);

            candypiece.GetComponent<CandyPieces>().Init(candy.GetComponentInChildren<CandyHead>().candyObject.mat);

            candypiece.GetComponentInChildren<CandyPieces>().ExplosionPieces(candy.transform);
        }

        MMVibrationManager.Haptic(HapticTypes.MediumImpact);

        if (knockBack)
        {
            runPlayer.DOMoveZ(runPlayer.transform.position.z - 3.5f, .5f).SetEase(Ease.OutCubic);
        }
    }

    public void ChangeFireRate(float rate) => fireTask.SetIntervalTime(Mathf.Clamp(rate, -200, 200));

    public void GetMoney(int value)
    {
        currentMoney += value;
    }

    public void CandyLevelUp()
    {
        var candyListCopy = new List<GameObject>(candyList);

        StartCoroutine(candyLevelUp());

        IEnumerator candyLevelUp()
        {
            foreach (var candy in candyListCopy)
            {
                yield return new WaitForSeconds(0.1f);

                if (candy != null)
                    if (candy.GetComponentInChildren<CandyHead>() != null)
                        candy.GetComponentInChildren<CandyHead>().UpgradeCandy();
            }
        }
    }

    public void StartCuttingCandy()
    {
        isGameEnd = true;
        canMove = false;
        cuttingPhase = true;

        touchToCutBtn.SetActive(true);
        touchToCutImage.SetActive(true);

        runPlayer.transform.DOMove(cuttingPoint1.transform.position, 1f).OnComplete(() => { cuttingReady = true; });
        runPlayer.transform.DORotate(new Vector3(30, 0, 0), 1f);

        CameraManager.instance.ChangeCamera("cutting");

        tempCandyInventory = new TempCandyInventory();

        candyCountTextParent.SetActive(false);
        candyLengthTextParent.SetActive(false);
        // joyStickCanvas.SetActive(false);
    }

    public void OnPressDownCuttingBtn()
    {
        cuttingPressed = true;
    }

    public void OnPressUpCuttingBtn()
    {
        cuttingPressed = false;
    }

    public void CuttingCandy()
    {
        if (!cuttingReady || !cuttingPhase)
            return;

        touchToCutImage.SetActive(false);



        switch (IdleManager.instance.runGameType)
        {
            case RunGameType.CPI3:
            case RunGameType.Default:

                MMVibrationManager.Haptic(HapticTypes.MediumImpact);

                if (GetCurrentCandyLength() < 100f)
                {
                    candyList.ForEach((n) =>
                    {
                        var candyPos = n.GetComponentInChildren<CandyHead>().CutCandy(cuttedCandys);
                        tempCandyInventory.AddCandy(new CandyItem() { candy = n.GetComponentInChildren<CandyHead>().candyObject, count = 1 });

                        var money = n.GetComponentInChildren<CandyHead>().candyObject.moneyForCut;

                        moneyStack += money;

                        GenerateUIAttract(n, candyPos, (int)money);

                    });

                    plusCandyLength = 0;

                    ChangeCandysLength(false);

                    candyList.ForEach((n) => n.SetActive(false));

                    EndCuttingCandy(tempCandyInventory, (int)moneyStack);
                }
                else
                {
                    currentCutter.CutAnimation();
                    cuttingReady = false;

                    candyList.ForEach((n) =>
                    {
                        tempCandyInventory.AddCandy(new CandyItem() { candy = n.GetComponentInChildren<CandyHead>().candyObject, count = 1 });
                    });

                    this.TaskDelay(0.07f / IdleManager.instance.GetCurrentCuttingSpeed(), () =>
                    {
                        candyList.ForEach((n) =>
                        {
                            var candyPos = n.GetComponentInChildren<CandyHead>().CutCandy(cuttedCandys);

                            var money = n.GetComponentInChildren<CandyHead>().candyObject.moneyForCut;

                            moneyStack += money;

                            GenerateUIAttract(n, candyPos, (int)money);
                        });

                        runPlayer.transform.position = cuttingPoint2.position;
                        plusCandyLength -= 100f;

                        if (GetCurrentCandyLength() < 100f)
                            ChangeCandysLength(false);
                        else
                            ChangeCandysLength();

                        this.TaskDelay(0.08f / IdleManager.instance.GetCurrentCuttingSpeed(), () =>
                        {
                            runPlayer.transform.DOMove(cuttingPoint1.transform.position, 0.2f / IdleManager.instance.GetCurrentCuttingSpeed()).SetEase(Ease.InOutQuad).OnComplete(() => { cuttingReady = true; });
                        });
                    });
                }

                Managers.Sound.Play("DT Sound - Kitchen Service - Knife Chop on Wooden Cutting Board Single");
                break;

            case RunGameType.CPI2:
                var list = candyList.Where((n) => n.GetComponent<CandyHead>().cpi2Length > 0).ToList();

                Debug.LogError(list.Count());

                if (list.Count() <= 0)
                {
                    //Cutting End

                    EndCuttingCandy(tempCandyInventory, (int)moneyStack);

                    candyList.ForEach((n) => n.SetActive(false));
                }
                else
                {
                    currentCutter.CutAnimation();
                    // cutterAnimator.SetTrigger("Cut");
                    cuttingReady = false;

                    candyList.ForEach((n) => tempCandyInventory.AddCandy(new CandyItem() { candy = n.GetComponentInChildren<CandyHead>().candyObject, count = 1 }));

                    this.TaskDelay(0.07f / IdleManager.instance.GetCurrentCuttingSpeed(), () =>
                    {
                        candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().CutCandy(cuttedCandys));
                        runPlayer.transform.position = cuttingPoint2.position;
                        plusCandyLength -= 100f;

                        list.ForEach((n) => n.GetComponentInChildren<CandyTailController>().ChangeCandyLength(n.GetComponentInChildren<CandyHead>().cpi2Length -= 70));

                        list.ForEach((n) => { if (n.GetComponentInChildren<CandyHead>().cpi2Length <= 0) { n.SetActive(false); } });

                        this.TaskDelay(0.08f / IdleManager.instance.GetCurrentCuttingSpeed(), () =>
                        {
                            runPlayer.transform.DOMove(cuttingPoint1.transform.position, 0.2f / IdleManager.instance.GetCurrentCuttingSpeed()).SetEase(Ease.InOutQuad).OnComplete(() => { cuttingReady = true; });
                        });
                    });

                }
                break;
        }
    }

    void GenerateUIAttract(GameObject n, Transform startPos, int money)
    {
        var particle = Managers.Pool.Pop(Resources.Load<GameObject>("Particles/UIAttractor_Money"), RunManager.instance.runGameUI.transform).GetComponentInChildren<UIAttractorCustom>();

        particle.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
        particle.transform.localScale = Vector3.one;

        Vector2 anchordPos = Camera.main.WorldToViewportPoint(startPos.position);

        particle.GetComponentInChildren<UIAttractorCustom>().Init(RunManager.instance.moneyImagePos, new Vector2(anchordPos.x * RunManager.instance.runGameUI.GetComponent<RectTransform>().sizeDelta.x, anchordPos.y * RunManager.instance.runGameUI.GetComponent<RectTransform>().sizeDelta.y)
        , onAttract: () => { SaveManager.instance.GetMoney(money); }, OnCompleteParticle: () => { particle.attractorTarget.transform.SetParent(particle.transform); Managers.Pool.Push(particle.GetComponent<Poolable>()); });
        particle.GetComponentInChildren<ParticleSystem>().Play();
    }

    public void EndCuttingCandy(TempCandyInventory temp, int money)
    {
        lastCandyInventory = temp;

        var temp2 = SaveManager.instance.GetCandyUnlockStatuses().Where((n) => !n.unlocked).OrderBy((n) => n.id).ToArray();

        if (temp2.Length > 0)
            candyUnlockUI.currentStatus = new CandyUnlockStatus() { id = temp2[0].id, percent = temp2[0].percent, goalPercent = temp2[0].goalPercent, unlocked = false };
        else
            candyUnlockUI.currentStatus = null;

        SaveManager.instance.AddUnlockPoint(34); /*lastCandyInventory.candyItems*/

        SaveManager.instance.enableCandyInventoryUIUpdate = false;
        cuttingPhase = false;

        // temp.candyItems.ForEach((n) => EventManager.instance.CustomEvent(AnalyticsType.RUN, "GetCandyEndCutting_" + n.candy.id + "_" + n.count, true, true));

        // SaveManager.instance.AddCandy(temp.candyItems, false);

        StageManager.instance.ClearStage();

        // CandyInventory.instance.CandyGetAnimation(temp.candyItems);

        if (StageManager.instance.currentStageNum == 3)
            CustomReviewManager.instance.StoreReview();

        this.TaskDelay(1.8f, () =>
        {
            ShowCandyUnlockStatus();

            if (x2ClaimBtn != null)
                x2ClaimBtn.SetActive(true);

            if (runEndUI != null)
                runEndUI.SetActive(true);

            if (jarAnimator != null)
                jarAnimator.SetBool("Rotate", true);

            if (EndCardMoneyText != null)
                EndCardMoneyText.text = money.ToString();

            // =================== 런게임 정산 수정전 ==========================

            if (candyInventoryUI != null)
                candyInventoryUI.SetActive(false);

            if (EndCandyInventoryUI != null)
            {
                EndCandyInventoryUI.ClearUI();
                EndCandyInventoryUI.GenerateUIfromList(temp.candyItems);

                foreach (var text in EndCandyInventoryUI.GetComponentsInChildren<UnityEngine.UI.Text>())
                    text.color = Color.white;
            }
            // ===================================================

            // noThanksTask = this.TaskDelay(0.1f, () => { Debug.LogError(11123213); noThanksBtn.SetActive(true); /*ShowCandyUnlockStatus();*/ });

            SaveManager.instance.enableCandyInventoryUIUpdate = true;
        });

        jarBlock.SetActive(false);
        particleCanvas.worldCamera = uiCamera;
    }

    public void OnClickSellCandyBtnOnEndCardAfter4Stage()
    {
        EventManager.instance.CustomEvent(AnalyticsType.UI, "OnClickSellCandyBtnAfter4Stage", true, true);
    }

    public void OnClickNextStage()
    {
        // runEndUI.SetActive(false);
        // jarAnimator.SetBool("Rotate", false);

        // StageManager.instance.GenearteCurrentStage();

        // CameraManager.instance.ChangeCamera("follow");

        bool success = false;

        // Debug.LogError(StageManager.instance.currentStageNum > ForceIdleStage && ES3.KeyExists("NextStageEnable"));

        if (StageManager.instance.currentStageNum > ForceIdleStage && (RemoteConfigService.Instance.appConfig.GetBool("ForceIdle") ? ES3.KeyExists("NextStageEnable") : true))
            success = MondayOFF.AdsManager.ShowInterstitial();

        if (success)
            EventManager.instance.CustomEvent(AnalyticsType.ADS, "Run_Interstital_EndStage", true, true);

        SaveManager.instance.enableCandyInventoryUIUpdate = true;

        ResetRunGame();

        EventManager.instance.CustomEvent(AnalyticsType.UI, "onClickNoThanksBtn", true, true);

    }

    public void OnClickX2ClaimBtn()
    {
        if (showNewCandyUnlock && MondayOFF.AdsManager.IsRewardedReady())
        {
            showNewCandyUnlockTask.Kill();
        }

        AdManager.instance.ShowRewarded(() =>
        {
            SaveManager.instance.enableCandyInventoryUIUpdate = false;

            // particleCanvas.worldCamera = null;

            runGameUI.GetComponent<Canvas>().worldCamera = uiCamera;

            x2ClaimBtn.SetActive(false);

            // SaveManager.instance.AddCandy(lastCandyInventory.candyItems, false);

            SaveManager.instance.GetMoney((int)moneyStack);
            EndCardMoneyText.text = (moneyStack * 2).ToString();

            particleUI.GetComponentInChildren<CandyInventory>(true).gameObject.SetActive(true);
            // particleUI.GetComponentInChildren<CandyInventory>(true).CandyGetAnimation(lastCandyInventory.candyItems);

            EventManager.instance.CustomEvent(AnalyticsType.RV, "x2Claim", true, true);

            this.TaskDelay(0, () =>
                                                {
                                                    Util.GenerateParticleAttractor(RunManager.instance.runGameUI.transform, GetMoneyImage, x2clameStartPos
                            , moneyMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                                                });

            this.TaskDelay(2.5f, () =>
            {
                SaveManager.instance.enableCandyInventoryUIUpdate = true;
                particleUI.GetComponentInChildren<CandyInventory>(true).gameObject.SetActive(false);
                // ShowCandyUnlockStatus();

                if (showNewCandyUnlock)
                {
                    candyUnlockUI.ShowNewCandyUnlockUI(Resources.LoadAll<CandyObject>("Candy").First((n) => n.id == candyUnlockUI.currentStatus.id));
                }
                else
                    ResetRunGame();
            });
        }, "x2Claim");

        if (noThanksTask != null)
        {
            noThanksTask.Kill();
            noThanksTask = null;
        }
    }

    public void OnClickSellCandyBtn()
    {
        // ChangeToIdleGame();
        ES3.Save<bool>("focusSellCandy", true);

        OnClickNextStage();
    }

    public void ResetRunGame()
    {
        cuttedCandys.ForEach((n) => Destroy(n));

        SceneManager.UnloadScene("Run");
        SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        // plusBulletRange = 0;
        // plusCandyCount = 0;
        // defaultCandyLength = 200;
        // plusCandyLength = 0;
        // plusFireRate = 0;

        // ChangeCandysLength();

        // runPlayer.position = startPoint.position;

        // candyList.ForEach((n) => Destroy(n));
        // candyList.Clear();

        // cuttedCandys.
        // AddCandy();
    }

    public void TripleShot()
    {
        tripleShot = true;
    }

    public void OnUpgradeJellyGun()
    {
        jellyGunStartUI.SetActive(false);

        swipeToStartUI.SetActive(true);
        enableSwipe = true;

        EventManager.instance.CustomEvent(AnalyticsType.UI, "OnClickJellyBeanGun", true, true);
    }

    public void ChangeToIdleGame()
    {

        runEndUI.SetActive(false);
        runGameUI.SetActive(false);
        particleUI.SetActive(false);
        canvas.SetActive(false);
        jarAnimator.SetBool("Rotate", false);

        CameraManager.instance.ChangeCamera("idle");
        IdleManager.instance.StartIdle();
        IdleManager.instance.GoToIdleGame();
        // SceneManager.LoadScene("Idle");

        EventManager.instance.CustomEvent(AnalyticsType.UI, "GoToIdle", true, true);

        MondayOFF.AdsManager.ChangeAdvertyCamera(Camera.main);

        // MondayOFF.EventTracker.LogCustomEvent(
        // "UI",
        // new Dictionary<string, string> { { "UI_TYPE", "GoToIdle" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
        // );
    }

    public void OnClickGoToIdleBtn()
    {
        ChangeToIdleGame();

        EventManager.instance.CustomEvent(AnalyticsType.UI, "GoToIdleBtn", true, true);

        if (ES3.KeyExists("ActivedUpgradeBtn") ? ES3.Load<bool>("ActivedUpgradeBtn") : false)
            IdleManager.instance.ChangeUpgradeBtnActive(true);
        // MondayOFF.EventTracker.LogCustomEvent(
        // "UI",
        // new Dictionary<string, string> { { "UI_TYPE", "GoToIdleBtn" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
        // );
    }

    public void ChangeToRunGame()
    {
        cuttedCandys.ForEach((n) => Destroy(n));

        SceneManager.UnloadSceneAsync("Run");
        var async = SceneManager.LoadSceneAsync("Run", LoadSceneMode.Additive);

        // async.completed

        // IdleManager.instance.TaskWaitUntil(() => CameraManager.instance.ChangeCamera("follow"), () => );

        // runGameUI.SetActive(true);
        // particleUI.SetActive(true);
        // canvas.SetActive(true);
    }

    void OnChangeCandyList()
    {
        if (candyList.Count < 2 || mergeChecking)
            return;

        mergeChecking = true;

        CandyHead currentCandy = null;

        StartCoroutine(Checking());

        IEnumerator Checking(bool conti = true)
        {
            for (int i = 0; i < candyList.Count; i++)
            {
                if (currentCandy != null)
                    if (currentCandy.candyObject == candyList[i].GetComponent<CandyHead>().candyObject)
                    {
                        if (conti)
                            yield return new WaitForSeconds(1.5f);
                        MergeCandy(currentCandy, candyList[i].GetComponent<CandyHead>());
                        i = 0;

                        conti = false;

                        yield return new WaitForSeconds(1.5f);
                    }
                currentCandy = candyList[i].GetComponent<CandyHead>();
            }
            mergeChecking = false;
        }
    }

    void MergeCandy(CandyHead first, CandyHead second)
    {
        if (second.candyObject.nextCandy == null)
            return;

        var center = (first.transform.localPosition + second.transform.localPosition) / 2;
        first.transform.DOLocalMove(center, 0.4f).OnComplete(() => { candyList.Remove(first.gameObject); Destroy(first.gameObject); });
        second.transform.DOLocalMove(center, 0.4f).OnComplete(() => { second.UpgradeCandy(); ArrangeCandy(currentCandyArrangeType); });
    }

    public void StartIdleFirst()
    {
        ChangeToIdleGame();

        IdleManager.instance.StartIdleFirst();

        IdleManager.instance.idleCamera.gameObject.SetActive(false);
        // IdleManager.instance.blackPanel.gameObject.SetActive(true);
        this.TaskDelay(1f, () =>
            {
                IdleManager.instance.idleCamera.gameObject.SetActive(true);
                // IdleManager.instance.blackPanel.gameObject.SetActive(false);
            });
    }

    public void TestCrash3()
    {
        throw new System.Exception("(ignore) this is a test crash3");
    }

    public void ShowCandyUnlockStatus()
    {
        x2ClaimBtn.SetActive(false);

        // var status = SaveManager.instance.GetCandyUnlockStatuses();
        //아직 해금 안한 사탕이 있다면
        if (candyUnlockUI.currentStatus != null)
        {
            candyUnlockUI.ShowUI();

            // SaveManager.instance.SaveCandyUnlockStatus()
        }
        else
        {
            if (StageManager.instance.currentStageNum == RunManager.ForceIdleStage && RunManager.forceIdle)
            {
                OnClickSellCandyBtn();
            }
            else
                OnClickNextStage();
        }
    }

    #region CPI1

    public void MoveToRail(PlayerCandyJar jar)
    {
        jar.transform.SetParent(null);
        jar.transform.DOMoveX(railRenderer.transform.position.x, 0.4f).OnComplete(() =>
        {
            jar.transform.DOMove(railEndPoint.position, Vector3.Distance(jar.transform.position, railEndPoint.transform.position) * 0.028f).OnComplete(() =>
            {
                jar.transform.DOLocalJump(jarStandPoint[jarStackCount++].position, 1f, 1, 0.3f);
            });
        });

        SpawnEmptyJar();
    }

    public void SpawnEmptyJar()
    {
        currentPlayerCandyJar = Instantiate(Resources.Load<GameObject>("Jar"), jarSpawnParent.transform.position, Quaternion.Euler(new Vector3(0, Random.Range(0, 360), 0)), jarSpawnParent).GetComponent<PlayerCandyJar>();
        // currentPlayerCandyJar.transform.localScale = Vector3.zero;
        // currentPlayerCandyJar.InitJar();
        currentPlayerCandyJar.transform.DOScale(new Vector3(0.3f, 0.3f, 0.3f), 0.25f).OnComplete(() => enableCandyStack = true);

        OnChangeCandyStack();
    }

    public void OnChangeCandyStack()
    {
        candyStackText.text = currentPlayerCandyJar.stackCount + " / " + maxCandyStackCount;
    }

    public void EndCPI1Run()
    {
        isGameEnd = true;
        canMove = false;
        cuttingPhase = true;

        CameraManager.instance.ChangeCamera("candyStand");
    }

    public void ChangeCutterSkin(int id)
    {
        foreach (var skin in cutterskins)
            skin.gameObject.SetActive(false);

        foreach (var skin in cutterskins)
        {
            if (skin.id == id)
            {
                skin.ShowSkin();
                currentCutter = skin;
                SaveManager.instance.cutterSkinID = id;

                SaveManager.instance.SaveCurrentCutterSkin(id);
                return;
            }
        }
    }

    #endregion

    #region CPI2



    #endregion

}

public enum CandyArrangeType
{
    Horizontal = 1,
    Vertical = 2,
    Pyramid = 3,
    // Squre = 4
}

public enum RunGameType
{
    Default = 1,
    CPI1 = 2,
    CPI2 = 3,
    CPI3 = 4
}


