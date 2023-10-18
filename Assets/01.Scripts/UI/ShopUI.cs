using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class ShopUI : MonoBehaviour
{

    [SerializeField] GameObject[] tap;

    public void Show()
    {
        gameObject.SetActive(true);
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }

    public void OnClickTap(int num)
    {
        tap.ToList().ForEach((n) => n.SetActive(false));

        switch (num)
        {
            case 0:
                    tap[num].SetActive(true);
                break;

            case 1:
                    tap[num].SetActive(true);
                break;
        }
    }
}

public enum TapType
{
    Cutter = 0,
    Idle = 0
}
