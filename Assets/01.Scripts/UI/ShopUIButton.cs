using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopUIButton : UIBase
{

    public override void Show()
    {
        gameObject.SetActive(true);
    }

    public override void Hide()
    {
        gameObject.SetActive(false);
    }

    private void Awake()
    {
        if (!SceneChanger.shopBtnAlwaysShown)
        {

        }
        else if (ES3.KeyExists("enableIAPShop") ? ES3.Load<bool>("enableIAPShop") : false)
        {

        }
        else
        {
            gameObject.SetActive(false);
        }
    }

    public void OnClickShopBtn()
    {
        IdleManager.instance.shopUI.Show();
    }
}
