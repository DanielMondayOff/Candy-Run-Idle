using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class SkinUI : MonoBehaviour
{
    [SerializeField] GameObject[] tap;

    [SerializeField] Transform cutterSkinParent;
    [SerializeField] Transform idlePlayerSkinParent;


    public void Show()
    {
        foreach (var skin in Resources.LoadAll<CnadyCutterSkinObject>("Skin/Cutter"))
        {
            Instantiate(Resources.Load<GameObject>("SkinSlot"), cutterSkinParent).GetComponent<SkinActiveUI>().Init(skin);
        }

        foreach (var skin in Resources.LoadAll<CnadyCutterSkinObject>("Skin/IdlePlayer"))
        {
            Instantiate(Resources.Load<GameObject>("SkinSlot"), idlePlayerSkinParent).GetComponent<SkinActiveUI>().Init(skin);
        }
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
