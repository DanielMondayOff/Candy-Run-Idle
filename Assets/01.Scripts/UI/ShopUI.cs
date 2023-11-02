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
    [FoldoutGroup("TimeLimit")][SerializeField] Transform royalCandyAttractorStart;
    [FoldoutGroup("TimeLimit")][SerializeField] Transform royalCandyAttractorEnd;
    [FoldoutGroup("TimeLimit")][SerializeField] Material royalCandyAttractorMat;
    [FoldoutGroup("TimeLimit")][SerializeField] Material rvTicketMat;




    [FoldoutGroup("TimeLimit")][SerializeField] GameObject moneyRVGainText;
    [FoldoutGroup("TimeLimit")][SerializeField] GameObject moneyRVTimeLimitObject;
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
        bool any = false;

        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeRoyalCandyTime))
        {
            royalCandyRVGainText.SetActive(true);
            royalCandyRVTimeLimitObject.SetActive(false);

            any = true;
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

            any = true;
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
            AdManager.instance.ShowRewarded(() =>
                    {
                        SaveManager.instance.dailyFreeRoyalCandyTime = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
                        SaveManager.instance.AddRoyalCandy(25);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "TimeLimit RoyalCandy 25", true, true);

                        this.TaskDelay(0.5f, () =>
                                                {
                                                    Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd, royalCandyAttractorStart
                            , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                                                });

                        ES3.Save<string>("dailyFreeRoyalCandyTime", SaveManager.instance.dailyFreeRoyalCandyTime);
                    }, "TimeLimit RoyalCandy 25");
        }
    }

    public void OnClickLimitMoneyRV()
    {
        if (SaveManager.instance.IsTimeLimitRVReady(SaveManager.instance.dailyFreeMoneyTime))
        {
            // Debug.LogError(SaveManager.instance.GetLeftTime(SaveManager.instance.dailyFreeMoneyTime));
            AdManager.instance.ShowRewarded(() =>
                    {
                        SaveManager.instance.dailyFreeMoneyTime = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
                        SaveManager.instance.GetMoney(300);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "TimeLimit Money 300", true, true);

                        this.TaskDelay(0.5f, () =>
                        {
                            Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, moneyRVAttractorEnd, moneyRVAttractorStart
                        , moneyRVAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                        });

                        ES3.Save<string>("dailyFreeMoneyTime", SaveManager.instance.dailyFreeMoneyTime);
                    }, "TimeLimit Money 300");
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
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd, royalCandy150Start
                , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                break;

            case iapManager.iap_royalCandy350:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd, royalCandy350Start
                , royalCandyAttractorMat, 1, new ParticleSystem.Burst(0.8f / ((float)25), (short)25, (short)25, 1, 0.8f / ((float)25)));
                break;

            case iapManager.iap_royalCandy1000:
                Util.GenerateParticleAttractor(IdleManager.instance.shopUI.transform, royalCandyAttractorEnd, royalCandy1000Start
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