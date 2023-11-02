using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class iapManager : MonoBehaviour
{
    public static iapManager instance;

    public const string iap_premium = "candyshopmaster_premium";
    public const string iap_royalCandy150 = "candyshopmaster_royalcandy150";
    public const string iap_royalCandy350 = "candyshopmaster_royalcandy350";
    public const string iap_royalCandy1000 = "candyshopmaster_royalcandy1000";
    public const string iap_rvTicket10 = "candyshopmaster_rv10";
    public const string iap_rvTicket20 = "candyshopmaster_rv20";
    public const string iap_rvTicket50 = "candyshopmaster_rv50";


    private void Awake()
    {
        if (instance != null)
            instance = this;
    }

    private void Start()
    {
        MondayOFF.IAPManager.RegisterProduct(iap_premium, () =>
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Premium Pack", true, true);
            SaveManager.instance.RVTicketAdd(20);
            SaveManager.instance.AddRoyalCandy(500);
            SaveManager.instance.PurchaseSkin(SkinType.Cutter, 3, 0, true);
            SaveManager.instance.PurchaseSkin(SkinType.IdlePlayer, 6, 0, true);

            ES3.Save<bool>("PurchasePremium", true);
            MondayOFF.AdsManager.DisableBanner();
            MondayOFF.AdsManager.DisableInterstitial();

            IdleManager.instance.shopUI.UpdateLayout();
            IdleManager.instance.skinUI.UpdateSlotUI();

        });

        MondayOFF.NoAds.OnNoAds += () =>
        {
            SaveManager.instance.RVTicketAdd(10);
            SaveManager.instance.AddRoyalCandy(250);
            ES3.Save<bool>("PurchaseNoAds", true);
            IdleManager.instance.shopUI.UpdateLayout();
        };

        MondayOFF.IAPManager.RegisterProduct(iap_rvTicket10, () =>
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase RV Ticket 10", true, true);
            SaveManager.instance.RVTicketAdd(10);
            IdleManager.instance.shopUI.PurchaseParticle(iap_rvTicket10);
        });

        MondayOFF.IAPManager.RegisterProduct(iap_rvTicket20, () =>
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase RV Ticket 20", true, true);
            SaveManager.instance.RVTicketAdd(20);
            IdleManager.instance.shopUI.PurchaseParticle(iap_rvTicket20);

        });

        MondayOFF.IAPManager.RegisterProduct(iap_rvTicket50, () =>
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase RV Ticket 50", true, true);
            SaveManager.instance.RVTicketAdd(50);
            IdleManager.instance.shopUI.PurchaseParticle(iap_rvTicket50);

        });

        MondayOFF.IAPManager.RegisterProduct(iap_royalCandy150, () =>
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Royal Candy 150", true, true);
            IdleManager.instance.shopUI.PurchaseParticle(iap_royalCandy150);
            SaveManager.instance.AddRoyalCandy(150);
        });

        MondayOFF.IAPManager.RegisterProduct(iap_royalCandy350, () =>
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Royal Candy 350", true, true);
            SaveManager.instance.AddRoyalCandy(350);
            IdleManager.instance.shopUI.PurchaseParticle(iap_royalCandy350);
        });

        MondayOFF.IAPManager.RegisterProduct(iap_royalCandy1000, () =>
        {
            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Royal Candy 1000", true, true);
            SaveManager.instance.AddRoyalCandy(1000);
            IdleManager.instance.shopUI.PurchaseParticle(iap_royalCandy1000);
        });

        if ((ES3.KeyExists("PurchasePremium") ? ES3.Load<bool>("PurchasePremium") : false) || (ES3.KeyExists("PurchaseNoAds") ? ES3.Load<bool>("PurchaseNoAds") : false))
        {
            MondayOFF.AdsManager.DisableBanner();
            MondayOFF.AdsManager.DisableInterstitial();
        }
    }
}
