using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SaveManager : MonoBehaviour
{
    [SerializeField] Text moneyText;

    public List<CandyItem> candyInventory = new List<CandyItem>();
    [SerializeField] int money;

    public static SaveManager instance;

    private void Awake()
    {
        instance = this;
    }


    private void Start()
    {
        if (ES3.KeyExists("Money"))
            money = ES3.Load<int>("Money");
        else
            money = 0;

        OnChangeMoney();

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
        moneyText.text = money.ToString();
    }

    public void AddCandy(List<CandyItem> newCandys)
    {
        print(newCandys.Count);

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
