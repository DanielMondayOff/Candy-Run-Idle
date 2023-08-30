using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Counter : MonoBehaviour
{
    [SerializeField] Transform[] customerQueueLine;
    [SerializeField] List<IdleCustomer> customerList = new List<IdleCustomer>();

    [SerializeField] MoneyDrops moneyTower;
    [SerializeField] GameObject casher;
    [SerializeField] GameObject selfCounter;
    [SerializeField] Collider selfCounterCollider;


    [SerializeField] bool counterReady = false;

    private TaskUtil.DelayTaskMethod counterDelay = null;

    private void Start()
    {
        this.TaskWhile(0.5f, 0, Check);

        if (ES3.KeyExists("hireCasher"))
            HireCasher();
    }

    public void EnqueueCustomer(IdleCustomer newCustomer)
    {
        customerList.Add(newCustomer);
        UpdateLine();
    }

    public void Check()
    {
        if (!counterReady || counterDelay != null)
            return;

        if (customerList.Count > 0)
        {
            if (Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position) < 1f)
            {
                //계산하기

                customerList[0].SetTimer(2.5f);

                counterDelay = this.TaskDelay(2.5f, () =>
                {
                    CandyItem candyItem = customerList[0].candyInventory;

                    // print((int)(candyItem.CalculateTotalCost() * IdleManager.instance.extraIncomePercent[IdleManager.instance.extraIncome.currentLevel]));

                    moneyTower.AddMoney((int)(customerList[0].CalculateTotalCost() * IdleManager.instance.extraIncomePercent[IdleManager.instance.extraIncome.currentLevel]));

                    customerList[0].Exit();

                    customerList[0].GenerateEmoji("Particles/Happy");
                    customerList.RemoveAt(0);
                    UpdateLine();

                    counterDelay = null;
                });


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

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("Player"))
        {
            counterReady = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("Player"))
        {
            counterReady = false;
        }
    }

    public void HireCasher()
    {
        casher.SetActive(true);
        selfCounter.SetActive(false);

        counterReady = true;

        selfCounterCollider.enabled = false;

        ES3.Save<bool>("hireCasher", true);

        IdleManager.instance.PopParticle("Particles/FX_ShardRock_Dust_End_01", casher.transform.position + Vector3.up * 3);
    }
}
