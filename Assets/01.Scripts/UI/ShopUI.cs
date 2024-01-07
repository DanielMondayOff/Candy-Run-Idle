using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Sirenix.OdinInspector;

public class ShopUI : MonoBehaviour
{

    public static int royalCandy_10MaxCount = 5;
    public static int royalCandy_50MaxCount = 1;
    public static int money100_MaxCount = 3;



    [SerializeField] GameObject premiumPack;
    [SerializeField] GameObject noAdsPack;

    [FoldoutGroup("TimeLimit")][SerializeField] GameObject royalCandyRVGainText_10;
    [FoldoutGroup("TimeLimit")][SerializeField] GameObject royalCandyRVTimeLimitObject_10;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text royalcandyRVLimitCountText_10;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text royalCandyRVRemainTimeText_10;
    [FoldoutGroup("TimeLimit")][SerializeField] Transform royalCandyAttractorStart_10;
    [FoldoutGroup("TimeLimit")][SerializeField] Transform royalCandyAttractorEnd_10;

    [Space]

    [FoldoutGroup("TimeLimit")][SerializeField] GameObject royalCandyRVGainText_50;
    [FoldoutGroup("TimeLimit")][SerializeField] GameObject royalCandyRVTimeLimitObject_50;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text royalcandyRVLimitCountText_50;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text royalCandyRVRemainTimeText_50;
    [FoldoutGroup("TimeLimit")][SerializeField] Transform royalCandyAttractorStart_50;
    [FoldoutGroup("TimeLimit")][SerializeField] Transform royalCandyAttractorEnd_50;


    [FoldoutGroup("TimeLimit")][SerializeField] Material royalCandyAttractorMat;
    [FoldoutGroup("TimeLimit")][SerializeField] Material rvTicketMat;

    [Space]

    [FoldoutGroup("TimeLimit")][SerializeField] GameObject moneyRVGainText;
    [FoldoutGroup("TimeLimit")][SerializeField] GameObject moneyRVTimeLimitObject;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text moneyRVLimitCountText;
    [FoldoutGroup("TimeLimit")][SerializeField] UnityEngine.UI.Text moneyRVRemainTimeText;
    [FoldoutGroup("TimeLimit")][SerializeField] Transform moneyRVAttractorStart;
    [FoldoutGroup("TimeLimit")][SerializeField] Transform moneyRVAttractorEnd;
    [FoldoutGroup("TimeLimit")][SerializeField] Material moneyRVAttractorMat;

    [FoldoutGroup("Purchase")][SerializeField] Transform royalCandy150Start;
    [FoldoutGroup("Purchase")][SerializeField] Transform royalCandy350Start;
    [FoldoutGroup("Purchase")][SerializeField] Transform royalCandy1000Start;

    [FoldoutGroup("Purchase")][SerializeField] Transform RVTicket10Start;
    [FoldoutGroup("Purchase")][SerializeField] Transform RVTicket20Start;
    [FoldoutGroup("Purchase")][SerializeField] Transform RVTicket50Start;
    [FoldoutGroup("Purchase")][SerializeField] Transform RVTicketEnd;

