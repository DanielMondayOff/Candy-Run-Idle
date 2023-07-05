using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class RunManager : MonoBehaviour
{
    public static RunManager instance;

    public static float DefaultBulletFireRate = 1f;
    public float plusFireRate = 0f;
    public float addFireRateValue = 1f;

    [Space]

    public static float defaultCandyLength = 0.2f;
    public float plusCandyLength = 0f;
    public float addCandyLengthValue = 0.1f;

    [Space]

    public static float defaultBulletRange = 3f;
    public float plusBulletRange = 0f;
    public float addBulletRangeValue = 1f;

    [Space]

    public static int defaultCandyCount = 1;
    public int plusCandyCount = 0;

    public float GetCurrentFireRate() => DefaultBulletFireRate + plusFireRate;
    public float GetCurrentCandyLength() => defaultCandyLength + plusCandyLength;
    public float GetBulletLength() => defaultBulletRange + plusBulletRange;


    public List<GameObject> candyList = new List<GameObject>();

    public Transform runPlayer;
    public GameObject candyPrefab;

    private void Awake()
    {
        instance = this;
    }

    /// <summary>
    /// Update is called every frame, if the MonoBehaviour is enabled.
    /// </summary>
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
            AddCandy();
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

    }

    public void AddCandy()
    {
        var newCandy = Instantiate(candyPrefab, new Vector3(runPlayer.transform.position.x, 0.5f, runPlayer.transform.position.z), Quaternion.identity, runPlayer);
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

                candyList.ForEach((n) => n.transform.localScale = new Vector3(1, 1, GetCurrentCandyLength() / 100f));
                break;

            case PillerType.FireRate:
                plusFireRate += value;
                break;

            case PillerType.Range:
                plusBulletRange += value;
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
}
