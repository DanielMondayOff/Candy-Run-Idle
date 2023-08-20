using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CandyMachine : BuildObject
{
    public candySaveData candyItem;

    [SerializeField] Canvas CandyCanvas;
    [SerializeField] Text test_candyName;
    [SerializeField] Image candyImage;
    [SerializeField] Text test_candyCount;

    public Transform[] customerQueueLine;

    public List<IdleCustomer> customerList = new List<IdleCustomer>();

    public bool isReady = false;

    public float Debug_distToCustomer;


    public void Init()
    {
        candyItem = SaveManager.instance.FindCandyItem(candyItem.id);

        this.TaskWhile(1, 0, CheckDistBetweenCustomer);
    }

    public void EnqueueCustomer(IdleCustomer newCustomer)
    {
        customerList.Add(newCustomer);

        UpdateLine();
    }

    public void CheckDistBetweenCustomer()
    {
        if (!isReady)
            return;

        if (customerList.Count > 0)
        {
            Debug_distToCustomer = Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position);

            if (Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position) < 1f)
            {
                GiveCandyToCustomer(customerList[0]);

                UpdateLine();
            }
        }
        else
            Debug_distToCustomer = 0;
    }

    public void GiveCandyToCustomer(IdleCustomer customer)
    {
        IdleManager.instance.counter.EnqueueCustomer(customer);

        customerList.Remove(customer);
    }

    public void UpdateLine()
    {
        for (int i = 0; i < customerList.Count; i++)
        {
            customerList[i].SetDestination(customerQueueLine[i].transform.position);
        }
    }

    public override void Build(bool direct = false)
    {
        base.Build(direct);

        isReady = true;

        Init();
    }
}
