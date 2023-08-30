using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;

public class ItemObject : MonoBehaviour
{
    [SerializeField] Item item;
    public Item GetItem => item;

    public void Init(Item item)
    {
        this.item = item;
    }

    public void Jump(Transform parent)
    {
        transform.DOLocalJump(Vector3.zero, 3, 1, 0.3f).OnStart(() => gameObject.transform.SetParent(parent));
    }

    public void Move(Transform parent)
    {
        transform.DOLocalMove(Vector3.zero, 0.1f).OnStart(() => gameObject.transform.SetParent(parent));
    }
}
