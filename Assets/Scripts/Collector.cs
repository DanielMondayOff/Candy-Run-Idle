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

    public Text text;

    public CollectorStack[] collectorStacks;


    public bool ignoreMultifly = false;

    public UnityEvent onComplete = null;

    private void Start()
    {
        if(!ignoreMultifly)
        {
        foreach (var stack in collectorStacks)
        {

        }
        }

        text.text = collectorStacks[0].currentStack + " / " + collectorStacks[0].requestCount;
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
        while (true)
        {
            yield return new WaitForSeconds(0.1f);



            text.text = collectorStacks[0].currentStack + " / " + collectorStacks[0].requestCount;

            if (CompareStackArrays(collectorStacks))
            {
                yield return new WaitForSeconds(0.5f);
                OnCompleteCollect();
            }
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

    public static bool CompareStackArrays(CollectorStack[] stacks)
    {
        foreach (var stack in stacks)
        {
            if (stack.currentStack < stack.requestCount)
                return false;
        }

        return true;
        // foreach (var requestElement in request)
        // {
        //     bool isIdFound = current.Any(currentElement => currentElement.id == requestElement.id);

        //     if (!isIdFound)
        //     {
        //         return false;
        //     }

        //     bool isMatchingCountFound = current.Any(currentElement =>
        //         currentElement.id == requestElement.id && currentElement.count >= requestElement.count);

        //     if (!isMatchingCountFound)
        //     {
        //         return false;
        //     }
        // }

        // return true;
    }
}

[System.Serializable]
public class ItemStack
{
    public int id;
    public int count;

    public void AddItemStack(int id, int count = 1)
    {
        if (this.id == id)
            this.count = count;
    }

    public bool CheckStackMatch(ItemStack itemStack)
    {
        if (this.id == itemStack.id)
            if (this.count >= itemStack.count)
                return true;

        return false;
    }
}

[System.Serializable]
public class CollectorStack
{
    public int id;
    public int currentStack;
    public int requestCount;
}



