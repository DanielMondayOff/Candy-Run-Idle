using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RVTicketText : MonoBehaviour
{
    [SerializeField] private GameObject parent;

    [SerializeField] private bool alwaysView = false;


    private void OnEnable()
    {
        this.TaskWaitUntil(() =>
        {
            SaveManager.instance.rvTicketTextList.Add(GetComponent<UnityEngine.UI.Text>());

            if (!alwaysView)
                ChangeVisible(ES3.KeyExists("enableRVTickText") ? ES3.Load<bool>("enableRVTickText") : false);
        }, () => SaveManager.instance != null);


    }

    private void OnDestroy()
    {
        // SaveManager.instance.RemoveRVTicketText(GetComponent<UnityEngine.UI.Text>());
    }

    public void ChangeVisible(bool visible)
    {
        parent.SetActive(visible);
    }
}
