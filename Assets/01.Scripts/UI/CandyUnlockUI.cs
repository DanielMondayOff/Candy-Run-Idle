using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class CandyUnlockUI : MonoBehaviour
{
    [SerializeField] Image candyImage;
    [SerializeField] Image candyImage_black;

    [SerializeField] Text percentText;

    [SerializeField] CandyInventory candyinventory;
    [SerializeField] UIAttractorCustom[] uIAttractorCustoms;

    [SerializeField] UIDynamicPanel dynamicPanel;


    private CandyUnlockStatus currentStatus;

    public void ShowUI()
    {
        var current = SaveManager.instance.GetCandyUnlockStatuses().Where((n) => !n.unlocked).OrderBy((n) => n.id).ToArray()[0];
        var resource = Resources.LoadAll<CandyObject>("Candy").First((n) => n.id == current.id);

        candyImage.sprite = resource.icon;
        candyImage_black.sprite = resource.icon;

        percentText.text = current.percent + "%";

        ChangeFillRate(1f - (current.percent * 0.01f));

        currentStatus = current;

        dynamicPanel.Expand();
    }

    public void HideUI()
    {
        dynamicPanel.Collapse();
    }

    public void StartFillAnimation()
    {
        StartCoroutine(coroutin());

        IEnumerator coroutin()
        {
            var candyList = RunManager.instance.GetLastCandyInventory();
            for (int i = 0; i < candyList.candyItems.Count(); i++)
            {
                yield return new WaitForSeconds(0.05f);

                RunManager.instance.uIAttractorCustoms[i].Init(candyinventory.GetItemList().Find((n) => n.candyItem.candy.id == candyItems[i].candy.id).GetImageTrans, candyItems[i], GetCandyInventoryEvent(candyItems[i].candy.id), () => { SyncCurrentCandyUI(); misteryCandyItem.transform.SetAsLastSibling(); misteryCandyItem.gameObject.SetActive(true); });
            }
        }
    }

    public void ChangeFillRate(float percent)
    {
        candyImage_black.fillAmount = percent;
    }
}
