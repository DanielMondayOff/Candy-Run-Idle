using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleManager : MonoBehaviour
{
    public IdleMap currentMap;

    [SerializeField] private IdleWorker[] workers;

    public List<CandyItem> candyInventory = new List<CandyItem>();
    public Queue<CandyOrder> orderQueue = new Queue<CandyOrder>();

    private void Start()
    {
        StartIdleGame();
    }

    public void StartIdleGame()
    {
        this.TaskWhile(5, 0, () => GenenrateCustomer());
    }

    public OrderLine FindEmptyOrderLine()
    {
        foreach (var order in currentMap.orderLines)
        {
            if (order.currentCustomer == null)
                return order;
        }

        return null;
    }

    public void BookTheLine(IdleCustomer customer)
    {
        OrderLine orderLine = FindEmptyOrderLine();


        if (orderLine != null)
        {
            print(orderLine);
            var newOrder = MakeOrder(customer);
            orderLine.currentCustomer = customer;

            customer.order = newOrder;

            customer.SetDestination(orderLine.customerLine.position, () => customer.WaitUntilCandy());
        }
    }

    public CandyOrder MakeOrder(IdleCustomer customer)
    {
        var candyItem = candyInventory[Random.Range(0, candyInventory.Count)].TakeCandy(0, 3);

        return new CandyOrder() { candy = candyItem.candy, requestCount = candyItem.count };
    }

    public CandyOrder TakeOrder()
    {
        return orderQueue.Dequeue();
    }

    public void GenenrateCustomer()
    {
        var spawnPoint = currentMap.GetRandomSpawnPoint();
        var customer = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Customer")).GetComponentInChildren<IdleCustomer>();

        customer.transform.position = spawnPoint.position;

        customer.Init(spawnPoint);

        // var order = MakeOrder(customer.GetComponentInChildren<IdleCustomer>());

        // var emptyLine = FindEmptyOrderLine();

        // order.currentLine = emptyLine;

        BookTheLine(customer);
    }
}

[System.Serializable]
public class OrderLine
{
    public Transform customerLine;
    public Transform workerLine;
    public IdleCustomer currentCustomer = null;
}

[System.Serializable]
public class CandyOrder
{
    public CandyObject candy;
    public int requestCount;
    public int currentCount = 0;

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