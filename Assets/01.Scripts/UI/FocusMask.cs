using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class FocusMask : MonoBehaviour
{
    public DOTweenAnimation tween;

    [SerializeField] GameObject black;

    public void OnStart()
    {
        transform.localScale = Vector3.one * 10;
    }

    public void StartFocus()
    {
        transform.localScale = Vector3.one * 10;

        GetComponent<Animator>().SetTrigger("focus");
        // tween.DOPlay();
    }

    public void OnCompleteFocus()
    {
        // black.SetActive(false);
    }

    public void PushFonus()
    {
        Managers.Pool.Push(GetComponent<Poolable>());
    }
}
