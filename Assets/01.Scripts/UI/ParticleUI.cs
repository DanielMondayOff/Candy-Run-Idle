using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleUI : MonoBehaviour
{
    [SerializeField] GameObject ExpandBtn;
    [SerializeField] UnityEngine.UI.Button inventoryBtn;
    [SerializeField] UIDynamicPanel dynamicPanel;
    public UIDynamicPanel GetDynamic => dynamicPanel;

    public void OnClickInventoryBtn(bool immediate = false)
    {
        inventoryBtn.enabled = false;
        dynamicPanel.Collapse(immediate, onComplete: () => ExpandBtn.SetActive(true));
    }

    public void OnClickExpandBtn(bool immediate = false)
    {
        ExpandBtn.SetActive(false);
        dynamicPanel.Expand(immediate: immediate, onComplete: () => inventoryBtn.enabled = true);
    }

}
