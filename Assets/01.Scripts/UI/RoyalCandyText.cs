using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoyalCandyText : MonoBehaviour
{
    [SerializeField] private GameObject parent;
    [SerializeField] private UnityEngine.UI.Text text;

    [SerializeField] private bool alwaysView = false;

    private void OnEnable()
    {
        this.TaskWaitUntil(() =>
        {
            SaveManager.instance.AddRoyalCandyText(text);
            
            if (!alwaysView)
                ChangeVisible(ES3.KeyExists("enableRoyalCandyText") ? ES3.Load<bool>("enableRoyalCandyText") : false);
        }, () => SaveManager.instance != null);


    }

    private void OnDestroy()
    {
        // SaveManager.instance.royalCandyTextList.Remove(GetComponent<UnityEngine.UI.Text>());
    }

    public void ChangeVisible(bool visible)
    {
        parent.SetActive(visible);
    }
}
