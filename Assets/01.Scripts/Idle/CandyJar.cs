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
    [SerializeField] Text test_candyCount;

    public void Init(int id, int count)
    {
        candyItem = new CandyItem() { candy = IdleManager.instance.FindCandyObject(id), count = count };

        Material[] newMat = new Material[] { candyItem.candy.mat };

        foreach (var mr in candyMeshes)
        {
            mr.materials = newMat;
        }
    }

    void OnChangeOrder(bool wiggle = false)
    {
        test_candyName.text = candyItem.candy.name;
        test_candyCount.text = "X " + (candyItem.count);

        if (wiggle)
            CandyCanvas.transform.DOPunchScale(CandyCanvas.transform.localScale * 0.3f, 0.2f, 2);
    }
}
