using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class CardSlot : MonoBehaviour
{

    [SerializeField] RunCardType cardType;

    [SerializeField] GameObject costParent;
    [SerializeField] GameObject rvParent;

    [SerializeField] Image image;
    [SerializeField] Text costText;

    private bool rv = false;
    private int cost;
    private static System.Random random = new System.Random();
    public static bool GetHalfAndHalfResult() => random.Next(2) == 0;

    private void Start()
    {
        OnChangeMoney();
        SaveManager.instance.onMoneyChangeEvent.AddListener(OnChangeMoney);
    }

    public void Init(RunCardType type)
    {
        cardType = type;

        switch (type)
        {
            case RunCardType.PlusCandy:
                image.sprite = Resources.Load<Sprite>("UI/btn_U_1Candy");

                break;

            case RunCardType.TripleShot:
                image.sprite = Resources.Load<Sprite>("UI/btn_U_TripleShot");

                break;
        }

        if (type == RunCardType.TripleShot)
        {
            //나중에 rv로 수정
            rv = false;
        }
        else if (type == RunCardType.PlusCandy)
        {
            rv = false;
        }

        cost = UnityEngine.Random.Range(10, 50) * 10;
        costText.text = cost.ToString();

        if (rv)
            rvParent.SetActive(true);
        else
            costParent.SetActive(true);

        gameObject.SetActive(true);
    }


    public void OnClickUpgradeBtn()
    {
        if (rv)
        {
            // rv

            MondayOFF.AdsManager.ShowRewarded(Upgrade);
        }
        else
        {
            if (!SaveManager.instance.CheckPossibleUpgrade(cost))
                return;
            else
            {
                SaveManager.instance.LossMoney(cost);

                Upgrade();
            }
        }

        void Upgrade()
        {
            switch (cardType)
            {
                case RunCardType.PlusCandy:
                    RunManager.instance.AddCandy();

                    MondayOFF.EventTracker.LogCustomEvent(
        "Run",
        new Dictionary<string, string> { { "Upgrade", "AddCandy" } }
        );

                    break;

                case RunCardType.TripleShot:
                    RunManager.instance.TripleShot();

                    MondayOFF.EventTracker.LogCustomEvent(
        "Run",
        new Dictionary<string, string> { { "Upgrade", "TripleShot" } }
        );

                    break;
            }

            gameObject.SetActive(false);
        }
    }


    public RunCardType GetRandomEnumValue()
    {
        Array enumValues = Enum.GetValues(typeof(RunCardType));
        return (RunCardType)enumValues.GetValue(random.Next(enumValues.Length));
    }

    void OnChangeMoney()
    {
        if (cost <= SaveManager.instance.GetMoney())
        {
            costText.color = Color.white;
        }
        else
        {
            costText.color = Color.red;
        }
    }

}

