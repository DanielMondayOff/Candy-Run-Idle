using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using Sirenix.OdinInspector;
using System;

public class SaveManager : MonoBehaviour
{
    // public List<CandyItem> candyInventory = new List<CandyItem>();
    public List<candySaveData> candyInventory = new List<candySaveData>();

    [SerializeField] int money;
    public int GetCurrentMoney => money;
    [SerializeField] int royalCandy;
    public int GetRoyalCandy => royalCandy;

    [SerializeField] bool enableShop = false;
    public bool GetEnableShop => enableShop;

    private List<Text> moneyTextList = new List<Text>();
    private List<CandyInventory> inventorys = new List<CandyInventory>();
    [SerializeField] private List<CandyUnlockStatus> candyUnlockStatuses = new List<CandyUnlockStatus>();
    public List<CandyUnlockStatus> GetCandyUnlockStatuses() => candyUnlockStatuses;
    public List<RVTicketImage> rVTicketImageList = new List<RVTicketImage>();

    public List<Text> royalCandyTextList = new List<Text>();
    public List<Text> rvTicketTextList = new List<Text>();

    public UnityEngine.Events.UnityEvent onMoneyChangeEvent = new UnityEngine.Events.UnityEvent();
    public UnityEngine.Events.UnityEvent onChangeCandyInventoryEvent = new UnityEngine.Events.UnityEvent();
    public UnityEngine.Events.UnityEvent onRoyalCandyChangeEvent = new UnityEngine.Events.UnityEvent();
    public UnityEngine.Events.UnityEvent onRVTicketChangeEvent = new UnityEngine.Events.UnityEvent();


    public bool enableCandyInventoryUIUpdate = true;

    [SerializeField] string USER_GUID;
    public string Get_USER_GUID => USER_GUID;

    public int RVTicket = 0;

    public int cutterSkinID = 0;
    public int IdlePlayerSkinID = 0;

    public string dailyFreeRoyalCandy10Time = "2000-01-01 01:01:01";
    public string dailyFreeRoyalCandy50Time = "2000-01-01 01:01:01";

    public string dailyFreeMoneyTime = "2000-01-01 01:01:01";

    public List<SkinSaveData> skinSaveDataList = new List<SkinSaveData>();

    public List<ShopDot> shopDotsList = new List<ShopDot>();

    public static SaveManager instance = null;

    private TaskUtil.DelayTaskMethod moneySaveDelayTask = null;


    private void Awake()
    {
        if (!PlayerPrefs.HasKey("ClearZero"))
        {
            MondayOFF.EventTracker.ClearStage(0);
            PlayerPrefs.SetInt("ClearZero", 1);
        }

        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

        if (ES3.KeyExists("Money"))
            money = ES3.Load<int>("Money");
        else
            money = 0;

        if (ES3.KeyExists("RoyalCandy"))
            royalCandy = ES3.Load<int>("RoyalCandy");
        else
            royalCandy = 0;

        if (ES3.KeyExists("CandyInventory"))
            candyInventory = ES3.Load<List<candySaveData>>("CandyInventory");

        if (ES3.KeyExists("USER_GUID"))
            USER_GUID = ES3.Load<string>("USER_GUID");
        else
        {
            var USER_GUID = System.Guid.NewGuid().ToString();
            ES3.Save<string>("USER_GUID", USER_GUID);
        }

        if (ES3.KeyExists("CandyUnlockStatus"))
            candyUnlockStatuses = ES3.Load<List<CandyUnlockStatus>>("CandyUnlockStatus");

        if (ES3.KeyExists("RVTicket"))
            RVTicket = ES3.Load<int>("RVTicket");

        if (ES3.KeyExists("SkinSaveData"))
            skinSaveDataList = ES3.Load<List<SkinSaveData>>("SkinSaveData");

        if (ES3.KeyExists("dailyFreeRoyalCandy10Time"))
            dailyFreeRoyalCandy10Time = ES3.Load<string>("dailyFreeRoyalCandy10Time");

        if (ES3.KeyExists("dailyFreeRoyalCandy50Time"))
            dailyFreeRoyalCandy50Time = ES3.Load<string>("dailyFreeRoyalCandy50Time");

        if (ES3.KeyExists("dailyFreeMoney100Time"))
            dailyFreeMoneyTime = ES3.Load<string>("dailyFreeMoney100Time");
    }

