using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class SkinUI : MonoBehaviour
{
    [SerializeField] GameObject[] tap;

    [SerializeField] Transform cutterSkinParent;
    [SerializeField] Transform idlePlayerSkinParent;

    private bool generated = false;

    public void Show()
    {
        gameObject.SetActive(true);

        if (!generated)
            GenerateSkinSlot();
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }

    public void GenerateSkinSlot()
    {
        foreach (var skin in Resources.LoadAll<CnadyCutterSkinObject>("Skin/Cutter"))
        {
            Instantiate(Resources.Load<GameObject>("UI/SkinSlot"), cutterSkinParent).GetComponent<SkinActiveUI>().Init(skin, SkinType.Cutter);
        }

        cutterSkinParent.GetComponentInChildren<SwipeUI>().InitPages();

        foreach (var skin in Resources.LoadAll<IdlePlayerSkin>("Skin/IdlePlayer"))
        {
            Instantiate(Resources.Load<GameObject>("UI/SkinSlot"), idlePlayerSkinParent).GetComponent<SkinActiveUI>().Init(skin, SkinType.IdlePlayer);
        }

        idlePlayerSkinParent.GetComponentInChildren<SwipeUI>().InitPages();

        generated = true;
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
