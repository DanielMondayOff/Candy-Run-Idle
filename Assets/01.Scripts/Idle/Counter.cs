using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Counter : MonoBehaviour
{
    [SerializeField] Transform[] lineDots;
    [SerializeField] List<IdleCustomer> customerList = new List<IdleCustomer>();

    [SerializeField] MoneyDrops moneyTower;
    [SerializeField] GameObject casher;

    private void Start()
    {
        this.TaskWhile(0.1f, 0, Check);
    }

    public void EnqueueCustomer(IdleCustomer newCustomer)
    {
        customerList.Add(newCustomer);


    }

    public void Check()
    {
        if (customerList.Count > 0)
        {
            if (Vector3.Distance(customerList[0].transform.position, lineDots[0].transform.position) < 0.25f)
            {
                //계산하기



                customerList.RemoveAt(0);

            }
        }
    }
}
