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
    [FoldoutGroup("참조")] public StartCard startCard;

    [FoldoutGroup("참조")] public CanvasGroup[] runUIs;




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
    public float GetBulletRange() => defaultBulletRange + plusBulletRange;

    private List<GameObject> cuttedCandys = new List<GameObject>();

    TaskUtil.WhileTaskMethod fireTask;

    private bool mergeChecking = false;

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

        if (cuttingPressed && cuttingReady)
        {
            CuttingCandy();
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

        if (Input.GetKeyDown(KeyCode.F12))
        {
            ES3.DeleteFile();
        }

        if (Input.GetKeyDown(KeyCode.Z))
        {
            foreach (var canvas in runUIs)
            {
                canvas.alpha = (canvas.alpha == 1) ? 0 : 1;
            }
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
    }

    public float GetCurrentFireRate()
    {
        var result = DefaultBulletFireRate - plusFireRate;

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

        print(GetCurrentCandyLength());

        candyList.ForEach((n) => n.GetComponentInChildren<CandyTailController>().ChangeCandyLength(GetCurrentCandyLength(), clamp));
    }

    public void AddCandy()
    {
        var newCandy = Instantiate(candyPrefab, new Vector3(runPlayer.transform.position.x, candyPrefab.transform.position.y, runPlayer.transform.position.z), Quaternion.Euler(0, 180, 0), runPlayer);
        candyList.Add(newCandy);
        ArrangeCandy();

        newCandy.GetComponentInChildren<CandyTailController>().ChangeCandyLength(GetCurrentCandyLength());

        // newCandy.GetComponentInChildren<FIMSpace.FTail.TailAnimator2>().enabled = true;
        newCandy.transform.DOScaleZ(1, 1f);

        // for (int i = 0; i < candyList.Count; i++)
        // {
        //     candyList[0].transform.DOMoveX()
        // }

        OnChangeCandyList();
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

        }
    }

    void ArrangeCandy()
    {
        int count = candyList.Count;

        if (count == 0)
        {
            Debug.LogWarning("List에 GameObject가 없습니다.");
            return;
        }

        float spacing = 1.3f;
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

    public void ChangeFireRate(float rate) => fireTask.SetIntervalTime(rate);

    public void GetMoney(int value)
    {
        currentMoney += value;
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
            candyList.ForEach((n) => { n.GetComponentInChildren<CandyHead>().CutCandy(cuttedCandys); tempCandyInventory.AddCandy(new CandyItem() { candy = n.GetComponentInChildren<CandyHead>().candyObject, count = 1 }); });

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

        SaveManager.instance.AddCandy(temp.candyItems, false);

        StageManager.instance.ClearStage();

        CandyInventory.instance.CandyGetAnimation(temp.candyItems);

        this.TaskDelay(3.5f, () =>
        {
            if (StageManager.instance.currentStageNum == 4)
            {
                sellCandyBtn.SetActive(true);
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

            MondayOFF.AdsManager.ShowInterstitial();
        });
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
    }

    public void ChangeToIdleGame()
    {
        runEndUI.SetActive(false);
        runGameUI.SetActive(false);
        particleUI.SetActive(false);
        jarAnimator.SetBool("Rotate", false);

        CameraManager.instance.ChangeCamera("idle");
        IdleManager.instance.StartIdle();
        IdleManager.instance.GoToIdleGame();
        // SceneManager.LoadScene("Idle");

        MondayOFF.EventTracker.LogCustomEvent(
        "UI",
        new Dictionary<string, string> { { "UI_TYPE", "GoToIdle" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
        );
    }

    public void OnClickGoToIdleBtn()
    {
        ChangeToIdleGame();

        MondayOFF.EventTracker.LogCustomEvent(
        "UI",
        new Dictionary<string, string> { { "UI_TYPE", "GoToIdleBtn" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
        );
    }

    public void ChangeToRunGame()
    {
        cuttedCandys.ForEach((n) => Destroy(n));

        SceneManager.UnloadScene("Run");
        SceneManager.LoadScene("Run", LoadSceneMode.Additive);

        runGameUI.SetActive(true);
        particleUI.SetActive(true);
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
        second.transform.DOLocalMove(center, 0.4f).OnComplete(() => { second.UpgradeCandy(); ArrangeCandy(); });
    }

}
