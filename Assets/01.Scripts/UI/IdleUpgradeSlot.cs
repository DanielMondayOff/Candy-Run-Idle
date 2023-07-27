using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IdleUpgradeSlot : MonoBehaviour
{
    [SerializeField] IdleUpgradeType upgradeType;

    [SerializeField] Image icon;
    [SerializeField] Text name;
    [SerializeField] Text desc;

    [SerializeField] Image btnImage;
    [SerializeField] Text cost;

    private void Start()
    {
        SaveManager.instance.onMoneyChangeEvent.AddListener(CheckingBtn);
        Init();
        CheckingBtn();
    }

    public void Init()
    {
        switch (upgradeType)
        {
            case IdleUpgradeType.HireWorker:
                cost.text = IdleManager.instance.hireWorker.cost[IdleManager.instance.hireWorker.currentLevel].ToString();
                break;

            case IdleUpgradeType.WorkerSpeedUp:
                cost.text = IdleManager.instance.workerSpeedUp.cost[IdleManager.instance.workerSpeedUp.currentLevel].ToString();
                break;

            case IdleUpgradeType.Promotion:
                cost.text = IdleManager.instance.promotion.cost[IdleManager.instance.promotion.currentLevel].ToString();
                break;

            default:
                Debug.LogError("정의가 없습니다. 추가해 주십시요");
                break;

        }
    }

    public void OnClickUpgradeBtn()
    {

        switch (upgradeType)
        {
            case IdleUpgradeType.HireWorker:
                IdleManager.instance.Upgrade_HireWorker();
                cost.text = IdleManager.instance.hireWorker.cost[IdleManager.instance.hireWorker.currentLevel].ToString();
                break;

            case IdleUpgradeType.WorkerSpeedUp:
                IdleManager.instance.Upgrade_WorkerSpeedUp();
                cost.text = IdleManager.instance.workerSpeedUp.cost[IdleManager.instance.workerSpeedUp.currentLevel].ToString();
                break;

            case IdleUpgradeType.Promotion:
                IdleManager.instance.Upgrade_Promotion();
                cost.text = IdleManager.instance.promotion.cost[IdleManager.instance.promotion.currentLevel].ToString();
                break;

            default:
                Debug.LogError("정의가 없습니다. 추가해 주십시요");
                break;

        }
    }

    void CheckingBtn()
    {
        if (SaveManager.instance.CheckPossibleUpgrade(IdleManager.instance.GetCurrentUpgradeCost(upgradeType)))
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
}
