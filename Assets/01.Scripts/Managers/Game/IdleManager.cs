using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class IdleManager : MonoBehaviour
{
    public IdleMap currentMap;

    [SerializeField] private IdleWorker[] workers;

    public Queue<CandyOrder> orderQueue = new Queue<CandyOrder>();

    public List<CandyJar> candyJars = new List<CandyJar>();

    public static IdleManager instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        StartIdleGame();
    }

    public void StartIdleGame()
    {
        GenerateCandyJar();

        this.TaskWhile(5, 2, () => GenenrateCustomer());
    }

    public OrderLine FindEmptyOrderLine_Customer()
    {
        foreach (var order in currentMap.orderLines)
        {
            if (order.currentCustomer == null)
                return order;
        }

        return null;
    }

    public OrderLine FindEmptyOrderLine_Worker()
    {
        foreach (var line in currentMap.orderLines)
        {
            if (line.currentCustomer != null)
                if (line.currentWorker == null)
                    if (line.currentCustomer.waitForCandy)
                        return line;
        }

        return null;
    }

    public void BookTheLine(IdleCustomer customer)
    {
        OrderLine orderLine = FindEmptyOrderLine_Customer();

        if (orderLine != null)
        {
            var newOrder = MakeOrder(customer, orderLine);
            orderLine.currentCustomer = customer;
            orderLine.currentCustomer.line = orderLine;

            customer.SetDestination(orderLine.customerLine.position, () =>
            {
                customer.order = newOrder;
                customer.WaitUntilCandy();
            });
        }
    }

    public CandyOrder MakeOrder(IdleCustomer customer, OrderLine line)
    {
        var candyItem = SaveManager.instance.candyInventory[Random.Range(0, SaveManager.instance.candyInventory.Count)].DuplicateCandy(1, 3);

        return new CandyOrder() { candy = candyItem.candy, requestCount = candyItem.count, currentCustomer = customer, currentLine = line };
    }

    public CandyOrder TakeOrder()
    {
        return orderQueue.Dequeue();
    }

    public void GenenrateCustomer()
    {
        var spawnPoint = currentMap.GetRandomSpawnPoint();
        var customer = Instantiate(Managers.Resource.Load<GameObject>("Customer")).GetComponentInChildren<IdleCustomer>();

        customer.transform.position = spawnPoint.position;

        customer.Init(spawnPoint);

        // var order = MakeOrder(customer.GetComponentInChildren<IdleCustomer>());

        // var emptyLine = FindEmptyOrderLine();

        // order.currentLine = emptyLine;

        BookTheLine(customer);
    }

    public void GenerateCandyJar()
    {
        for (int i = 0; i < SaveManager.instance.candyInventory.Count; i++)
        {
            var candyJar = Instantiate(Managers.Resource.Load<GameObject>("CandyJar"), currentMap.candyJarSpawnPos[i].position, Quaternion.identity);

            candyJar.GetComponentInChildren<CandyJar>().Init(SaveManager.instance.FindCandyItem(SaveManager.instance.candyInventory[i].candy.id));
            candyJars.Add(candyJar.GetComponentInChildren<CandyJar>());
        }
    }

    public void OnChangeInventory()
    {
        candyJars.ForEach((n) => n.OnChangeOrder());
    }

    public CandyObject FindCandyObject(int id)
    {
        return Resources.LoadAll<CandyObject>("Candy").Where((n) => n.id == id).FirstOrDefault();
    }

    public CandyJar FindCandyJar(int id)
    {
        foreach (var jar in candyJars)
        {
            if (jar.candyItem.candy.id == id)
                return jar;
        }

        print(1234);

        return null;
    }


    //모든 사탕 판매 완료
    public void SellComplete()
    {
        
    }
}

[System.Serializable]
public class OrderLine
{
    public Transform customerLine;
    public Transform workerLine;
    public IdleCustomer currentCustomer = null;
    public IdleWorker currentWorker = null;
}

[System.Serializable]
public class CandyOrder
{
    public CandyObject candy;
    public int requestCount;
    public int currentCount = 0;

    public IdleCustomer currentCustomer;

    public OrderLine currentLine;

    public void CompleteOrder()
    {
        currentCustomer = null;

        currentLine.currentCustomer = null;
    }
}

[System.Serializable]
public class CandyItem
{
    public CandyObject candy;
    public int count;

    public CandyItem DuplicateCandy(int minCount, int maxCount)
    {
        int count = Random.Range(minCount, maxCount);

        // this.count -= count;

        count = Mathf.Clamp(count, 0, int.MaxValue);

        return new CandyItem() { candy = this.candy, count = count };
    }

    public void TakeCandy(int count)
    {
        this.count -= count;
    }
}