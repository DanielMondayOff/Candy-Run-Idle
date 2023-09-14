using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine.SceneManagement;
using MoreMountains.NiceVibrations;

public class RunManager : MonoBehaviour
{
    public static RunManager instance;

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
    [FoldoutGroup("참조")] public GameObject runGameUI;
    [FoldoutGroup("참조")] public GameObject particleUI;
    [FoldoutGroup("참조")] public GameObject goToShopBtn;
    [FoldoutGroup("참조")] public GameObject nextStageBtn;
    [FoldoutGroup("참조")] public GameObject sellCandyBtn;
    [FoldoutGroup("참조")] public GameObject nextStageBtnGroup;
    [FoldoutGroup("참조")] public StartCard startCard;

    [FoldoutGroup("참조")] public CanvasGroup[] runUIs;
    [FoldoutGroup("참조")] public GameObject canvas;
    [FoldoutGroup("참조")] public GameObject blackPanel;

    [FoldoutGroup("참조")] public GameObject jarBlock;

    [FoldoutGroup("참조")] public Camera uiCamera;
    [FoldoutGroup("참조")] public Canvas particleCanvas;
    [FoldoutGroup("참조")] public ParticleUI particleUI2;



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

    private bool mergeChecking = false;

    private CandyArrangeType currentCandyArrangeType = CandyArrangeType.Horizontal;

