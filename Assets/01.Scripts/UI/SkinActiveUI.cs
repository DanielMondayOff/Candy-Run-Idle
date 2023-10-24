using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkinActiveUI : MonoBehaviour
{
    public int id;
    public SkinType type;

    [SerializeField] Image icon;
    [SerializeField] Button moneyBtn;
    [SerializeField] Button RVBtn;

    public void Init(SkinObject obj, SkinType type)
    {
        id = obj.id;
        icon.sprite = obj.icon;

        this.type = type;

        UpdateUI();
    }

    public void OnClick()
    {
        SkinRenderManager.instance.ChangeSkinRender(type, id);
        IdleManager.instance.skinUI.ChangeSkinName(SaveManager.instance.FindSkinObject(type, id).skinName);
        IdleManager.instance.skinUI.ChangeStat(SaveManager.instance.FindSkinObject(type, id).GetStatText());

        if (SaveManager.instance.CheckSkinHave(type, id))
        {
            switch (type)
            {
                case SkinType.Cutter:
                    RunManager.instance.ChangeCutterSkin(id);
                    break;

                case SkinType.IdlePlayer:
                    IdleManager.instance.ChangeIdleSkin(id);
                    break;
            }
        }
    }

    public void OnClickRoyalCandyButton()
    {
        SaveManager.instance.PurchaseSkin(type, id, SaveManager.instance.FindSkinObject(type, id).requireRoyalCandy);

        UpdateUI();
    }



    public void OnClickRVBtn()
    {
        MondayOFF.AdsManager.ShowRewarded(() =>
        {
            SaveManager.instance.WatchedRVOnceForSkin(type, id);

            UpdateUI();
        });
    }

    public void UpdateUI()
    {
        var save = SaveManager.instance.GetSkinSaveData(type, id);

        var obj = SaveManager.instance.FindSkinObject(type, id);

        if (save != null)
        {
            if (save.complete)
            {
                moneyBtn.gameObject.SetActive(false);
                RVBtn.gameObject.SetActive(false);
            }
            else
            {
                if (obj.requireRoyalCandy > 0)
                    moneyBtn.GetComponentInChildren<Text>().text = obj.requireRoyalCandy.ToString();
                else
                    moneyBtn.gameObject.SetActive(false);

                if (obj.requireRV > 0)
                    RVBtn.GetComponentInChildren<Text>().text = ((save != null) ? save.watchedRV : 0) + " / " + obj.requireRV;
                else
                    RVBtn.gameObject.SetActive(false);
            }
        }
        else
        {
            if (obj.requireRoyalCandy > 0)
                moneyBtn.GetComponentInChildren<Text>().text = obj.requireRoyalCandy.ToString();
            else
                moneyBtn.gameObject.SetActive(false);

            if (obj.requireRV > 0)
                RVBtn.GetComponentInChildren<UnityEngine.UI.Text>().text = 0 + " / " + obj.requireRV;
            else
                RVBtn.gameObject.SetActive(false);
        }
    }
}

public enum SkinType
{
    Cutter = 0,
    IdlePlayer = 1
}
