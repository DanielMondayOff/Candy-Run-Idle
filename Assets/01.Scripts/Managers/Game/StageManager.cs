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

    public static StageManager instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        if (ES3.KeyExists("CurrentStageNum"))
            currentStageNum = ES3.Load<int>("CurrentStageNum");

        GenearteCurrentStage();
    }

    public void GenearteCurrentStage()
    {
        if (currentStage != null)
            currentStage.map.SetActive(false);

        if (stages.Length >= currentStageNum)
        {
            stages[currentStageNum].map.SetActive(true);
            currentStage = stages[currentStageNum];
        }
        else
            GenerateRandomStage();
    }

    public void TryStage()
    {
        //Try Stage
    }

    public void ClearStage()
    {
        //Clear Stage

        currentStageNum++;

        ES3.Save<int>("CurerntStageNum", currentStageNum);
    }

    public void GenerateRandomStage()
    {

    }
}
