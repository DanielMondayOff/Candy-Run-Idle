using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class SaveManager : MonoBehaviour
{
    public List<CandyItem> candyInventory = new List<CandyItem>();
    [SerializeField] int money;

    private List<Text> moneyTextList = new List<Text>();

    public static SaveManager instance = null;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        if (ES3.KeyExists("Money"))
            money = ES3.Load<int>("Money");
        else
            money = 0;

        OnChangeMoney();


        if (ES3.KeyExists("CandyInventory"))
            candyInventory = ES3.Load<List<CandyItem>>("CandyInventory");
    }

    public int GetMoney() => money;

    public void GetMoney(int value)
    {
        money += value;

        ES3.Save<int>("Money", money);

        OnChangeMoney();
    }

    public void OnChangeMoney()
    {
        moneyTextList.ForEach((n) => n.text = money.ToString());

    }

    public void AddCandy(List<CandyItem> newCandys)
    {
        foreach (var newCandy in newCandys)
        {
            bool isNewCandy = true;
            foreach (var candy in candyInventory)
            {
                if (newCandy.candy.id == candy.candy.id)
                {
                    isNewCandy = false;

                    candy.count += newCandy.count;

                    break;
                }
            }

            if (isNewCandy)
                candyInventory.Add(new CandyItem() { candy = newCandy.candy, count = newCandy.count });
        }

        ES3.Save<List<CandyItem>>("CandyInventory", candyInventory);
    }

    public void TakeCandy(int id, int count)
    {
        for (int i = 0; i < candyInventory.Count; i++)
        {
            if (candyInventory[i].candy.id == id)
            {
                candyInventory[i].TakeCandy(count);

                if (candyInventory[i].count <= 0)
                    candyInventory.RemoveAt(i);

                return;
            }
        }

        foreach (var candy in candyInventory)
        {
            if (candy.candy.id == id)
            {
                candy.TakeCandy(count);
            }
        }
    }

    public CandyItem FindCandyItem(int id)
    {
        return candyInventory.Find((n => n.candy.id == id));
    }

    public CandyObject FindCandyObject(int id)
    {
        return Resources.LoadAll<CandyObject>("Candy").Where((n) => n.id == id).FirstOrDefault();
    }

    public void AddMoneyText(Text text)
    {
        moneyTextList.Add(text);
    }

    public void RemoveMoneyText(Text text)
    {
        moneyTextList.Remove(text);
    }
}

[System.Serializable]
public class TempCandyInventory
{
    public List<CandyItem> candyItems = new List<CandyItem>();

    public void AddCandy(CandyItem item)
    {
        foreach (var candy in candyItems)
        {
            if (candy.candy.id == item.candy.id)
            {
                candy.count += item.count;

                return;
            }
        }
        candyItems.Add(new CandyItem() { candy = item.candy, count = item.count });
    }
}
