using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class IdlePlayer : MonoBehaviour
{
    [SerializeField] Transform[] itemStackPoints;

    public List<GameObject> itemStackList = new List<GameObject>();

    [SerializeField] GameObject playerArrow;
    [SerializeField] GameObject itemUICanvas;
    [SerializeField] Transform itemUISlotParent;

    [SerializeField] Transform startCollector;


    private Transform arrowTarget;
    private List<ItemUISlot> itemSlots = new List<ItemUISlot>();

    public int maxCount = 4;

    public GameObject maxText;

    private void Start()
    {
        if (ES3.KeyExists("StartNav"))
        {

        }
        else
        {
            ActiveNaviArrow(startCollector);
            ES3.Save<bool>("StartNav", true);
        }
    }

    public Transform GetPlayerEmptyPoint()
    {
        if (itemStackList.Count < itemStackPoints.Length)
        {
            return itemStackPoints[itemStackList.Count];
        }
        else return null;
    }

    private void Update()
    {
        if (arrowTarget != null)
        {
            // Vector3 rotation = Quaternion.LookRotation(arrowTarget.transform.position).eulerAngles;
            // rotation.x = 0f;

            // playerArrow.transform.rotation = Quaternion.Euler(rotation);

            playerArrow.transform.LookAt(arrowTarget.transform.position + (Vector3.up * 5));
            // playerArrow.transform.rotation = offset;

            if (Vector3.Distance(transform.position, arrowTarget.transform.position) < 8f)
            {
                playerArrow.transform.DOScale(Vector3.zero, 0.5f);
                arrowTarget = null;
            }
        }
    }

    public void AddItemStack(GameObject item)
    {
        itemStackList.Add(item);

        // UpdateItemUI();

        if (itemStackList.Count >= maxCount)
            maxText.SetActive(true);
        else
            maxText.SetActive(false);
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

                // UpdateItemUI();
                return;
            }
        }
    }

    public void PopoutAnyItem(Transform parent)
    {
        for (int i = 0; i < itemStackList.Count; i++)
        {
            itemStackList[i].GetComponent<ItemObject>().Jump(parent, jumpPower: 1f, onComplete: () => { Managers.Pool.Push(itemStackList[i].GetComponentInChildren<Poolable>()); Debug.LogError(1234); });
            itemStackList.Remove(itemStackList[i]);

            UpdateItemPos();
        }
    }

    public void UpdateItemPos()
    {
        for (int i = 0; i < itemStackList.Count; i++)
        {
            itemStackList[i].GetComponent<ItemObject>().Move(itemStackPoints[i]);
        }

        if (itemStackList.Count >= maxCount)
            maxText.SetActive(true);
        else
            maxText.SetActive(false);

    }

    public void ActiveNaviArrow(Transform target)
    {
        arrowTarget = target;

        playerArrow.transform.DOScale(Vector3.one, 0.5f);
    }

    public void UpdateItemUI()
    {
        itemSlots.ForEach((n) => n.Clear());
        itemSlots.Clear();

        foreach (var item in itemStackList)
        {
            bool pass = false;
            itemSlots.ForEach((n) =>
            {
                if (item.GetComponentInChildren<ItemObject>().GetItem.id == n.item.id)
                {
                    n.AddItem(item.GetComponentInChildren<ItemObject>().GetItem.count);
                    return;
                }
            });

            if (!pass)
            {
                var newSlot = Managers.Pool.Pop(Resources.Load<GameObject>("UI/ItemSlot"), itemUISlotParent).GetComponentInChildren<ItemUISlot>();
                newSlot.Init(item.GetComponentInChildren<ItemObject>().GetItem);
                itemSlots.Add(newSlot);
            }
        }

        if (itemSlots.Count > 0)
            itemUICanvas.gameObject.SetActive(true);
        else
            itemUICanvas.gameObject.SetActive(false);
    }
}
