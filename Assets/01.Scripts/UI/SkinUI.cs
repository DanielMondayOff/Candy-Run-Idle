using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class SkinUI : MonoBehaviour
{
    [SerializeField] GameObject[] tap;

    [SerializeField] Transform cutterSkinParent;
    [SerializeField] Transform idlePlayerSkinParent;

    [SerializeField] Text skinName;
    [SerializeField] Text stat;



    private bool generated = false;

    public void Show()
    {
        gameObject.SetActive(true);

        if (!generated)
            GenerateSkinSlot();

        if (ES3.KeyExists("cutterSkin"))
        {
            SkinRenderManager.instance.ChangeSkinRender(SkinType.Cutter, ES3.Load<int>("cutterSkin"));
            IdleManager.instance.skinUI.ChangeSkinName(SaveManager.instance.FindSkinObject(SkinType.Cutter, ES3.Load<int>("cutterSkin")).skinName);
            IdleManager.instance.skinUI.ChangeStat(SaveManager.instance.FindSkinObject(SkinType.Cutter, ES3.Load<int>("cutterSkin")).GetStatText());
        }

        if (ES3.KeyExists("idlePlayerSkin"))
        {
            IdleManager.instance.skinUI.ChangeSkinName(SaveManager.instance.FindSkinObject(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin")).skinName);
            IdleManager.instance.skinUI.ChangeStat(SaveManager.instance.FindSkinObject(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin")).GetStatText());
        }
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

    public void ChangeSkinName(string name)
    {
        skinName.text = name;
    }

    public void ChangeStat(string stat)
    {
        this.stat.text = stat;
    }
}
