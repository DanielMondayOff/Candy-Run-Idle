using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum PillerType
{
    Length = 1,
    FireRate = 2,
    Range = 3,
    Candy = 4,
    TripleShot = 5
}

public class Piller : MonoBehaviour
{
    public Text nameText;
    public Text valueText;
    [SerializeField] Image skillImage;

    public PillerType type;

    [SerializeField] private Material postiveMat;
    [SerializeField] private Material postivePillerCenterMat;

    [SerializeField] private Material negativeMat;
    [SerializeField] private Material negativePillerCenterMat;

    [SerializeField] private MeshRenderer plag;
    [SerializeField] private MeshRenderer pillerCenter;


    public float value;
    public bool multiply = false;

    private void Start()
    {
        Init();
    }

    public void Init()
    {
        switch (type)
        {
            case PillerType.Length:
                // value = RunManager.instance.defaultPillerLengthValue;
                nameText.text = "Length";
                break;

            case PillerType.FireRate:
                // value = RunManager.instance.defaultPillerFireRateValue;
                nameText.text = "FireRate";
                break;

            case PillerType.Range:
                // value = RunManager.defaultBulletRange;
                nameText.text = "Range";
                break;

            case PillerType.Candy:
                // value = RunManager.defaultCandyCount;
                nameText.text = "More Candy!";
                valueText.gameObject.SetActive(false);
                // nameText.enabled = false;
                skillImage.sprite = Resources.Load<Sprite>("UI/CandyPlus");
                skillImage.gameObject.SetActive(true);
                break;

            case PillerType.TripleShot:
                // value = RunManager.defaultCandyCount;
                nameText.text = "Triple Shot!";
                valueText.gameObject.SetActive(false);
                // nameText.enabled = false;
                skillImage.sprite = Resources.Load<Sprite>("UI/TripleShot");
                skillImage.gameObject.SetActive(true);
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
                    if (!multiply)
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
        if (value > 0)
        {
            var mat = new Material[] { postiveMat };
            plag.materials = mat;

            var mat2 = new Material[] { postivePillerCenterMat };
            pillerCenter.materials = mat2;

            if (multiply)
                valueText.text = "x" + value.ToString();
            else
                valueText.text = "+" + value.ToString();
        }
        else
        {
            var mat = new Material[] { negativeMat };
            plag.materials = mat;
            valueText.text = "" + value.ToString();

            var mat2 = new Material[] { negativePillerCenterMat };
            pillerCenter.materials = mat2;
        }
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