    private void Start()
    {
        OnChangeMoney();
        OnChangeRoyalCandy();

        // MondayOFF.AdsManager.Initialize();
        // MondayOFF.AdsManager.ShowBanner();

        MondayOFF.AdsManager.OnAfterInterstitial += () => { if (!ES3.KeyExists("IS_Showend")) ES3.Save<bool>("IS_Showend", true); };
        MondayOFF.IAPManager.OnAfterPurchase += (isSuccess) =>
            {
                EventManager.instance.CustomEvent(AnalyticsType.IAP, "NoAdsPurchase", true, true);
            };

        this.TaskWhile(1, 0, () =>
        {
            shopDotsList.ForEach((n) => n.ChangeVisible(IsTimeLimitRVReady(dailyFreeMoneyTime) || IsTimeLimitRVReady(dailyFreeRoyalCandy10Time) || IsTimeLimitRVReady(dailyFreeRoyalCandy50Time)));
        });

    }

    public int GetMoney() => money;

    public void GetMoney(int value)
    {
        money += value;

        // ES3.Save<int>("Money", money);

        MoneySaveDelay();

        OnChangeMoney();
    }

    public void LossMoney(int value)
    {
        money -= value;

        ES3.Save<int>("Money", money);

        // MoneySaveDelay();

        OnChangeMoney();
    }
    public void OnChangeMoney()
    {
        moneyTextList.ForEach((n) => n.text = money.ToString());

        onMoneyChangeEvent.Invoke();
    }

    public void AddRoyalCandy(int value)
    {
        royalCandy += value;

        ES3.Save<int>("RoyalCandy", royalCandy);

        if (!ES3.KeyExists("enableRoyalCandyText"))
        {
            ES3.Save<bool>("enableRoyalCandyText", true);

            Util.RemoveMissingReferences<Text>(royalCandyTextList);
            royalCandyTextList.ForEach((n) => n.GetComponent<RoyalCandyText>().ChangeVisible(true));
        }

        OnChangeRoyalCandy();
    }

    public void UseRoyalCandy(int value)
    {
        royalCandy -= value;

        ES3.Save<int>("RoyalCandy", royalCandy);

        OnChangeRoyalCandy();
    }

    public void OnChangeRoyalCandy()
    {
        Util.RemoveMissingReferences<Text>(royalCandyTextList);
        royalCandyTextList.ForEach((n) => n.text = royalCandy.ToString());

        onRoyalCandyChangeEvent.Invoke();
    }

    public void OnChangeRvTicket()
    {
        Util.RemoveMissingReferences<Text>(rvTicketTextList);

        rvTicketTextList.ForEach((n) => n.text = RVTicket.ToString());
        rvTicketTextList.ForEach((n) => n.GetComponent<RVTicketText>().ChangeVisible(true));

        rVTicketImageList.ForEach((n) => n.OnChangeRvTicketCount());

        onRVTicketChangeEvent.Invoke();
    }

    public void OnChangeCandyInventory()
    {
        if (!enableCandyInventoryUIUpdate)
            return;

        onChangeCandyInventoryEvent.Invoke();
    }

    public void AddCandy(List<CandyItem> newCandys, bool uiUpdate = true)
    {
        foreach (var newCandy in newCandys)
        {
            bool isNewCandy = true;
            foreach (var candy in candyInventory)
            {
                if (newCandy.candy.id == candy.id)
                {
                    isNewCandy = false;

                    candy.count += newCandy.count;

                    break;
                }
            }

            if (isNewCandy)
            {
                candyInventory.Add(new candySaveData() { id = newCandy.candy.id, count = newCandy.count });
            }
        }

        ES3.Save<List<candySaveData>>("CandyInventory", candyInventory);

        // IdleManager.instance.CheckingCandyJar();

        if (uiUpdate)
            OnChangeCandyInventory();

        IdleManager.instance.CheckingCandyMachine();
    }

    public void TakeCandy(int id, int count)
    {
        for (int i = 0; i < candyInventory.Count; i++)
        {
            if (candyInventory[i].id == id)
            {
                candyInventory[i].TakeCandy(count);

                if (candyInventory[i].count <= 0)
                    candyInventory[i].count = 0;

                OnChangeCandyInventory();

                ES3.Save<List<candySaveData>>("CandyInventory", candyInventory);

                return;
            }
        }

        foreach (var candy in candyInventory)
        {
            if (candy.id == id)
            {
                candy.TakeCandy(count);
            }
        }

        OnChangeCandyInventory();

        ES3.Save<List<candySaveData>>("CandyInventory", candyInventory);
    }

