using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoyalCandyText : MonoBehaviour
{
    private void OnEnable()
    {
        SaveManager.instance.royalCandyTextList.Add(GetComponent<UnityEngine.UI.Text>());
    }

    private void OnDisable()
    {
        SaveManager.instance.royalCandyTextList.Remove(GetComponent<UnityEngine.UI.Text>());

    }
}
