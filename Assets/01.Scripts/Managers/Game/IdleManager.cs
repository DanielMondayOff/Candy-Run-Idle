using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleManager : MonoBehaviour
{
    // public OrderLine[] orderLines;
    public IdleMap currentMap;

    public List<CandyItem> candyInventory = new List<CandyItem>();
    public Queue<CandyOrder> orderQueue = new Queue<CandyOrder>();


    public OrderLine FindEmptyOrderLine()
    {
        foreach (var order in currentMap.orderLines)
        {
            if (order.currentOrder == null)
                return order;
        }

        return null;
    }

    public void BookTheLine(IdleCustomer customer)
    {
        OrderLine orderLine = FindEmptyOrderLine();

        if (orderLine != null)
        {
            orderLine.currentOrder = MakeOrder(customer);
        }
    }

    public CandyOrder MakeOrder(IdleCustomer customer)
    {
        var candyItem = candyInventory[Random.Range(0, candyInventory.Count)].TakeCandy(0, 3);

        return new CandyOrder() { candy = candyItem.candy, count = candyItem.count };
    }


    public CandyOrder TakeOrder()
    {
        return orderQueue.Dequeue();
    }


    public void GenenrateCustomer()
    {
        var customer = Instantiate(Managers.Resource.Load<GameObject>("Customer"), currentMap.GetRandomSpawnPoint());

        var order = MakeOrder(customer.GetComponentInChildren<IdleCustomer>());

        var emptyLine = FindEmptyOrderLine();

        order.currentLine = emptyLine;
    }
}

[System.Serializable]
public class OrderLine
{
    public Transform customerLine;
    public Transform workerLine;
    public CandyOrder currentOrder = null;
}

[System.Serializable]
public class CandyOrder
{
    public CandyObject candy;
    public int count;

    public IdleCustomer currentCustomer;

    public OrderLine currentLine;
}

[System.Serializable]
public class CandyItem
{
    public CandyObject candy;
    public int count;

    public CandyItem TakeCandy(int minCount, int maxCount)
    {
        int count = Random.Range(minCount, maxCount);

        // this.count -= count;

        count = Mathf.Clamp(count, 0, int.MaxValue);

        return new CandyItem() { candy = this.candy, count = count };
    }
}