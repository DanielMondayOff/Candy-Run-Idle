using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class CandyJar : MonoBehaviour
{
    public CandyItem candyItem;

    [SerializeField] private MeshRenderer[] candyMeshes;

    [SerializeField] Canvas CandyCanvas;
    [SerializeField] Text test_candyName;
    [SerializeField] Image candyImage;
    [SerializeField] Text test_candyCount;

    public void Init(CandyItem item)
    {
        candyItem = item;

        Material[] newMat = new Material[] { candyItem.candy.mat };

        foreach (var mr in candyMeshes)
        {
            mr.materials = newMat;
        }

        candyImage.sprite = candyItem.candy.icon;
        test_candyCount.text = "X " + (candyItem.count);
    }

    public void ChangeJarModel(int id)
    {
        var candy = SaveManager.instance.FindCandyObject(id);

        Material[] newMat = new Material[] { candy.mat };

        foreach (var mr in candyMeshes)
        {
            mr.materials = newMat;
        }
    }

    public void OnChangeOrder(bool wiggle = false)
    {
        // test_candyName.text = candyItem.candy.name;
        candyImage.sprite = candyItem.candy.icon;
        test_candyCount.text = "X " + (candyItem.count);

        if (wiggle)
            CandyCanvas.transform.DOPunchScale(CandyCanvas.transform.localScale * 0.3f, 0.2f, 2);
    }

    public void BubbleWiggle()
    {
        CandyCanvas.transform.DOPunchScale(CandyCanvas.transform.localScale * 0.3f, 0.2f, 2);
    }
}
