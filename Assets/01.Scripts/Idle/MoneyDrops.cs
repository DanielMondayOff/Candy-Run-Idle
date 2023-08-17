using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;


public class MoneyDrops : MonoBehaviour
{
    [SerializeField] MoneyNode[] moneyNodes;

    Stack<MoneyNode> readyMoneyStack = new Stack<MoneyNode>();

    [SerializeField] int money = 0;

    Coroutine takeMoneyCoroutine = null;

    private void Start()
    {
        var nodeCount = (money / 5) + 1;

        for (int i = 0; i < nodeCount; i++)
        {
            moneyNodes[i].MoneyReady();
            readyMoneyStack.Push(moneyNodes[i]);
        }
    }


    public void AddMoney(int value)
    {
        money += value;

        if (money > 0 && money <= 5)
        {
            moneyNodes[0].MoneyReady();
            readyMoneyStack.Push(moneyNodes[0]);
        }
        else if (money >= 5)
        {
            for (int i = 0; i < money / 5; i++)
            {
                moneyNodes[i].MoneyReady();
                readyMoneyStack.Push(moneyNodes[i]);
            }
        }
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("Player"))
        {
            if (takeMoneyCoroutine == null)
                takeMoneyCoroutine = StartCoroutine(TakeMoneyCoroutine(other));
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("Player"))
        {
            if (takeMoneyCoroutine != null)
            {
                StopCoroutine(takeMoneyCoroutine);
                takeMoneyCoroutine = null;
            }
        }
    }

    IEnumerator TakeMoneyCoroutine(Collider other)
    {
        if (takeMoneyCoroutine != null)
            StopCoroutine(takeMoneyCoroutine);

        while (true)
        {
            yield return new WaitForSeconds(0.05f);

            if (money > 0)
            {
                var node = readyMoneyStack.Pop();

                node.FlyToPlayer(other.transform);

                if (money < 5)
                {
                    SaveManager.instance.GetMoney(money);
                    money = 0;

                    other.GetComponent<PlayerMoneyText>().ChangeFloatingText(money);
                }
                else
                {
                    SaveManager.instance.GetMoney(5);
                    money -= 5;

                    other.GetComponent<PlayerMoneyText>().ChangeFloatingText(5);
                }
            }

        }
    }

    [Button]
    public void AddMoneyFive()
    {
        AddMoney(5);
    }

}
