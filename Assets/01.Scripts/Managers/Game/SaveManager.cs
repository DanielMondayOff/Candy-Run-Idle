using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SaveManager : MonoBehaviour
{
    [SerializeField] Text moneyText;

    [SerializeField] int money;

    public static SaveManager instance;

    private void Awake()
    {
        instance = this;
    }

    /// <summary>
    /// Start is called on the frame when a script is enabled just before
    /// any of the Update methods is called the first time.
    /// </summary>
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
}
