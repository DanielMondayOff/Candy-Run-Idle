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

    public Stage[] CPI1Stages;
    public int currentStageNum = 0;

    public bool loop = false;

    public RunMapGenerator randomMapGenerator;

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

        switch (IdleManager.instance.runGameType)
        {
            case RunGameType.CPI3:
            case RunGameType.Default:
                if (stages.Length <= currentStageNum)
                {
                    GenerateRandomStage();
                }
                else
                {
                    stages[currentStageNum].map.SetActive(true);
                    currentStage = stages[currentStageNum];
                }
                break;

            case RunGameType.CPI1:
            case RunGameType.CPI2:

                CPI1Stages[(currentStageNum) % CPI1Stages.Length].map.SetActive(true);
                currentStage = CPI1Stages[(currentStageNum) % CPI1Stages.Length];

                foreach (var candy in currentStage.map.GetComponentsInChildren<DropedJellyBean>())
                {
                    candy.ChangeCandy(0);
                }
                break;
        }

    }

    public void TryStage()
    {
        //Try Stage

        MondayOFF.EventTracker.TryStage(currentStageNum);
    }

    public void ClearStage()
    {
        //Clear Stage

        EventManager.instance.CustomEvent(AnalyticsType.RUN, "ClearStage_" + currentStageNum, true, true);

        if (loop)
            currentStageNum++;

        ES3.Save<int>("CurrentStageNum", currentStageNum);

        if (currentStageNum == 4)
            ES3.Save("enableShop", true);

        MondayOFF.EventTracker.ClearStage(currentStageNum);
    }

    public void BackStage()
    {
        if (currentStageNum > 0)
            currentStageNum--;

        ES3.Save<int>("CurrentStageNum", currentStageNum);
    }

    public void GenerateRandomStage()
    {
        randomMapGenerator.GenerateMap();

        // if (currentStage.map != null)
        //     currentStage.map.SetActive(false);

        // int num = Random.Range(0, stages.Length);

        // stages[num].map.SetActive(true);
        // currentStage = stages[num];
    }
}
