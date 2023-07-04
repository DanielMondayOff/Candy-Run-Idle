using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RunManager : MonoBehaviour
{
    public static RunManager instance;

    public static float DefaultBulletFireRate = 1f;
    public float plusFireRate = 0f;
    public float addFireRateValue = 1f;

    public static float defaultCandyLength = 1f;
    public float plusCandyLength = 0f;
    public float addCandyLengthValue = 1f;

    public static float defaultBulletRange = 2f;
    public float plusBulletRange = 0f;
    public float addBulletRangeValue = 1f;


    public static int defaultCandyCount = 1;
    public int plusCandyCount = 0;


    public float GetCurrentFireRate() => DefaultBulletFireRate + plusFireRate;
    public float GetCurrentCandyLength() => defaultCandyLength + plusCandyLength;


    public List<GameObject> candyList = new List<GameObject>();

    private void Awake()
    {
        instance = this;
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

    public void PillerPass(PillerType type, float value)
    {
        switch (type)
        {
            case PillerType.Length:
                    plusCandyLength += value;
                break;

            case PillerType.FireRate:
                    plusFireRate += value;
                break;

            case PillerType.Range:
                    plusBulletRange += value;
                break;

            case PillerType.Candy:
                    plusCandyCount += Mathf.FloorToInt(value);
                break;

        }
    }
}
