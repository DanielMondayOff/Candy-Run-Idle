using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Sirenix.OdinInspector;

public class ShopUI : MonoBehaviour
{

    [SerializeField] GameObject premiumPack;
    [SerializeField] GameObject noAdsPack;

    [FoldoutGroup("TimeLimit")][SerializeField] GameObject royalCandyRVGainText;
    [FoldoutGroup("TimeLimit")][SerializeField] GameObject royalCandyRVTimeLimitObject;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text royalCandyRVRemainTimeText;

    [FoldoutGroup("TimeLimit")][SerializeField] GameObject moneyRVGainText;
    [FoldoutGroup("TimeLimit")][SerializeField] GameObject moneyRVTimeLimitObject;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text moneyRVRemainTimeText;



    public void Show()
    {
        SaveManager.instance.TaskWhile(1, 0, UpdateLimitRV);

        UpdateLayout();
        gameObject.SetActive(true);
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }

    public void UpdateLayout()
    {
        if (ES3.KeyExists("PurchasePremium") ? ES3.Load<bool>("PurchasePremium") : false)
        {
            premiumPack.SetActive(false);
        }

        if (ES3.KeyExists("PurchaseNoAds") ? ES3.Load<bool>("PurchaseNoAds") : false)
        {
            noAdsPack.SetActive(false);
        }
    }

    public void UpdateLimitRV()
    {
        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeRoyalCandyTime))
        {
            royalCandyRVGainText.SetActive(true);
            royalCandyRVTimeLimitObject.SetActive(false);
        }
        else
        {
            royalCandyRVGainText.SetActive(false);
            royalCandyRVTimeLimitObject.SetActive(true);

            var lefttime = (int)SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeRoyalCandyTime);

            royalCandyRVRemainTimeText.text = SaveManager.GetFormatedStringFromSecond(lefttime);
        }

        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeMoneyTime))
        {
            moneyRVGainText.SetActive(true);
            moneyRVTimeLimitObject.SetActive(false);
        }
        else
        {
            moneyRVGainText.SetActive(false);
            moneyRVTimeLimitObject.SetActive(true);

            var lefttime = (int)SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeMoneyTime);

            moneyRVRemainTimeText.text = SaveManager.GetFormatedStringFromSecond(lefttime);
        }
    }

    public void OnClickLimitCandyRV()
    {
        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeRoyalCandyTime))
        {
            Debug.LogError(SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeRoyalCandyTime));
            MondayOFF.AdsManager.ShowRewarded(() =>
                    {
                        SaveManager.instance.dailyFreeRoyalCandyTime = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
                        SaveManager.instance.AddRoyalCandy(25);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "TimeLimit RoyalCandy 25", true, true);

                        ES3.Save<string>("dailyFreeRoyalCandyTime", SaveManager.instance.dailyFreeRoyalCandyTime);
                    });
        }


    }

    public void OnClickLimitMoneyRV()
    {
        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeMoneyTime))
        {
            Debug.LogError(SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeMoneyTime));
            MondayOFF.AdsManager.ShowRewarded(() =>
                    {
                        SaveManager.instance.dailyFreeMoneyTime = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
                        SaveManager.instance.GetMoney(300);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "TimeLimit Money 300", true, true);

                        ES3.Save<string>("dailyFreeMoneyTime", SaveManager.instance.dailyFreeMoneyTime);
                    });
        }
    }
}