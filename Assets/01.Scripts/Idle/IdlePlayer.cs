using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class IdlePlayer : MonoBehaviour
{
    [SerializeField] Transform[] itemStackPoints;

    public List<GameObject> itemStackList = new List<GameObject>();

    public int maxCount = 4;

    public Transform GetPlayerEmptyPoint()
    {
        if (itemStackList.Count < itemStackPoints.Length)
        {
            return itemStackPoints[itemStackList.Count];
        }
        else return null;
    }

    public void AddItemStack(GameObject item)
    {
        itemStackList.Add(item);
    }

    public void PopoutItem(int id, Transform parent, DisplayStand stand)
    {
        for (int i = 0; i < itemStackList.Count; i++)
        {
            if (itemStackList[i].GetComponent<ItemObject>().GetItem.id == id)
            {
                itemStackList[i].GetComponent<ItemObject>().Jump(parent);

                stand.AddItemObject(itemStackList[i]);

                itemStackList.Remove(itemStackList[i]);

                UpdateItemPos();
                return;
            }
        }
    }

    public void UpdateItemPos()
    {
        for (int i = 0; i < itemStackList.Count; i++)
        {
            itemStackList[i].GetComponent<ItemObject>().Move(itemStackPoints[i]);
        }
    }
}
