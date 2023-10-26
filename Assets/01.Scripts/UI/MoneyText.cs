using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyText : MonoBehaviour
{
    private void OnEnable()
    {
        this.TaskWaitUntil(() => SaveManager.instance.AddMoneyText(GetComponent<UnityEngine.UI.Text>()), () => SaveManager.instance != null);
    }

    private void OnDisable()
    {
        SaveManager.instance.RemoveMoneyText(GetComponent<UnityEngine.UI.Text>());
    }
}
