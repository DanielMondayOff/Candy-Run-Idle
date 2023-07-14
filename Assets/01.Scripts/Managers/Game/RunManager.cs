using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Sirenix.OdinInspector;

public class RunManager : MonoBehaviour
{
    public static RunManager instance;

    [TitleGroup("setting Value")] public static float DefaultBulletFireRate = 0.7f;
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



    [FoldoutGroup("참조")] public List<GameObject> candyList = new List<GameObject>();
    [FoldoutGroup("참조")] public Material[] jellyBeanMats;
    [FoldoutGroup("참조")] public Transform runPlayer;
    [FoldoutGroup("참조")] public GameObject candyPrefab;
    [FoldoutGroup("참조")] public GameObject cutCandyPrefab;

    [FoldoutGroup("참조")] public GameObject startUI;


    [TitleGroup("Game Value")] public int currentMoney;
    [TitleGroup("Game Value")] public bool fireBullet = false;
    [TitleGroup("Game Value")] public bool isGameStart = false;
    [TitleGroup("Game Value")] public bool isGameEnd = false;
    [TitleGroup("Game Value")] public bool canMove = false;

    [TitleGroup("Game Value")] public bool cuttingPhase = false;

    [TitleGroup("Game Value")] public bool cuttingReady = false;


    [TitleGroup("Cutting Phase")] public Transform cuttingPoint1;
    [TitleGroup("Cutting Phase")] public Transform cuttingPoint2;
    [TitleGroup("Cutting Phase")] public Animator cutterAnimator;
    [TitleGroup("Cutting Phase")] public GameObject touchToCutBtn;


    public float GetCurrentCandyLength() => defaultCandyLength + plusCandyLength;
    public float GetBulletRange() => defaultBulletRange + plusBulletRange;

    TaskUtil.WhileTaskMethod fireTask;
    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        fireTask = this.TaskWhile(RunManager.instance.GetCurrentFireRate(), 1, () => { if (fireBullet && !cuttingPhase && !isGameEnd) { candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().GenerateBullet()); } });
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
            AddCandy();

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            plusCandyLength += 100;

            ChangeCandysLength();
        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            plusCandyLength -= 100;

            ChangeCandysLength();
        }

        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            TakeDamage(100);
        }

        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            candyList.ForEach((n) => StartCoroutine(n.GetComponentInChildren<CandyTailController>().TailWave(100)));

        }
    }

    public void RunGameStart()
    {
        startUI.SetActive(false);
        isGameStart = true;
        canMove = true;

        ChangeCandysLength();
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

        candyList.ForEach((n) => StartCoroutine(n.GetComponentInChildren<CandyTailController>().TailWave(value, () =>
        {
            plusCandyLength += value;

            ChangeCandysLength();
        })));

    }

    public void ChangeCandysLength()
    {
        // candyList.ForEach((n) => n.transform.localScale = new Vector3(n.transform.localScale.x, n.transform.localScale.y, GetCurrentCandyLength() / 1000f));

        // candyList.ForEach((n) => n.GetComponentInChildren<FIMSpace.FTail.TailAnimator2>().TailAnimatorAmount = GetCurrentCandyLength());
        candyList.ForEach((n) => n.GetComponentInChildren<CandyTailController>().ChangeCandyLength(GetCurrentCandyLength()));
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

    public void TakeDamage(float damage)
    {
        plusCandyLength -= damage;

        ChangeCandysLength();

        runPlayer.transform.Translate(new Vector3(0, 0, -1f));

        foreach (var candy in candyList)
        {
            var candypiece = Instantiate(Managers.Resource.Load<GameObject>("Candy_Piece"), candy.transform.position, Quaternion.identity);

            candypiece.GetComponentInChildren<CandyPieces>().ExplosionPieces(candy.transform);
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

        runPlayer.transform.DOMove(cuttingPoint1.transform.position, 1f).OnComplete(() => { cuttingReady = true; });
        runPlayer.transform.DORotate(new Vector3(30, 0, 0), 1f);

        CameraManager.instance.ChangeCamera("cutting");
    }

    public void CuttingCandy()
    {
        if (!cuttingReady || !cuttingPhase)
            return;

        if (GetCurrentCandyLength() < 100f)
        {
            candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().CutCandy(GetCurrentCandyLength()));

            defaultCandyLength = 0;
            plusCandyLength = 0;

            ChangeCandysLength();

            candyList.ForEach((n) => n.SetActive(false));

            EndCuttingCandy();
        }
        else
        {
            cutterAnimator.SetTrigger("Cut");
            cuttingReady = false;

            this.TaskDelay(0.05f, () =>
            {
                candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().CutCandy());
                runPlayer.transform.position = cuttingPoint2.position;
                plusCandyLength -= 100f;

                ChangeCandysLength();

                runPlayer.transform.DOMove(cuttingPoint1.transform.position, 0.1f).OnComplete(() => { cuttingReady = true; });
            });
        }
    }

    public void EndCuttingCandy()
    {
        cuttingPhase = false;
    }

}
