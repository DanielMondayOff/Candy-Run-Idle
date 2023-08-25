using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MondayOFF;

public class EventManager : MonoBehaviour
{
    public static EventManager instance;

    private int playtime = 0;

    private void Awake()
    {
        instance = this;
        DontDestroyOnLoad(gameObject);

    }

    private void Start()
    {

        if (ES3.KeyExists("playtime"))
            playtime = ES3.Load<int>("playtime");

        this.TaskWhile(30, 0, () => { playtime += 30; ES3.Save<int>("playtime", playtime); });

    }

    public void CustomEvent(AnalyticsType type, string additionInfo, bool timeEvent = false, bool stageNum = false)
    {
        var dic = new Dictionary<string, string>();
        dic.Add("FLAG_TYPE", $"{type} - {additionInfo}");
#if UNITY_ANDROID
        dic.Add("OS_TYPE", "AOS");
#endif
#if UNITY_IOS
        dic.Add("OS_TYPE", "IOS");
#endif
        EventTracker.LogCustomEvent($"GAME_FLAG", dic);
        if (timeEvent)
            TimeEvent("FLAG_TYPE", $"{type} - {additionInfo}");
    }

    void TimeEvent(string paramName, string value)
    {
        var dic = new Dictionary<string, string>();
        dic.Add(paramName, value);
        dic.Add("TIME", playtime.ToString());
#if UNITY_ANDROID
        dic.Add("OS_TYPE", "AOS");
#endif
#if UNITY_IOS
        dic.Add("OS_TYPE", "IOS");
#endif
        EventTracker.LogCustomEvent($"TIME_TRACE", dic);
    }

    void StageNum(string paramName, string value)
    {
        var dic = new Dictionary<string, string>();
        dic.Add(paramName, value);
        dic.Add("STAGENUM", StageManager.instance.currentStageNum.ToString());
#if UNITY_ANDROID
        dic.Add("OS_TYPE", "AOS");
#endif
#if UNITY_IOS
        dic.Add("OS_TYPE", "IOS");
#endif
        EventTracker.LogCustomEvent($"STAGE_TRACE", dic);
    }
}


public enum AnalyticsType
{
    UI,
    IDLE,
    RUN,
    IAP
}