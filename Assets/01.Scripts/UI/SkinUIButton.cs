using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinUIButton : MonoBehaviour
{
    public void OnClickSkinBtn()
    {
        IdleManager.instance.skinUI.Show();
    }
}
