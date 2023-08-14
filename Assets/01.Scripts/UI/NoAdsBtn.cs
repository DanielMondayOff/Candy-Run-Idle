using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoAdsBtn : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (MondayOFF.NoAds.IsNoAds)
        {

        }
        else
        {
            gameObject.SetActive(true);
            MondayOFF.IAPManager.OnAfterPurchase += (isSuccess) => { gameObject.SetActive(false); };
        }
    }

    public void OnClickNoAdsBtn()
    {
        MondayOFF.NoAds.Purchase();
    }
}
