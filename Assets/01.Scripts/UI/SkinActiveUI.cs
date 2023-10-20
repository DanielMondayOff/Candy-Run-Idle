using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinActiveUI : MonoBehaviour
{
    public int id;
    public SkinType type;

    [SerializeField] UnityEngine.UI.Image icon;
    [SerializeField] UnityEngine.UI.Button moneyBtn;
    [SerializeField] UnityEngine.UI.Button RVBtn;


    public void Init(CnadyCutterSkinObject obj)
    {
        id = obj.id;
        icon.sprite = obj.icon;

        var save = SaveManager.instance.GetSkinSaveData(type, id);

        if (save != null)
        {
            if (save.complete)
            {
                moneyBtn.gameObject.SetActive(false);
                RVBtn.gameObject.SetActive(false);
            }
            else
            {
                if (obj.requireMoney > 0)
                    moneyBtn.GetComponentInChildren<UnityEngine.UI.Text>().text = obj.requireMoney.ToString();
                else
                    moneyBtn.gameObject.SetActive(false);

                if (obj.requireRV > 0)
                    RVBtn.GetComponentInChildren<UnityEngine.UI.Text>().text = ((save != null) ? save.watchedRV : 0) + " / " + obj.requireMoney;
                else
                    RVBtn.gameObject.SetActive(false);
            }
        }
        else
        {
            if (obj.requireMoney > 0)
                moneyBtn.GetComponentInChildren<UnityEngine.UI.Text>().text = obj.requireMoney.ToString();
            else
                moneyBtn.gameObject.SetActive(false);

            if (obj.requireRV > 0)
                RVBtn.GetComponentInChildren<UnityEngine.UI.Text>().text = 0 + " / " + obj.requireRV;
            else
                RVBtn.gameObject.SetActive(false);
        }
    }

    public void OnClick()
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

    public void OnClickMoneyBtn()
    {

    }

    public void OnClickRVBtn()
    {
        
    }
}

public enum SkinType
{
    Cutter = 0,
    IdlePlayer = 1
}