    TempCandyInventory tempCandyInventory;
    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        fireTask = this.TaskWhile(RunManager.instance.GetCurrentFireRate(), 1, () => { if (fireBullet && !cuttingPhase && !isGameEnd) { candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().GenerateBullet()); } });
        CandyInventory.instance.SyncCurrentCandyUI();

        if (StageManager.instance.currentStageNum == 2)
        {
            swipeToStartUI.SetActive(false);
            jellyGunStartUI.SetActive(true);

            enableSwipe = false;
        }

        if (ES3.KeyExists("enableShop"))
            if (ES3.Load<bool>("enableShop"))
                goToShopBtn.SetActive(true);

        if (StageManager.instance.currentStageNum >= 4)
        {
            startCard.GenearteCards();
        }

        if (ES3.KeyExists("AB_Test"))
            if (ES3.Load<string>("AB_Test").Equals("A"))
                blackPanel.SetActive(false);

        if (ES3.KeyExists("NextStageEnable"))
            if (ES3.Load<bool>("NextStageEnable"))
                blackPanel.SetActive(false);

        // ABManager.instance.SelectStart("B");

        // MondayOFF.AdsManager.ShowBanner();
    }

    private void OnEnable()
    {
        SaveManager.instance.AddMoneyText(moneyText);
        SaveManager.instance.OnChangeMoney();
    }

    private void OnDestroy()
    {
        SaveManager.instance.RemoveMoneyText(moneyText);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
            AddCandy();

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            AddCandyLength(200);
        }

        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            plusCandyLength -= 100;

            ChangeCandysLength();
        }

        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            TakeDamage(100, Vector3.zero);
        }

        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            candyList.ForEach((n) => StartCoroutine(n.GetComponentInChildren<CandyTailController>().TailWave(100)));
        }

        if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            tripleShot = true;
        }

        if (Input.GetKeyDown(KeyCode.Alpha7))
        {
            StageManager.instance.ClearStage();
            SceneManager.UnloadScene("Run");
            SceneManager.LoadScene("Run", LoadSceneMode.Additive);
        }

        if (Input.GetKeyDown(KeyCode.Alpha8))
        {
            SaveManager.instance.GetMoney(500);
        }

        if (Input.GetKeyDown(KeyCode.Alpha9))
        {
            SaveManager.instance.LossMoney(500);
        }

        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            CandyLevelUp();
        }

        if (Input.GetKeyDown(KeyCode.F12))
        {
            ES3.DeleteFile();
            Application.Quit();
        }


        if (Input.GetKeyDown(KeyCode.Q))
        {
            plusFireRate += 100;

            ChangeFireRate(GetCurrentFireRate());
        }

        if (Input.GetKeyDown(KeyCode.W))
        {
            plusFireRate -= 100;

            ChangeFireRate(GetCurrentFireRate());
        }

        if (Input.GetKeyDown(KeyCode.E))
        {
            plusBulletRange += 100;
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            plusBulletRange -= 100;
        }

        if (cuttingPressed && cuttingReady)
        {
            CuttingCandy();
        }

        if (Input.GetKeyDown(KeyCode.M))
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

        if (Input.GetKeyDown(KeyCode.Z))
        {
            foreach (var canvas in runUIs)
            {
                canvas.alpha = (canvas.alpha == 1) ? 0 : 1;
            }
        }

        if (Input.GetKeyDown(KeyCode.F3))
        {
            int nextEnumIndex = (int)currentCandyArrangeType + 1;

            if (nextEnumIndex > System.Enum.GetValues(typeof(CandyArrangeType)).Length)
            {
                nextEnumIndex = 1; // 마지막에서 처음으로 돌아감
            }

            currentCandyArrangeType = (CandyArrangeType)nextEnumIndex;

        }
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

        EventManager.instance.CustomEvent(AnalyticsType.RUN, "RunTryStage - " + StageManager.instance.currentStageNum, true, true);
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

    public void AddCandyLength(float value)
    {
        value = Mathf.Clamp(value, -300, 300);

        if (value > 0)
        {
            candyList.ForEach((n) => StartCoroutine(n.GetComponentInChildren<CandyTailController>().TailWave(value, () =>
            {
                plusCandyLength += value;

                plusCandyLength = Mathf.Clamp(plusCandyLength, 0, 2000);

                ChangeCandysLength();
            })));
        }
        else
        {
            plusCandyLength += value;

            plusCandyLength = Mathf.Clamp(plusCandyLength, 0, 2000);

            ChangeCandysLength();
        }
    }

    public void ChangeCandysLength(bool clamp = true)
    {
        // candyList.ForEach((n) => n.transform.localScale = new Vector3(n.transform.localScale.x, n.transform.localScale.y, GetCurrentCandyLength() / 1000f));

        // candyList.ForEach((n) => n.GetComponentInChildren<FIMSpace.FTail.TailAnimator2>().TailAnimatorAmount = GetCurrentCandyLength());

        // print(GetCurrentCandyLength());

        candyList.ForEach((n) => n.GetComponentInChildren<CandyTailController>().ChangeCandyLength(GetCurrentCandyLength(), clamp));
    }

    public void AddCandy()
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
                plusBulletRange += (value / 1000f);

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

                float objectWidth = 1.25f;
                float objectHeight = 1.25f;

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
                // int triangleBaseWidth = Mathf.FloorToInt(Mathf.Sqrt(2 * count)); // 정삼각형의 밑변 길이 계산
                // int pyramidHeight = triangleBaseWidth / 2 + 1; // 피라미드의 높이 계산

                // int objectCountInCurrentRow = 1; // 각 층의 오브젝트 개수 초기화

                // int cot = 0;

                // for (int y = 0; y < pyramidHeight; y++)
                // {
                //     for (int x = 0; x < objectCountInCurrentRow; x++)
                //     {
                //         if (y * objectCountInCurrentRow + x >= count)
                //         {
                //             break; // 주어진 개수만큼만 생성
                //         }

                //         // 오브젝트의 위치 계산
                //         float xPos = x * objectWidth - (objectCountInCurrentRow - 1) * 0.5f * objectWidth;
                //         float yPos = -y * objectHeight;

                //         // 오브젝트 생성 및 위치 설정
                //         candyList[cot].transform.localPosition = new Vector3(xPos, yPos, 0);

                //         cot++;
                //     }

                //     objectCountInCurrentRow += 2; // 다음 층에서는 오브젝트 개수를 2개 늘림
                // }


                break;

            case CandyArrangeType.Squre:

                objectWidth = 1.25f;
                objectHeight = 1.25f;

                int squareSideLength = GetSqureSideLength(count);

                int cot2 = 0;

                startX = -spacing * (count / 2); // 시작 X 좌표 계산

                for (int y = 0; y < squareSideLength; y++)
                {
                    for (int x = 0; x < squareSideLength; x++)
                    {
                        if (candyList.Count < cot2)
                            return;
                        // 오브젝트의 위치 계산
                        // float xPos = (x * objectWidth) - (squareSideLength - 1) * 0.5f * objectWidth;

                        float xPos;
                        if (x % 2 == 1)
                            xPos = (startX + (x * spacing));
                        else
                            xPos = startX + (x * spacing) + (spacing / 2f);

                        float yPos = 0.75f + (y * objectHeight);

                        // 오브젝트 생성 및 위치 설정
                        candyList[cot2].transform.localPosition = new Vector3(xPos, yPos, 0);

                        cot2++;
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

        return 0;
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

        ChangeCandysLength();

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
        StartCoroutine(candyLevelUp());

        IEnumerator candyLevelUp()
        {
            foreach (var candy in candyList)
            {
                yield return new WaitForSeconds(0.1f);
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

        if (GetCurrentCandyLength() < 100f)
        {
            candyList.ForEach((n) =>
            {
                n.GetComponentInChildren<CandyHead>().CutCandy(cuttedCandys);
                tempCandyInventory.AddCandy(new CandyItem() { candy = n.GetComponentInChildren<CandyHead>().candyObject, count = 1 });
            });

            // defaultCandyLength = 0;
            plusCandyLength = 0;

            ChangeCandysLength(false);

            candyList.ForEach((n) => n.SetActive(false));

            EndCuttingCandy(tempCandyInventory);
        }
        else
        {
            cutterAnimator.SetTrigger("Cut");
            cuttingReady = false;

            candyList.ForEach((n) => tempCandyInventory.AddCandy(new CandyItem() { candy = n.GetComponentInChildren<CandyHead>().candyObject, count = 1 }));

            this.TaskDelay(0.07f / candyCuttingSpeed, () =>
            {
                candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().CutCandy(cuttedCandys));
                runPlayer.transform.position = cuttingPoint2.position;
                plusCandyLength -= 100f;

                if (GetCurrentCandyLength() < 100f)
                    ChangeCandysLength(false);
                else
                    ChangeCandysLength();

                this.TaskDelay(0.08f / candyCuttingSpeed, () =>
                {
                    runPlayer.transform.DOMove(cuttingPoint1.transform.position, 0.2f / candyCuttingSpeed).SetEase(Ease.InOutQuad).OnComplete(() => { cuttingReady = true; });
                });
            });
        }
    }

    public void EndCuttingCandy(TempCandyInventory temp)
    {
        SaveManager.instance.enableCandyInventoryUIUpdate = false;
        cuttingPhase = false;

        temp.candyItems.ForEach((n) => EventManager.instance.CustomEvent(AnalyticsType.RUN, "GetCandyEndCutting_" + n.candy.id + "_" + n.count, true, true));

        SaveManager.instance.AddCandy(temp.candyItems, false);

        StageManager.instance.ClearStage();

        CandyInventory.instance.CandyGetAnimation(temp.candyItems);

        if (StageManager.instance.currentStageNum == 3)
            CustomReviewManager.instance.StoreReview();

        this.TaskDelay(3.5f, () =>
        {
            if (StageManager.instance.currentStageNum == 4)
            {
                sellCandyBtn.SetActive(true);
            }
            else if (StageManager.instance.currentStageNum > 4)
            {
                nextStageBtnGroup.SetActive(true);
            }
            else
            {
                nextStageBtn.SetActive(true);
            }

            runEndUI.SetActive(true);
            jarAnimator.SetBool("Rotate", true);

            EndCandyInventoryUI.ClearUI();
            EndCandyInventoryUI.GenerateUIfromList(temp.candyItems);

            SaveManager.instance.enableCandyInventoryUIUpdate = true;

            bool success = false;

            if (StageManager.instance.currentStageNum > 4)
                success = MondayOFF.AdsManager.ShowInterstitial();

            if (success)
                EventManager.instance.CustomEvent(AnalyticsType.ADS, "Run_Interstital_EndStage", true, true);

        });

        particleUI2.OnClickExpandBtn(true);

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
        SaveManager.instance.enableCandyInventoryUIUpdate = true;

        ResetRunGame();
    }

    public void OnClickSellCandyBtn()
    {
        ChangeToIdleGame();
    }

    public void ResetRunGame()
    {
        cuttedCandys.ForEach((n) => Destroy(n));

        SceneManager.UnloadSceneAsync("Run");
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

        SceneManager.UnloadScene("Run");
        SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        runGameUI.SetActive(true);
        particleUI.SetActive(true);
        canvas.SetActive(true);
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
}

public enum CandyArrangeType
{
    Horizontal = 1,
    Vertical = 2,
    Pyramid = 3,
    Squre = 4
}