    public candySaveData FindCandyItem(int id)
    {
        if (candyInventory.Find((n => n.id == id)) == null)
        {
            candyInventory.Add(new candySaveData() { id = id, count = 0 });
            return candyInventory.Find((n => n.id == id));
        }
        else
            return candyInventory.Find((n => n.id == id));
    }

    public CandyObject FindCandyObject(int id)
    {
        return Resources.LoadAll<CandyObject>("Candy").Where((n) => n.id == id).FirstOrDefault();
    }

    public void AddMoneyText(Text text)
    {
        moneyTextList.Add(text);

        OnChangeMoney();
    }

    public void RemoveMoneyText(Text text)
    {
        moneyTextList.Remove(text);
    }

    public void AddRoyalCandyText(Text text)
    {
        if (royalCandyTextList.Contains(text))
            return;

        royalCandyTextList.Add(text);

        OnChangeRoyalCandy();
    }

    public void AddRVTicketText(Text text)
    {
        if (rvTicketTextList.Contains(text))
            return;


        Util.RemoveMissingReferences<Text>(rvTicketTextList);
        rvTicketTextList.Add(text);

        OnChangeRvTicket();
    }

    public void RemoveRVTicketText(Text text)
    {
        rvTicketTextList.Remove(text);
    }

    public bool CheckPossibleUpgrade(int cost)
    {
        if (money >= cost)
            return true;
        else
            return false;
    }

    public bool CheckCandyExist(int id, int count = 1)
    {
        foreach (var candy in candyInventory)
        {
            if (candy.id == id)
                if (candy.count >= count)
                    return true;
                else
                    return false;
        }

        return false;
    }

    public CandyObject FindCandyObjectInReousrce(int id)
    {
        return Resources.LoadAll<CandyObject>("Candy").FirstOrDefault<CandyObject>((n) => n.id == id);
    }

    public void MoneySaveDelay()
    {
        if (moneySaveDelayTask == null)
        {
            // ES3.Save<int>("Money", money);
            Save();
        }
        else
        {
            moneySaveDelayTask.Kill();
            moneySaveDelayTask = null;
            Save();
        }

        void Save()
        {
            moneySaveDelayTask = this.TaskDelay(2, () => { ES3.Save<int>("Money", money); moneySaveDelayTask.Kill(); moneySaveDelayTask = null; });
        }
    }

    public void AddUnlockPoint(List<CandyItem> candyItems)
    {
        var currentUnlockStatus = candyUnlockStatuses.Where((n) => !n.unlocked).OrderBy((n) => n.id).ToArray();

        if (currentUnlockStatus.Length > 0)
        {
            float totalPoint = 0;

            candyItems.ForEach((n) => totalPoint += (n.candy.unlockPoint * n.count));

            while (totalPoint > 0 && currentUnlockStatus != null && currentUnlockStatus.Length > 0)
            {
                totalPoint = currentUnlockStatus[0].AddPercent(totalPoint);

                if (candyUnlockStatuses.Where((n) => !n.unlocked).Count() > 0)
                    currentUnlockStatus[0] = candyUnlockStatuses.Where((n) => !n.unlocked).OrderBy((n) => n.id).ToArray()[0];
            }
        }

        SaveCandyUnlockStatus(candyUnlockStatuses);
    }

    public void AddUnlockPoint(int point)
    {
        var currentUnlockStatus = candyUnlockStatuses.Where((n) => !n.unlocked).OrderBy((n) => n.id).ToArray();

        if (currentUnlockStatus.Length > 0)
        {
            float totalPoint = point;

            while (totalPoint > 0 && currentUnlockStatus != null && currentUnlockStatus.Length > 0)
            {
                totalPoint = currentUnlockStatus[0].AddPercent(totalPoint);

                if (candyUnlockStatuses.Where((n) => !n.unlocked).Count() > 0)
                    currentUnlockStatus[0] = candyUnlockStatuses.Where((n) => !n.unlocked).OrderBy((n) => n.id).ToArray()[0];
            }
        }

        SaveCandyUnlockStatus(candyUnlockStatuses);
    }

    public void AddCandyUnlockPercent(int id, float precent = 1f)
    {
        var list = candyUnlockStatuses.Where((n) => n.id == id).Where((n) => !n.unlocked).ToList();

        // if ()
    }

    public void SaveCandyUnlockStatus(List<CandyUnlockStatus> statuses)
    {
        candyUnlockStatuses = statuses;

        ES3.Save<List<CandyUnlockStatus>>("CandyUnlockStatus", candyUnlockStatuses);
    }

