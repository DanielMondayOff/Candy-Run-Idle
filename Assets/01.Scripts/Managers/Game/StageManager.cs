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

    private void Start()
    {
        if (ES3.KeyExists("CurrentStageNum"))
            currentStageNum = ES3.Load<int>("CurrentStageNum");

        GenearteCurrentStage();
    }

    public void GenearteCurrentStage()
    {
        if (stages.Length >= currentStageNum)
            stages[currentStageNum].map.SetActive(true);
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
