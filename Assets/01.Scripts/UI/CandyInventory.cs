using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using System.Linq;

public class CandyInventory : MonoBehaviour
{
    [SerializeField] List<CandyInventoryItem> itemList = new List<CandyInventoryItem>();

    public bool autoUpdateUI = false;

    public static CandyInventory instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        if (autoUpdateUI)
            SaveManager.instance.onChangeCandyInventoryEvent.AddListener(SyncCurrentCandyUI);
    }

    private void OnDisable()
    {
        SaveManager.instance.onChangeCandyInventoryEvent.RemoveListener(SyncCurrentCandyUI);
    }

    public void SyncCurrentCandyUI()
    {
        ClearUI();

        foreach (var candy in SaveManager.instance.candyInventory)
        {
            var newItem = Instantiate(Resources.Load<GameObject>("UI/CandyItem"), transform).GetComponent<CandyInventoryItem>();

            newItem.InitCandy(SaveManager.instance.FindCandyObjectInReousrce(candy.id), candy.count);
            itemList.Add(newItem);
        }
    }

    public void GenerateUIfromList(List<CandyItem> items)
    {
        foreach (var item in items)
        {
            var newItem = Instantiate(Resources.Load<GameObject>("UI/CandyItem"), transform).GetComponent<CandyInventoryItem>();

            newItem.InitCandy(item.candy, item.count);
            itemList.Add(newItem);
        }
    }

    public void CandyGetAnimation(List<CandyItem> candyItems)
    {
        foreach (var item in candyItems)
        {
            var attractor = Instantiate(Resources.Load<GameObject>("UI/UIAttractor"), transform.parent);

            GetCandyInventoryEvent(item.candy.id);

            attractor.GetComponent<UIAttractorCustom>().Init(itemList.Find((n) => n.candyItem.candy.id == item.candy.id).GetImageTrans, item, GetCandyInventoryEvent(item.candy.id), () => SyncCurrentCandyUI());
        }
    }

    public void ClearUI()
    {
        itemList.ForEach((n) => Destroy(n.gameObject));

        itemList.Clear();
    }

    UnityAction GetCandyInventoryEvent(int id)
    {
        foreach (var item in itemList)
        {
            if (item.candyItem.candy.id == id)
            {
                return () => item.AddCandyOne();
            }
        }

        var newItem = Instantiate(Resources.Load<GameObject>("UI/CandyItem"), transform).GetComponentInChildren<CandyInventoryItem>();

        newItem.InitCandy(SaveManager.instance.FindCandyObject(id), 0);
        itemList.Add(newItem);

        return () => newItem.AddCandyOne();
    }
}
