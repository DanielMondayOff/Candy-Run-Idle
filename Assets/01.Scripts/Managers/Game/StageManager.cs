using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageManager : MonoBehaviour
{
    [System.Serializable]
    public class Stage
    {
        public GameObject map;
        public bool candyGun = true;
    }

    public Stage[] stages;
    public Stage currentStage = null;
    public int currentStageNum = 0;

    public void GenerateNextStage()
    {
        if(currentStage == null)
        currentStage.map.SetActive(false);
    }

}
