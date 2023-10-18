using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutterSkin : MonoBehaviour
{
    [SerializeField] Animator animator;

    public void ShowSkin()
    {
        gameObject.SetActive(true);
    }

    public void HideSkin()
    {
        gameObject.SetActive(false);
    }

    public void CutAnimation()
    {
        animator.SetTrigger("Cut");
    }
}
