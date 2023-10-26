using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinUIButton : UIBase
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
        if (ES3.KeyExists("enableSkin") ? ES3.Load<bool>("enableSkin") : false)
        {

        }
        else
            Hide();
    }

    public void OnClickSkinBtn()
    {
        IdleManager.instance.skinUI.Show();
    }
}
