using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class FocusMask : MonoBehaviour
{
    public DOTweenAnimation tween;

    [SerializeField] GameObject black;

    public void StartFocus()
    {
        tween.DOPlay();
    }

    public void OnCompleteFocus()
    {
        // black.SetActive(false);
    }

    public void PushFonus()
    {
        transform.localScale = Vector3.one * 100;

        Managers.Pool.Push(GetComponent<Poolable>());
    }
}
