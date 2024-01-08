using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Console : MonoBehaviour
{
    [SerializeField] GameObject console;
    [SerializeField] UnityEngine.UI.Slider x;
    [SerializeField] UnityEngine.UI.Text xText;
    [SerializeField] UnityEngine.UI.Slider y;
    [SerializeField] UnityEngine.UI.Text yText;
    [SerializeField] UnityEngine.UI.Slider z;
    [SerializeField] UnityEngine.UI.Text zText;

    [SerializeField] UnityEngine.UI.Slider size;
    [SerializeField] UnityEngine.UI.Text text_size;

#if UNITY_STANDALONE || UNITY_EDITOR
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.BackQuote))
        {
            console.SetActive(!console.activeSelf);
        }
    }
#endif

    public void ChangeCandyRotate()
    {
        foreach (var candy in StageManager.instance.currentStage.map.GetComponentsInChildren<CandyMatChanger>())
        {
            candy.RotateCandy(new Vector3(x.value, y.value, z.value));
        }
    }

    public void OnChangeSlider_X()
    {
        xText.text = x.value.ToString();
    }

    public void OnChangeSlider_Y()
    {
        yText.text = y.value.ToString();
    }

    public void OnChangeSlider_Z()
    {
        zText.text = z.value.ToString();
    }

    public void ChangeSizeSlider()
    {
        text_size.text = string.Format("{0:F1}", size.value);
    }

    public void ChangeCandySize()
    {
        foreach (var candy in StageManager.instance.currentStage.map.GetComponentsInChildren<CandyMatChanger>())
        {
            candy.CandySize(new Vector3(size.value, size.value, size.value * 1.58f));
        }
    }
}
