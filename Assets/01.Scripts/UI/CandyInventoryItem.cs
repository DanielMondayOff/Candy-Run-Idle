using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CandyInventoryItem : MonoBehaviour
{
    [SerializeField] Image image;
    public Transform GetImageTrans => image.transform;
    [SerializeField] Text amountText;

    public CandyItem candyItem;

    public void InitCandy(CandyObject candy, int count)
    {
        image.sprite = SaveManager.instance.FindCandyObject(candy.id).icon;

        candyItem.candy = candy;
        candyItem.count = count;

        amountText.text = count.ToString();
    }

    public void AddCandyOne()
    {
        candyItem.count++;

        amountText.text = candyItem.count.ToString();
    }

}
