using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class SkinActiveUI : MonoBehaviour
{
    public int id;
    public SkinType type;

    [SerializeField] Image icon;
    [SerializeField] Button clameBtn;
    [SerializeField] Button moneyBtn;
    [SerializeField] Button RVBtn;
    [SerializeField] GameObject usedIcon;
    [SerializeField] GameObject lockIcon;



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

        var has = SaveManager.instance.CheckSkinHave(type, id);

        if (has)
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

            IdleManager.instance.skinUI.ResetUsed();
            usedIcon.SetActive(true);

            Boink();
        }
    }

    public void OnClickRoyalCandyButton()
    {
        SaveManager.instance.PurchaseSkin(type, id, SaveManager.instance.FindSkinObject(type, id).requireRoyalCandy);

        UpdateUI();
    }


    public void OnClickRVBtn()
    {
        AdManager.instance.ShowRewarded(() =>
                    {
                        SaveManager.instance.WatchedRVOnceForSkin(type, id);
                        EventManager.instance.CustomEvent(AnalyticsType.RV, "Skin_ " + type + " _ " + id, true, true);
                        UpdateUI();
                    }, "Skin_ " + type + " _ " + id);
    }

    public void UpdateUI()
    {
        var save = SaveManager.instance.GetSkinSaveData(type, id);

        var obj = SaveManager.instance.FindSkinObject(type, id);

        clameBtn.gameObject.SetActive(obj.onlyPurcahse);

        if (save != null)
        {
            if (save.complete)
            {
                moneyBtn.gameObject.SetActive(false);
                RVBtn.gameObject.SetActive(false);
                clameBtn.gameObject.SetActive(false);
            }
            else
            {
                if (obj.requireRoyalCandy > 0)
                    moneyBtn.GetComponentInChildren<Text>().text = obj.requireRoyalCandy.ToString();
                else
                    moneyBtn.gameObject.SetActive(false);

                if (SaveManager.instance.GetRoyalCandy >= obj.requireRoyalCandy)
                    moneyBtn.GetComponentInChildren<Text>().color = Color.white;
                else
                    moneyBtn.GetComponentInChildren<Text>().color = Color.red;


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

            if (SaveManager.instance.GetRoyalCandy >= obj.requireRoyalCandy)
                moneyBtn.GetComponentInChildren<Text>().color = Color.white;
            else
                moneyBtn.GetComponentInChildren<Text>().color = Color.red;

            if (obj.requireRV > 0)
                RVBtn.GetComponentInChildren<UnityEngine.UI.Text>().text = 0 + " / " + obj.requireRV;
            else
                RVBtn.gameObject.SetActive(false);
        }

        lockIcon.SetActive(!SaveManager.instance.CheckSkinHave(type, id));
    }

    public void EnableUsedIcon()
    {
        usedIcon.SetActive(true);
    }

    public void DisableUsedIcon()
    {
        usedIcon.SetActive(false);
    }

    public void OnClickClameBtn()
    {
        IdleManager.instance.shopUI.Show();
    }

    public void Boink()
    {
        transform.DOScale(1.2f, 0.2f).SetEase(Ease.OutBack)
            .OnComplete(() => transform.DOScale(1f, 0.2f));
    }
}

public enum SkinType
{
    Cutter = 0,
    IdlePlayer = 1
}
