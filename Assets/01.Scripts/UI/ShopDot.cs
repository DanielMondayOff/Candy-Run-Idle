using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopDot : MonoBehaviour
{
    private void OnEnable()
    {
        SaveManager.instance.shopDotsList.Add(this);
    }

    private void OnDisable()
    {
        SaveManager.instance.shopDotsList.Remove(this);
    }

    public void ChangeVisible(bool visible)
    {
        GetComponent<UnityEngine.UI.Image>().enabled = (visible);
    }
}
