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

    public void Init(RunCardType type)
    {
        switch (type)
        {
            case RunCardType.PlusCandy:
                image.sprite = Resources.Load<Sprite>("UI/btn_U_1Candy");

                break;

            case RunCardType.TripleShot:
                image.sprite = Resources.Load<Sprite>("UI/btn_U_TripleShot");

                break;
        }

        if (type == RunCardType.PlusCandy || type == RunCardType.TripleShot)
        {
            rv = GetHalfAndHalfResult();

            cost = UnityEngine.Random.Range(10, 50) * 10;
            costText.text = cost.ToString();

            if (rv)
                rvParent.SetActive(true);
            else
                costParent.SetActive(true);
        }

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

                    break;

                case RunCardType.TripleShot:
                    RunManager.instance.TripleShot();

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

}


