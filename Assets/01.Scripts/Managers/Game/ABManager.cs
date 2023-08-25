using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ABManager : MonoBehaviour
{

    public static ABManager instance;

    private void Awake()
    {
        instance = this;
    }

    public void SelectStart(string word)
    {
        if (ES3.KeyExists("NextStageEnable"))
            if (ES3.Load<bool>("NextStageEnable"))
                return;
            else
            {
                StartIdleFirst();

                return;
            }


        switch (word)
        {
            case "A":
                StartRunFirst();
                break;

            case "B":
                StartIdleFirst();
                break;

            default:

                break;


        }

        void StartRunFirst()
        {
            ES3.Save<string>("AB_Test", "A");
        }

        void StartIdleFirst()
        {
            ES3.Save<string>("AB_Test", "B");

            if (!ES3.KeyExists("NextStageEnable"))
                ES3.Load<bool>("NextStageEnable", false);

            RunManager.instance.StartIdleFirst();
        }
    }
}
