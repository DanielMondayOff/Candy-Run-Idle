using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class iapManager : MonoBehaviour
{
    public static iapManager instance;

    private void Awake()
    {
        if (instance != null)
            instance = this;
    }

    private void Start()
    {
        MondayOFF.IAPManager.RegisterProduct("candyshopmaster_premium", () => { EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Premium Pack", true, true); });

        MondayOFF.IAPManager.RegisterProduct("candyshopmaster_rv10", () => { EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase RV Ticket 10", true, true); SaveManager.instance.RVTicketAdd(10); });
        MondayOFF.IAPManager.RegisterProduct("candyshopmaster_rv20", () => { EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase RV Ticket 20", true, true); SaveManager.instance.RVTicketAdd(20); });
        MondayOFF.IAPManager.RegisterProduct("candyshopmaster_rv50", () => { EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase RV Ticket 50", true, true); SaveManager.instance.RVTicketAdd(50); });

        MondayOFF.IAPManager.RegisterProduct("candyshopmaster_royalcandy250", () => { EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Royal Candy 250", true, true); SaveManager.instance.AddRoyalCandy(250); });
        MondayOFF.IAPManager.RegisterProduct("candyshopmaster_royalcandy1000", () => { EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Royal Candy 1000", true, true); SaveManager.instance.AddRoyalCandy(1000); });
        MondayOFF.IAPManager.RegisterProduct("candyshopmaster_royalcandy5000", () => { EventManager.instance.CustomEvent(AnalyticsType.IAP, "Purchase Royal Candy 5000", true, true); SaveManager.instance.AddRoyalCandy(5000); });
    }

    public void PurchaseIap(string id)
    {
        MondayOFF.IAPManager.PurchaseProduct(id);
    }
}
