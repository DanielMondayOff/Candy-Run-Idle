using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyJar : MonoBehaviour
{
    public CandyItem candyItem;

    [SerializeField] private MeshRenderer[] candyMeshes;

    public void Init(int id, int count)
    {
        candyItem = new CandyItem() { candy = IdleManager.instance.FindCandyObject(id), count = count };

        Material[] newMat = new Material[] { candyItem.candy.mat };

        foreach (var mr in candyMeshes)
        {
            mr.materials = newMat;
        }
    }
}