    public void Show()
    {
        SaveManager.instance.TaskWhile(1, 0, UpdateLimitRV);

        gameObject.SetActive(true);
        UpdateLayout();
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
        bool any = false;

        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeRoyalCandy10Time))
        {
            if ((ES3.KeyExists("TimeLimitRoyalCandy10LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy10LimitCount") : royalCandy_10MaxCount) == 0)
                ES3.Save<int>("TimeLimitRoyalCandy10LimitCount", royalCandy_10MaxCount);

            royalCandyRVGainText_10.SetActive(true);
            royalCandyRVTimeLimitObject_10.SetActive(false);

            any = true;
        }
        else
        {
            royalCandyRVGainText_10.SetActive(false);
            royalCandyRVTimeLimitObject_10.SetActive(true);

            var lefttime = (int)SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeRoyalCandy10Time);

            royalCandyRVRemainTimeText_10.text = SaveManager.GetFormatedStringFromSecond(lefttime);
        }

        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeRoyalCandy50Time))
        {
            if ((ES3.KeyExists("TimeLimitRoyalCandy50LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy50LimitCount") : royalCandy_50MaxCount) == 0)
                ES3.Save<int>("TimeLimitRoyalCandy50LimitCount", royalCandy_50MaxCount);

            royalCandyRVGainText_50.SetActive(true);
            royalCandyRVTimeLimitObject_50.SetActive(false);

            any = true;
        }
        else
        {

            royalCandyRVGainText_50.SetActive(false);
            royalCandyRVTimeLimitObject_50.SetActive(true);

            var lefttime = (int)SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeRoyalCandy50Time);

            royalCandyRVRemainTimeText_50.text = SaveManager.GetFormatedStringFromSecond(lefttime);
        }

        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeMoneyTime))
        {
            if ((ES3.KeyExists("TimeLimitMoney100LimitCount") ? ES3.Load<int>("TimeLimitMoney100LimitCount") : money100_MaxCount) == 0)
                ES3.Save<int>("TimeLimitMoney100LimitCount", money100_MaxCount);

            moneyRVGainText.SetActive(true);
            moneyRVTimeLimitObject.SetActive(false);

            any = true;
        }
        else
        {
            moneyRVGainText.SetActive(false);
            moneyRVTimeLimitObject.SetActive(true);

            var lefttime = (int)SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeMoneyTime);

            moneyRVRemainTimeText.text = SaveManager.GetFormatedStringFromSecond(lefttime);
        }

        royalcandyRVLimitCountText_10.text = "Available " + (ES3.KeyExists("TimeLimitRoyalCandy10LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy10LimitCount") : royalCandy_10MaxCount) + "/" + royalCandy_10MaxCount;
        royalcandyRVLimitCountText_50.text = "Available " + (ES3.KeyExists("TimeLimitRoyalCandy50LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy50LimitCount") : royalCandy_50MaxCount) + "/" + royalCandy_50MaxCount;
        moneyRVLimitCountText.text = "Available " + (ES3.KeyExists("TimeLimitMoney100LimitCount") ? ES3.Load<int>("TimeLimitMoney100LimitCount") : money100_MaxCount) + "/" + money100_MaxCount;
    }

    public void OnClickLimitCandyRV_10()
    {
        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeRoyalCandy10Time))
        {
            AdManager.instance.ShowRewarded(() =>
                    {
                        ES3.Save<int>("TimeLimitRoyalCandy10LimitCount", (ES3.KeyExists("TimeLimitRoyalCandy10LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy10LimitCount") : royalCandy_10MaxCount) - 1);

                        if ((ES3.KeyExists("TimeLimitRoyalCandy10LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy10LimitCount") : royalCandy_10MaxCount) <= 0)
                        {
                            SaveManager.instance.dailyFreeRoyalCandy10Time = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
                            ES3.Save<string>("dailyFreeRoyalCandy10Time", SaveManager.instance.dailyFreeRoyalCandy10Time);
                        }
                        else
                        {

                        }

                        SaveManager.instance.AddRoyalCandy(10);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "TimeLimit RoyalCandy 10", true, true);

                        this.TaskDelay(0.5f, () =>
                                                {
                                                    Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd_10, royalCandyAttractorStart_10
                            , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)10), (short)10, (short)10, 1, 0.8f / ((float)10)));
                                                });

                    }, "TimeLimit RoyalCandy 10");
        }
    }

    public void OnClickLimitCandyRV_50()
    {
        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeRoyalCandy50Time))
        {
            AdManager.instance.ShowRewarded(() =>
                    {
                        ES3.Save<int>("TimeLimitRoyalCandy50LimitCount", (ES3.KeyExists("TimeLimitRoyalCandy50LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy50LimitCount") : royalCandy_50MaxCount) - 1);

                        if ((ES3.KeyExists("TimeLimitRoyalCandy50LimitCount") ? ES3.Load<int>("TimeLimitRoyalCandy50LimitCount") : royalCandy_10MaxCount) <= 0)
                        {
                            SaveManager.instance.dailyFreeRoyalCandy50Time = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
                            ES3.Save<string>("dailyFreeRoyalCandy50Time", SaveManager.instance.dailyFreeRoyalCandy50Time);
                        }
                        else
                        {

                        }

                        SaveManager.instance.AddRoyalCandy(50);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "TimeLimit RoyalCandy 50", true, true);

                        this.TaskDelay(0.5f, () =>
                                                {
                                                    Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd_50, royalCandyAttractorStart_50
                            , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                                                });

                    }, "TimeLimit RoyalCandy 50");
        }
    }

    public void OnClickLimitMoneyRV()
    {
        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeMoneyTime))
        {
            // Debug.LogError(SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeMoneyTime));
            AdManager.instance.ShowRewarded(() =>
                    {
                        ES3.Save<int>("TimeLimitMoney100LimitCount", (ES3.KeyExists("TimeLimitMoney100LimitCount") ? ES3.Load<int>("TimeLimitMoney100LimitCount") : money100_MaxCount) - 1);

                        if ((ES3.KeyExists("TimeLimitMoney100LimitCount") ? ES3.Load<int>("TimeLimitMoney100LimitCount") : money100_MaxCount) <= 0)
                        {
                            SaveManager.instance.dailyFreeMoneyTime = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
                            ES3.Save<string>("dailyFreeMoney100Time", SaveManager.instance.dailyFreeMoneyTime);
                        }
                        else
                        {

                        }

                        SaveManager.instance.GetMoney(100);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "TimeLimit Money 100", true, true);

                        this.TaskDelay(0.5f, () =>
                        {
                            Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, moneyRVAttractorEnd, moneyRVAttractorStart
                        , moneyRVAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                        });

                        ES3.Save<string>("dailyFreeMoney100Time", SaveManager.instance.dailyFreeMoneyTime);
                    }, "TimeLimit Money 100");
        }
    }

    public void OnClickSmallPlusBtn(string info)
    {
        Show();

        EventManager.instance.CustomEvent(AnalyticsType.UI, "OnClickSmallPlusBtn_" + info, true, true);
    }

    public void PurchaseIap(string id)
    {
        var status = MondayOFF.IAPManager.PurchaseProduct(id);

        if (status == MondayOFF.IAPStatus.Success)
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, id, true, true);

            // switch (id)
            // {
            //     case iapManager.iap_royalCandy150:
            //         Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd, royalCandy150Start
            //         , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
            //         break;

            //     case iapManager.iap_royalCandy350:
            //         Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd, royalCandy350Start
            //         , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
            //         break;

            //     case iapManager.iap_royalCandy1000:
            //         Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd, royalCandy1000Start
            //         , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
            //         break;

            //     case iapManager.iap_rvTicket10:
            //         Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, RVTicketEnd, RVTicket10Start
            //                             , rvTicketMat, 1, new ParticleSystem.Burst(0.8f / ((float)10), (short)10, (short)10, 1, 0.8f / ((float)10)));
            //         break;

            //     case iapManager.iap_rvTicket20:
            //         Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, RVTicketEnd, RVTicket20Start
            //                                                 , rvTicketMat, 1, new ParticleSystem.Burst(0.8f / ((float)10), (short)10, (short)10, 1, 0.8f / ((float)10)));
            //         break;

            //     case iapManager.iap_rvTicket50:
            //         Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, RVTicketEnd, RVTicket50Start
            //                                                 , rvTicketMat, 1, new ParticleSystem.Burst(0.8f / ((float)10), (short)10, (short)10, 1, 0.8f / ((float)10)));
            //         break;
            // }
        }
    }

    public void PurchaseParticle(string id)
    {
        switch (id)
        {
            case iapManager.iap_royalCandy150:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd_50, royalCandy150Start
                , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                break;

            case iapManager.iap_royalCandy350:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd_50, royalCandy350Start
                , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                break;

            case iapManager.iap_royalCandy1000:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd_50, royalCandy1000Start
                , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                break;

            case iapManager.iap_rvTicket10:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, RVTicketEnd, RVTicket10Start
                                    , rvTicketMat, 1, new ParticleSystem.Burst(0.8f / ((float)10), (short)10, (short)10, 1, 0.8f / ((float)10)));
                break;

            case iapManager.iap_rvTicket20:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, RVTicketEnd, RVTicket20Start
                                                        , rvTicketMat, 1, new ParticleSystem.Burst(0.8f / ((float)10), (short)10, (short)10, 1, 0.8f / ((float)10)));
                break;

            case iapManager.iap_rvTicket50:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, RVTicketEnd, RVTicket50Start
                                                        , rvTicketMat, 1, new ParticleSystem.Burst(0.8f / ((float)10), (short)10, (short)10, 1, 0.8f / ((float)10)));
                break;
        }
    }
}