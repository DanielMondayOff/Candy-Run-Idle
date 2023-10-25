using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class SkinUI : MonoBehaviour
{
    [SerializeField] GameObject[] tap;

    [SerializeField] Transform cutterSkinParent;
    [SerializeField] Image cutterSkinButton;

    [SerializeField] Transform idlePlayerSkinParent;
    [SerializeField] Image idlePlayerSkinButton;

    [SerializeField] Text skinName;
    [SerializeField] Text stat;

    public Sprite activeBtnSprite;
    public Sprite inactiveBtnSprite;




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

            ChangeStat(SaveManager.instance.FindSkinObject(SkinType.Cutter, ES3.Load<int>("cutterSkin")).GetStatText());

            if (ES3.KeyExists("cutterSkin"))
            {
                foreach (var skin in GetComponentsInChildren<SkinActiveUI>())
                {
                    if (skin.type == SkinType.Cutter && skin.id == ES3.Load<int>("cutterSkin"))
                        skin.EnableUsedIcon();
                }
            }
        }

        if (ES3.KeyExists("idlePlayerSkin"))
        {
            IdleManager.instance.skinUI.ChangeSkinName(SaveManager.instance.FindSkinObject(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin")).skinName);
            IdleManager.instance.skinUI.ChangeStat(SaveManager.instance.FindSkinObject(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin")).GetStatText());

            if (ES3.KeyExists("idlePlayerSkin"))
            {
                foreach (var skin in GetComponentsInChildren<SkinActiveUI>())
                {
                    if (skin.type == SkinType.IdlePlayer && skin.id == ES3.Load<int>("idlePlayerSkin"))
                        skin.EnableUsedIcon();
                }
            }
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
        // tap.ToList().ForEach((n) => n.SetActive(false));

        switch (num)
        {
            case 0:
                tap[num].transform.SetAsLastSibling();
                cutterSkinButton.sprite = activeBtnSprite;
                idlePlayerSkinButton.sprite = inactiveBtnSprite;
                // tap[num].SetActive(true);
                break;

            case 1:
                tap[num].transform.SetAsLastSibling();
                idlePlayerSkinButton.sprite = activeBtnSprite;
                cutterSkinButton.sprite = inactiveBtnSprite;
                // tap[num].SetActive(true);
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

    public void ResetUsed()
    {
        foreach (var skin in GetComponentsInChildren<SkinActiveUI>())
        {
            skin.DisableUsedIcon();
        }
    }
}
