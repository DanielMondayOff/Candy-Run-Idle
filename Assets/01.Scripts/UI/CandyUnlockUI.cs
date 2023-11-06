using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using DG.Tweening;

public class CandyUnlockUI : MonoBehaviour
{
    [SerializeField] Image candyImage;
    [SerializeField] Image candyImage_black;
    [SerializeField] Transform collectTarget;
    [SerializeField] Transform clameBtn;
    [SerializeField] Transform noThanksBtn;
    [SerializeField] GameObject noThanksBtn_ForceIdle;

    [SerializeField] Text percentText;

    [SerializeField] CandyInventory candyinventory;
    [SerializeField] UIAttractorCustom[] uIAttractorCustoms;

    [SerializeField] UIDynamicPanel dynamicPanel;

    // public CandyUnlockStatus tempStatus;


    public CandyUnlockStatus currentStatus;

    public static CandyUnlockUI instance;

    private void Awake()
    {
        instance = this;
    }

    public void ShowUI()
    {
        // var current = SaveManager.instance.GetCandyUnlockStatuses().Where((n) => !n.unlocked).OrderBy((n) => n.id).ToArray()[0];
        var resource = Resources.LoadAll<CandyObject>("Candy").First((n) => n.id == currentStatus.id);

        candyImage.sprite = resource.icon;
        candyImage_black.sprite = resource.icon;

        // Debug.LogError(currentStatus.GetCurrentPercent());
        percentText.text = Mathf.FloorToInt(currentStatus.GetCurrentPercent()) + "%";
        candyImage_black.fillAmount = (Mathf.Clamp(1f - (currentStatus.GetCurrentPercent() * 0.01f), 0f, 1f));

        // ChangeFillRate(1f - (currentStatus.GetCurrentPercent() * 0.01f));

        // currentStatus = current;
        // dynamicPanel.Expand();

        var candyList = RunManager.instance.GetLastCandyInventory();

        float point = 34;

        currentStatus.AddPercent(point);

        this.TaskDelay(0.5f, () => StartFillAnimation(Mathf.Clamp(1f - (currentStatus.GetCurrentPercent() * 0.01f), 0f, 1f)));
        // StartFillAnimation();

        RunManager.instance.showNewCandyUnlockTask = this.TaskDelay(4f, () =>
        {
            if (currentStatus.unlocked)
            {
                ShowNewCandyUnlockUI(resource);
                // RunManager.instance.unlockedImage.sprite = resource.icon;
                // RunManager.instance.NewCandyUnlockedUI.SetActive(true);

                // if (StageManager.instance.currentStageNum == RunManager.ForceIdleStage && RunManager.forceIdle)
                // {
                //     RunManager.instance.NewCandyUnlockedUI_SellCandyBtn.SetActive(true);
                // }
            }
            else if (StageManager.instance.currentStageNum == RunManager.ForceIdleStage && RunManager.forceIdle)
            {
                noThanksBtn_ForceIdle.SetActive(true);
                // RunManager.instance.sellCandyBtn.SetActive(true);
            }
            else
            {
                // clameBtn.gameObject.SetActive(true);

                if (StageManager.instance.currentStageNum == RunManager.ForceIdleStage && RunManager.forceIdle)
                {
                    noThanksBtn_ForceIdle.SetActive(true);
                }
                else
                    noThanksBtn.gameObject.SetActive(true);
            }
        });
    }

    public void ShowNewCandyUnlockUI(CandyObject resource)
    {
        RunManager.instance.unlockedImage.sprite = resource.icon;
        RunManager.instance.NewCandyUnlockedUI.SetActive(true);

        if (StageManager.instance.currentStageNum == RunManager.ForceIdleStage && RunManager.forceIdle)
        {
            RunManager.instance.NewCandyUnlockedUI_SellCandyBtn.SetActive(true);
        }
    }

    public void HideUI()
    {
        // dynamicPanel.Collapse();
    }

    public void StartFillAnimation(float EndPoint)
    {
        // StartCoroutine(coroutin());

        // float point = 0;

        // var candyList = RunManager.instance.GetLastCandyInventory();

        // for (int i = 0; i < candyList.candyItems.Count(); i++)
        // {
        //     point += Resources.LoadAll<CandyObject>("Candy").Where((n) => n.id == candyList.candyItems[i].candy.id).First().unlockPoint * candyList.candyItems[i].count;
        // }

        // Debug.LogError(point);

        // currentStatus.AddPercent(point);

        if (currentStatus.unlocked)
            RunManager.instance.showNewCandyUnlock = true;
        // Debug.LogError(currentStatus.GetCurrentPercent());

        candyImage_black.DOFillAmount(EndPoint, 1.5f).OnUpdate(() => percentText.text = (int)((1f - candyImage_black.fillAmount) * 100) + "%").SetEase(Ease.OutQuad);

        // candyImage_black.DOFillAmount(Mathf.Clamp(1 - (currentStatus.GetCurrentPercent() * 0.01f), 0f, 1f), 1.5f).OnUpdate(() => percentText.text = (int)((1f - candyImage_black.fillAmount) * 100) + "%").SetEase(Ease.OutQuad);

        // IEnumerator coroutin()
        // {
        //     var candyList = RunManager.instance.GetLastCandyInventory();

        //     for (int i = 0; i < candyList.candyItems.Count(); i++)
        //     {
        //         yield return new WaitForSeconds(0.2f);
        //         float point = Resources.LoadAll<CandyObject>("Candy").Where((n) => n.id == candyList.candyItems[i].candy.id).First().unlockPoint;
        // uIAttractorCustoms[i].Init(candyList.candyItems[i], onAttract: () => { FillOnLive(point); });
        //     }
        // }
    }

    public void FillOnLive(float point)
    {
        currentStatus.AddPercent(point);

        // Debug.LogError(Resources.LoadAll<CandyObject>("Candy").Where((n) => n.id == id).First().unlockPoint);

        ChangeFillRate(1 - (currentStatus.GetCurrentPercent() * 0.01f));
        percentText.text = Mathf.FloorToInt(currentStatus.GetCurrentPercent()) + "%";
    }

    public void OnCompleteFill()
    {

    }

    public void ChangeFillRate(float percent)
    {
        candyImage_black.fillAmount = percent;
    }

    public void RV_UnlockCandy()
    {
        AdManager.instance.ShowRewarded(() =>
                    {
                        var _currentStatus = SaveManager.instance.GetCandyUnlockStatuses().Where((n) => !n.unlocked).OrderBy((n) => n.id).First();

                        _currentStatus.unlocked = true;

                        var resource = Resources.LoadAll<CandyObject>("Candy").First((n) => n.id == _currentStatus.id);

                        RunManager.instance.unlockedImage.sprite = resource.icon;
                        RunManager.instance.NewCandyUnlockedUI.SetActive(true);

                        EventManager.instance.CustomEvent(AnalyticsType.RV, "UnlockCandy_" + _currentStatus.id, true, true);
                    }, "UnlockCandy_");
    }
}
