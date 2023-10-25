using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopUIButton : MonoBehaviour
{
    public void OnClickShopBtn()
    {
        IdleManager.instance.shopUI.Show();
    }
}
