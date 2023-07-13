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
                value = RunManager.instance.defaultPillerLengthValue;
                nameText.text = "Length";
                break;

            case PillerType.FireRate:
                value = RunManager.instance.defaultPillerFireRateValue;
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
                    value += RunManager.instance.addCandyLengthValue;
                    break;

                case PillerType.FireRate:
                    value += RunManager.instance.addFireRateValue;
                    break;

                case PillerType.Range:
                    value += RunManager.instance.addBulletRangeValue;
                    break;

                    // case PillerType.Candy:
                    //     value += RunManager.defaultCandyCount;
                    //     break;
            }

            OnChangeValue();
            // Destroy(other.gameObject);

            other.GetComponentInChildren<Bullet>().Push();
        }

        if (other.CompareTag("Player"))
        {
            RunManager.instance.PillerPass(type, value);
            gameObject.SetActive(false);
        }
    }

    private void OnChangeValue()
    {
        valueText.text = "+" + value.ToString();
    }

    /// <summary>
    /// Called when the script is loaded or a value is changed in the
    /// inspector (Called in the editor only).
    /// </summary>
    private void OnValidate()
    {
        OnChangeValue();
    }
}