    [Button]
    public void ForceSaveCandyUnlockStatus()
    {
        ES3.Save<List<CandyUnlockStatus>>("CandyUnlockStatus", candyUnlockStatuses);
    }

    public void RVTicketAdd(int count)
    {
        RVTicket += count;

        ES3.Save("RVTicket", RVTicket);

        if (!ES3.KeyExists("enableRVTickText"))
        {
            ES3.Save<bool>("enableRVTickText", true);
            Util.RemoveMissingReferences<Text>(rvTicketTextList);
            rvTicketTextList.ForEach((n) => n.GetComponent<RVTicketText>().ChangeVisible(true));
        }

        OnChangeRvTicket();
    }

    public void RVTicketUse(int count = 1)
    {
        RVTicket -= count;

        ES3.Save("RVTicket", RVTicket);

        Util.RemoveMissingReferences<Text>(rvTicketTextList);

        OnChangeRvTicket();
    }

    public void SaveCurrentCutterSkin(int id)
    {
        cutterSkinID = id;

        IdleManager.instance.currentSkinCuttingSpeedBonus = FindSkinObject(SkinType.Cutter, id).GetCuttingSpeedBonus();

        ES3.Save("cutterSkin", id);
    }

    public void SaveCurrentIdlePlayerSkin(int id)
    {
        IdlePlayerSkinID = id;

        IdleManager.instance.currentSkinMoveSpeedBonus = FindSkinObject(SkinType.IdlePlayer, id).GetMoveSpeedBonus();
        IdleManager.instance.currentSkinMaxStackBonus = FindSkinObject(SkinType.IdlePlayer, id).GetMaxStackBonus();


        ES3.Save("idlePlayerSkin", id);
    }

    public void PurchaseSkin(SkinType type, int id, int price, bool select = true)
    {
        if (royalCandy < price)
        {
            Debug.LogError("돈이 부족합니다 " + type + " " + id);
            return;
        }

        if (skinSaveDataList.Where((n) => n.type == type && n.id == id).Count() > 0)
        {
            Debug.LogError("이미 소지중인 스킨입니다 " + type + " " + id);
            return;
        }

        SaveManager.instance.UseRoyalCandy(price);

        switch (type)
        {
            case SkinType.Cutter:
                SaveCurrentCutterSkin(id);
                break;

            case SkinType.IdlePlayer:
                SaveCurrentIdlePlayerSkin(id);
                break;
        }

        GainSkin(type, id);

        EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Skin_" + type + "_" + id, true, true);

        IdleManager.instance.skinUI.SelectSkin(type, id);
    }

    public SkinSaveData GetSkinSaveData(SkinType type, int id)
    {
        var find = skinSaveDataList.Where((n) => n.type == type && n.id == id);

        if (find.Count() > 0)
        {
            return find.First();
        }
        else
        {
            return null;
        }
    }

    public void WatchedRVOnceForSkin(SkinType type, int id)
    {
        var data = GetSkinSaveData(type, id);

        if (data != null)
        {
            data.watchedRV++;

            if (FindSkinObject(type, id).requireRV <= data.watchedRV)
            {
                data.complete = true;
                ES3.Save<List<SkinSaveData>>("SkinSaveData", skinSaveDataList);

                IdleManager.instance.skinUI.SelectSkin(type, id);
            }
        }
        else
        {
            skinSaveDataList.Add(new SkinSaveData() { type = type, id = id, watchedRV = 1 });
            ES3.Save<List<SkinSaveData>>("SkinSaveData", skinSaveDataList);
            return;
        }

    }

    public int GetHowManyWatchedRVForSkin(SkinType type, int id)
    {
        var find = skinSaveDataList.Where((n) => n.type == type && n.id == id);

        if (find.Count() > 0)
            return find.First().watchedRV;
        else
            return 0;
    }

    public void GainSkin(SkinType _type, int _id)
    {
        skinSaveDataList.Add(new SkinSaveData() { type = _type, id = _id, complete = true });

        ES3.Save<List<SkinSaveData>>("SkinSaveData", skinSaveDataList);
    }

    public bool CheckSkinHave(SkinType type, int id)
    {
        return (skinSaveDataList.Where((n) => (n.type == type && n.id == id && n.complete) || FindSkinObject(type, id).basic).Count() > 0);
    }

