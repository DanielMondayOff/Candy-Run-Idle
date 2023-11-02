using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IAPPopUp : MonoBehaviour
{
    [SerializeField] string id;

    public void OnClickPurchaseBtn()
    {
        var status = MondayOFF.IAPManager.PurchaseProduct(id);

        if (status == MondayOFF.IAPStatus.Success)
        {

        }
    }

    public void OnClickExitBtn()
    {
        // Managers.Pool.Push(GetComponent<Poolable>());
        Destroy(gameObject);
    }
}
