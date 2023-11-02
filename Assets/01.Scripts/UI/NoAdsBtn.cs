using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoAdsBtn : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] GameObject btn;
    void Start()
    {
        MondayOFF.AdsManager.OnAfterInterstitial += Event;

        if (!MondayOFF.NoAds.IsNoAds && ES3.KeyExists("IS_Showend") ? ES3.Load<bool>("IS_Showend") : false)
            btn.SetActive(true);
        else
            btn.SetActive(false);

        MondayOFF.IAPManager.OnAfterPurchase += (isSuccess) => OnPurcahseNoAds();
    }

    void Event()
    {
        if (!MondayOFF.NoAds.IsNoAds) btn.SetActive(true);
    }

    void OnPurcahseNoAds()
    {
        if (btn != null)
            btn.SetActive(false);
    }


    public void OnClickNoAdsBtn()
    {
        IdleManager.instance.ShowIAPPopUp("UI/IAP_PopUp_NoAds", IdleManager.instance.playIdle ? IdleManager.instance.idleUI.transform : RunManager.instance.runGameUI.transform);
        // MondayOFF.NoAds.Purchase();
    }

    private void OnDestroy()
    {
        MondayOFF.AdsManager.OnAfterInterstitial -= Event;
        MondayOFF.IAPManager.OnAfterPurchase -= (isSuccess) => OnPurcahseNoAds();
    }
}
