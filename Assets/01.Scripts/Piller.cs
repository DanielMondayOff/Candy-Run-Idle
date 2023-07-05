using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum PillerType
{
    Length = 1,
    FireRate = 2,
    Range = 3,
    Candy = 4

}

public class Piller : MonoBehaviour
{
    public Text nameText;

    public Text valueText;

    public PillerType type;

    public float value;

    private void Start()
    {
        Init();
    }

    public void Init()
    {
        switch (type)
        {
            case PillerType.Length:
                value = RunManager.defaultCandyLength;
                nameText.text = "Length";
                break;

            case PillerType.FireRate:
                value = RunManager.DefaultBulletFireRate;
                nameText.text = "FireRate";

                break;

            case PillerType.Range:
                value = RunManager.defaultBulletRange;
                nameText.text = "Range";

                break;

            case PillerType.Candy:
                value = RunManager.defaultCandyCount;
                nameText.text = "Candy";

                break;
        }

        OnChangeValue();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Bullet"))
        {
            switch (type)
            {
                case PillerType.Length:
                    value += RunManager.instance.plusCandyLength;
                    break;

                case PillerType.FireRate:
                    value += RunManager.instance.plusFireRate;
                    break;

                case PillerType.Range:
                    value += RunManager.instance.plusBulletRange;
                    break;

                    // case PillerType.Candy:
                    //     value += RunManager.defaultCandyCount;
                    //     break;
            }

            OnChangeValue();
        }

        if (other.CompareTag("Player"))
        {
            RunManager.instance.PillerPass(type, value);
        }
    }

    private void OnChangeValue()
    {
        valueText.text = "+" + value.ToString();
    }
}
