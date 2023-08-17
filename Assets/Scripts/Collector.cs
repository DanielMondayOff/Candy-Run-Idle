using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.Events;

public class Collector : MonoBehaviour
{
    public bool isComplete = false;

    Coroutine collectCoroutine = null;

    Tween groundTween = null;

    public GameObject groundObject;
    public Vector3 groundDefaultScale;

    public Text requireMoneyText;

    public bool ignoreMultifly = false;

    public UnityEvent onComplete = null;

    public int requireMoney;
    public int currentMoney;

    private void Start()
    {
        requireMoneyText.text = (requireMoney - currentMoney).ToString();
    }

    public void Init()
    {
        transform.localScale = Vector3.zero;
        transform.DOScale(Vector3.one, 0.5f);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (collectCoroutine != null)
                StopCoroutine(collectCoroutine);
            collectCoroutine = StartCoroutine(CollectCoroutine());

            if (groundTween != null)
                groundTween.Kill();
            groundTween = groundObject.transform.DOScale(groundDefaultScale * 1.2f, 0.5f).SetEase(Ease.InOutBack);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (collectCoroutine != null)
                StopCoroutine(collectCoroutine);

            if (groundTween != null)
                groundTween.Kill();
            groundTween = groundObject.transform.DOScale(groundDefaultScale, 0.5f).SetEase(Ease.InOutBack);
        }
    }

    IEnumerator CollectCoroutine()
    {
        int valueForTick = (requireMoney - currentMoney) / 10;

        while (true)
        {
            yield return new WaitForSeconds(0.1f);



            requireMoneyText.text = (requireMoney - currentMoney).ToString();

            // if (CompareStackArrays(collectorStacks))
            // {
            //     yield return new WaitForSeconds(0.5f);
            //     OnCompleteCollect();
            // }
        }
    }

    public void OnCompleteCollect()
    {
        if (isComplete)
            return;

        isComplete = true;

        if (groundTween != null)
            groundTween.Kill();
        groundTween = gameObject.transform.DOScale(Vector3.zero, 0.7f).SetEase(Ease.InOutBack);

        onComplete.Invoke();

    }
}



