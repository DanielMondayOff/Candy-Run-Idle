using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoAdsBtn : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] GameObject btn;
    void Start()
    {
        if (MondayOFF.NoAds.IsNoAds)
        {

        }
        else
        {
            btn.SetActive(true);


            MondayOFF.IAPManager.OnAfterPurchase += (isSuccess) =>
            {
                gameObject.SetActive(false);

                EventManager.instance.CustomEvent(AnalyticsType.IAP, "NoAdsPurchase", true, true);
                //     MondayOFF.EventTracker.LogCustomEvent(
                // "IAP",
                // new Dictionary<string, string> { { "IAP_TYPE", "noads" }, { "StageNum", StageManager.instance.currentStageNum.ToString() } }
                // );
            };
        }
    }

    public void OnClickNoAdsBtn()
    {
        MondayOFF.NoAds.Purchase();
    }
}
