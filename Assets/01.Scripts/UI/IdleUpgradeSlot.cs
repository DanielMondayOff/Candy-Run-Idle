using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IdleUpgradeSlot : MonoBehaviour
{
    [SerializeField] public IdleUpgradeType upgrade;

    [SerializeField] Image btnImage;
    [SerializeField] Text cost;
    [SerializeField] Text level;


    public bool isPossibleUpgrade => SaveManager.instance.CheckPossibleUpgrade(IdleManager.instance.GetCurrentUpgradeCost(upgrade));
    public int GetUpgradeCost => IdleManager.instance.GetCurrentUpgradeCost(upgrade);


    private void Start()
    {
        SaveManager.instance.onMoneyChangeEvent.AddListener(CheckingBtn);
        Init();
        CheckingBtn();
    }

    public void Init()
    {
        SetUpgradeCostText();
        SetLevelText();
    }

    public void OnClickUpgradeBtn_RV()
    {
        AdManager.instance.ShowRewarded(() =>
                            {
                                EventManager.instance.CustomEvent(AnalyticsType.RV, "Upgrade_" + upgrade, true, true);

                                IdleManager.instance.Upgrade(upgrade);

                                SetUpgradeCostText();
                                SetLevelText();
                                CheckingBtn();
                            }, "Upgrade_" + upgrade);
    }

    public void OnClickUpgradeBtn()
    {
        IdleManager.instance.TryUpgrade(upgrade);

        SetUpgradeCostText();
        SetLevelText();
        CheckingBtn();
    }

    void CheckingBtn()
    {
        if (SaveManager.instance.CheckPossibleUpgrade(IdleManager.instance.GetCurrentUpgradeCost(upgrade)))
        {
            btnImage.color = IdleManager.instance.activeBtnColor;
            cost.color = IdleManager.instance.activeCostColor;
            btnImage.GetComponent<Button>().enabled = true;
        }
        else
        {
            btnImage.color = IdleManager.instance.deactiveBtnColor;
            cost.color = IdleManager.instance.deactiveCostColor;
            btnImage.GetComponent<Button>().enabled = false;
        }
    }

    void SetUpgradeCostText()
    {
        var value = IdleManager.instance.GetUpgrade(upgrade);

        if (value.currentLevel >= value.maxLevel)
            gameObject.SetActive(false);
        else
            cost.text = IdleManager.instance.GetUpgradeCost(upgrade).ToString();
    }

    void SetLevelText()
    {
        level.text = "LV." + (IdleManager.instance.GetUpgrade(upgrade).currentLevel + 1);
    }
}