    public SkinObject FindSkinObject(SkinType type, int id)
    {
        switch (type)
        {
            case SkinType.Cutter:
                return Resources.LoadAll<SkinObject>("Skin/Cutter").Where((n) => n.id == id).First();

            case SkinType.IdlePlayer:
                return Resources.LoadAll<SkinObject>("Skin/IdlePlayer").Where((n) => n.id == id).First();

            default:

                Debug.LogError("지원하지 않는 타입입니다. " + type);

                return null;
        }
    }

    public void AllSkin()
    {
        skinSaveDataList.Clear();

        foreach (var skin in Resources.LoadAll<SkinObject>("Skin/IdlePlayer"))
        {
            skinSaveDataList.Add(new SkinSaveData() { type = SkinType.Cutter, id = skin.id, complete = true });
        }

        foreach (var skin in Resources.LoadAll<SkinObject>("Skin/Cutter"))
        {
            skinSaveDataList.Add(new SkinSaveData() { type = SkinType.IdlePlayer, id = skin.id, complete = true });
        }
    }

    public static System.TimeSpan GetTimeDiff(System.DateTime time)
    {
        //print(DateTime.Now + " - " +  time);
        System.TimeSpan timeDiff = System.DateTime.Now - time;

        return timeDiff;
    }

    public double GetLeftTime(string time)
    {
        // try
        // {
        return 28800 - GetTimeDiff(DateTime.ParseExact(time, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
        // }
        // catch (FormatException e)
        // {
        //     FirebaseAnalytics.LogEvent("FormatExceptionErrorEvent");

        //     Debug.LogError("Date Time Parse Error : / " + UserDataManager.instance.currentUserData.usingShipTrialTime + " / " + e);

        //     UserDataManager.instance.currentUserData.usingShipTrialTime = "2000-01-01 01:01:01";

        //     GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

        //     return freeCrystalWaitTime - (int)Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingShipTrialTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
        // }
    }

    public static string GetFormatedStringFromSecond(int second)
    {
        // var hour2 = second / 3600; // 3600 = 1
        // var min2 = (second % 3600); // 60 = 1
        // var sec2 = (second % 3600) % 60;

        // Debug.LogError(second % 3600);

        // int min = second / 60;
        // int hour = min / 60;
        // int sec = second % 60;

        // return hour2 + " : " + min2 + " : " + sec2;

        int hours = second / 3600;
        int minutes = (second % 3600) / 60;
        int remainingSeconds = second % 60;

        // 문자열 형식으로 변환
        string formattedTime = $"{hours:D2}:{minutes:D2}:{remainingSeconds:D2}";

        return formattedTime;
    }

    public bool IsTimeLimitRVReady(string time)
    {
        double timeDiff = GetTimeDiff(DateTime.ParseExact(time, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;

        if (timeDiff < 86400f)
            return false;
        else
            return true;
    }
}

[System.Serializable]
public class TempCandyInventory
{
    public List<CandyItem> candyItems = new List<CandyItem>();

    public void AddCandy(CandyItem item)
    {
        foreach (var candy in candyItems)
        {
            if (candy.candy.id == item.candy.id)
            {
                candy.count += item.count;

                return;
            }
        }
        candyItems.Add(new CandyItem() { candy = item.candy, count = item.count });
    }
}

[System.Serializable]
public class candySaveData
{
    public int id;
    public int count;

    public candySaveData DuplicateCandy(int minCount, int maxCount)
    {
        int count = UnityEngine.Random.Range(minCount, maxCount);

        // this.count -= count;

        count = Mathf.Clamp(count, 0, int.MaxValue);

        return new candySaveData() { id = this.id, count = count };
    }

    public void TakeCandy(int count)
    {
        this.count -= count;
    }
}

[System.Serializable]
public class CandyUnlockStatus
{
    public int id;
    public float percent = 0;
    public float goalPercent = 100;
    public bool unlocked = false;


    public float AddPercent(float p = 1f)
    {
        if (unlocked)
            return 0;

        percent += p;

        if (percent >= goalPercent)
        {
            Unlock();

            return percent - goalPercent;
        }

        return 0;
    }

    public void Unlock()
    {
        unlocked = true;

        EventManager.instance.CustomEvent(AnalyticsType.RUN, "Unlock Candy_" + id, true, true);
    }

    public float GetCurrentPercent()
    {
        return Mathf.Clamp((percent / goalPercent) * 100f, 0, 100f);
    }
}

[System.Serializable]
public class SkinSaveData
{

    public SkinType type;
    public int id;
    public int watchedRV = 0;
    public bool complete = false;
}
