using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Counter : MonoBehaviour
{
    [SerializeField] Transform[] customerQueueLine;
    [SerializeField] List<IdleCustomer> customerList = new List<IdleCustomer>();

    [SerializeField] MoneyDrops moneyTower;
    [SerializeField] GameObject casher;

    private void Start()
    {
        this.TaskWhile(1, 0, Check);
    }

    public void EnqueueCustomer(IdleCustomer newCustomer)
    {
        customerList.Add(newCustomer);
        UpdateLine();
    }

    public void Check()
    {
        if (customerList.Count > 0)
        {
            if (Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position) < 1f)
            {
                //계산하기


                customerList[0].Exit();
                customerList.RemoveAt(0);
                UpdateLine();
            }
        }
    }

    public void UpdateLine()
    {
        for (int i = 0; i < customerList.Count; i++)
        {
            customerList[i].SetDestination(customerQueueLine[i].transform.position);
        }
    }
}
