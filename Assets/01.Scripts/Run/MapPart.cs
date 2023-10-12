using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapPart : MonoBehaviour
{
    public void ChangeCandyModel(int num)
    {
        // int num = Random.Range(0, 6);
        foreach (var candy in GetComponentsInChildren<DropedJellyBean>())
        {
            candy.ChangeCandy(num);
        }

        foreach (var candy in GetComponentsInChildren<DropedJellyBean>())
        {
            candy.ChanceToRoyalCandy();
        }
    }

    public void ChanceToRoyalCandy()
    {
        foreach (var candy in GetComponentsInChildren<DropedJellyBean>())
        {
            candy.ChanceToRoyalCandy();
        }
    }
}
