using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Sirenix.OdinInspector;

public class RunManager : MonoBehaviour
{
    public static RunManager instance;

    public static float DefaultBulletFireRate = 0.7f;
    public float plusFireRate = 0f;
    public float addFireRateValue = 1f;
    public float defaultPillerFireRateValue = 100f;

    [Space]

    public static float defaultCandyLength = 200f;
    public float plusCandyLength = 1f;
    public float addCandyLengthValue = 1f;

    public float defaultPillerLengthValue = 100f;

    [Space]

    public static float defaultBulletRange = 100f;
    public float plusBulletRange = 0f;
    public float addBulletRangeValue = 100f;

    [Space]

    public static int defaultCandyCount = 1;
    public int plusCandyCount = 0;

    public int currentMoney;

    public float GetCurrentFireRate()
    {
        var result = DefaultBulletFireRate - plusFireRate;

        return Mathf.Clamp(result, 0.1f, 1);
    }

    public float GetCurrentCandyLength() => defaultCandyLength + plusCandyLength;
    public float GetBulletRange() => defaultBulletRange + plusBulletRange;


    public List<GameObject> candyList = new List<GameObject>();

    public Material[] jellyBeanMats;

    public Transform runPlayer;
    public GameObject candyPrefab;

    TaskUtil.WhileTaskMethod fireTask;

    public bool fireBullet = false;

    public bool isGameStart = false;
    public bool isGameEnd = false;
    public GameObject startUI;

    public Transform cuttingStartPoint;


    private void Awake()
    {
        instance = this;
    }

    /// <summary>
    /// Start is called on the frame when a script is enabled just before
    /// any of the Update methods is called the first time.
    /// </summary>
    private void Start()
    {
        fireTask = this.TaskWhile(RunManager.instance.GetCurrentFireRate(), 1, () => { if (fireBullet) { candyList.ForEach((n) => n.GetComponentInChildren<CandyHead>().GenerateBullet()); } });
    }

    /// <summary>
    /// Update is called every frame, if the MonoBehaviour is enabled.
    /// </summary>
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
    }

    public void RunGameStart()
    {
        startUI.SetActive(false);
        isGameStart = true;

        ChangeCandysLength();
    }


    public void ChangeBulletFireRate(float value)
    {
        plusFireRate += value;
    }

    public void AddCandyLength(float value)
    {
        plusCandyLength += value;
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
                plusCandyLength += value;

                ChangeCandysLength();
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

        float xOffset = 1.15f; // X축으로 이동할 간격
        int midValue = count / 2;

        // List의 요소들을 중앙 기준으로 배치합니다.
        for (int i = 0; i < count; i++)
        {
            float xPos = (i - midValue) * xOffset;

            // 요소의 개수가 홀수일 때 중앙에 배치
            if (count % 2 == 1 && i == count / 2)
            {
                candyList[i].transform.DOLocalMove(new Vector3(0f, candyList[i].transform.localPosition.y, 0), 0.2f);
            }
            else
            {
                candyList[i].transform.DOLocalMove(new Vector3(xPos, candyList[i].transform.localPosition.y, 0), 0.2f);
            }
            // else
            // {
            //     // 요소의 개수가 짝수일 때 대칭적으로 배치
            //     if (i < count / 2)
            //     {
            //         candyList[i].transform.DOLocalMove(new Vector3(-xPos, candyList[i].transform.localPosition.y, 0), 1f);
            //     }
            //     else
            //     {
            //         candyList[i].transform.DOLocalMove(new Vector3(xPos - xOffset, candyList[i].transform.localPosition.y, 0), 1f);
            //     }
            // }
        }
    }

    public void TakeDamage()
    {

    }

    public void ChangeFireRate(float rate) => fireTask.SetIntervalTime(rate);

    public void GetMoney(int value)
    {
        currentMoney += value;
    }

    public void StartCuttingCandy()
    {
        isGameEnd = true;

        CameraManager.instance.ChangeCamera("cutting");
    }

}
