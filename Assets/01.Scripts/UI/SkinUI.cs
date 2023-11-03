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
        {
            GenerateSkinSlot();

            if (ES3.KeyExists("cutterSkin"))
            {
                SkinRenderManager.instance.ChangeSkinRender(SkinType.Cutter, ES3.Load<int>("cutterSkin"));
                ChangeSkinName(SaveManager.instance.FindSkinObject(SkinType.Cutter, ES3.Load<int>("cutterSkin")).skinName);
                // IdleManager.instance.skinUI.ChangeStat(SaveManager.instance.FindSkinObject(SkinType.Cutter, ES3.Load<int>("cutterSkin")).GetStatText());

                ChangeStat(SaveManager.instance.FindSkinObject(SkinType.Cutter, ES3.Load<int>("cutterSkin")).GetStatText());

                EnableUsedIcon(SkinType.Cutter, "cutterSkin");
            }

            if (ES3.KeyExists("idlePlayerSkin"))
            {
                ChangeSkinName(SaveManager.instance.FindSkinObject(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin")).skinName);
                // IdleManager.instance.skinUI.ChangeStat(SaveManager.instance.FindSkinObject(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin")).GetStatText());

                EnableUsedIcon(SkinType.IdlePlayer, "idlePlayerSkin");
            }
        }

        UpdateSlotUI();

    }

    public void EnableUsedIcon(SkinType type, string es3Key)
    {
        if (ES3.KeyExists(es3Key))
        {
            foreach (var skin in GetComponentsInChildren<SkinActiveUI>())
            {
                if (skin.type == type && skin.id == ES3.Load<int>(es3Key))
                    skin.EnableUsedIcon();
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
                SkinRenderManager.instance.ChangeSkinRender(SkinType.Cutter, ES3.Load<int>("cutterSkin"));
                ChangeStat(SaveManager.instance.FindSkinObject(SkinType.Cutter, ES3.Load<int>("cutterSkin")).GetStatText());
                EnableUsedIcon(SkinType.Cutter, "cutterSkin");

                // tap[num].SetActive(true);
                break;

            case 1:
                tap[num].transform.SetAsLastSibling();
                idlePlayerSkinButton.sprite = activeBtnSprite;
                cutterSkinButton.sprite = inactiveBtnSprite;
                SkinRenderManager.instance.ChangeSkinRender(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin"));
                ChangeStat(SaveManager.instance.FindSkinObject(SkinType.IdlePlayer, ES3.Load<int>("idlePlayerSkin")).GetStatText());
                EnableUsedIcon(SkinType.IdlePlayer, "idlePlayerSkin");

                // tap[num].SetActive(true);
                break;
        }
    }

    public void SelectSkin(SkinType type, int id)
    {
        if (GetComponentsInChildren<SkinActiveUI>().Length <= 0)
            return;

        GetComponentsInChildren<SkinActiveUI>().Where((n) => n.type == type && n.id == id).First().OnClick();
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

    public void UpdateSlotUI()
    {
        foreach (var slot in GetComponentsInChildren<SkinActiveUI>())
            slot.UpdateUI();
    }
}
