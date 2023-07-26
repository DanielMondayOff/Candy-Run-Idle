using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageManager : MonoBehaviour
{
    [System.Serializable]
    public class Stage
    {
        public GameObject map;
        public bool jellyGun = true;
    }

    public Stage[] stages;
    public Stage currentStage = null;
    public int currentStageNum = 0;

    public bool IsAllowJellyGun => (currentStageNum >= stages.Length) ? true : stages[currentStageNum].jellyGun;

    public static StageManager instance;

    private void Awake()
    {
        instance = this;

        if (ES3.KeyExists("CurrentStageNum"))
        {
            currentStageNum = ES3.Load<int>("CurrentStageNum");
            print("currentStage : " + currentStageNum);
        }
    }

    private void Start()
    {
        GenearteCurrentStage();
    }

    public void GenearteCurrentStage()
    {
        if (currentStage.map != null)
            currentStage.map.SetActive(false);

        if (stages.Length <= currentStageNum)
        {
            GenerateRandomStage();
        }
        else
        {
            stages[currentStageNum].map.SetActive(true);
            currentStage = stages[currentStageNum];

        }
    }

    public void TryStage()
    {
        //Try Stage
    }

    public void ClearStage()
    {
        //Clear Stage

        currentStageNum++;

        ES3.Save<int>("CurrentStageNum", currentStageNum);
    }

    public void GenerateRandomStage()
    {
        if (currentStage.map != null)
            currentStage.map.SetActive(false);

        int num = Random.Range(0, stages.Length);

        stages[num].map.SetActive(true);
        currentStage = stages[num];
    }
}
