using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoyalCandyText : MonoBehaviour
{
    [SerializeField] private GameObject parent;

    [SerializeField] private bool alwaysView = false;

    private void OnEnable()
    {
        this.TaskWaitUntil(() => SaveManager.instance.AddRoyalCandyText(GetComponent<UnityEngine.UI.Text>()), () => SaveManager.instance != null);

        if (!alwaysView)
            ChangeVisible(ES3.KeyExists("enableRoyalCandyText") ? ES3.Load<bool>("enableRoyalCandyText") : false);
    }

    private void OnDestroy() {
        SaveManager.instance.royalCandyTextList.Remove(GetComponent<UnityEngine.UI.Text>());
    }

    public void ChangeVisible(bool visible)
    {
        parent.SetActive(visible);
    }
}
