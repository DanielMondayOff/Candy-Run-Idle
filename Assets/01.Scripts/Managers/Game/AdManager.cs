using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdManager : MonoBehaviour
{
    public static AdManager instance;

    private void Awake()
    {
        instance = this;
    }

    public void ShowRewarded(System.Action reward, string info = "")
    {
        if (SaveManager.instance.RVTicket > 0)
        {
            SaveManager.instance.RVTicketUse();

            EventManager.instance.CustomEvent(AnalyticsType.IAP, "Use RV Ticket_" + info, true, true);

            reward.Invoke();
        }
        else
        {
            MondayOFF.AdsManager.ShowRewarded(reward);
        }
    }
}
