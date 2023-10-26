using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class fieldRVProbs : MonoBehaviour
{
    [SerializeField] FieldRvType type;

    Coroutine showUICoroutin = null;

    bool isComplete = false;

    Tween groundTween = null;

    [SerializeField] GameObject groundObject;
    [SerializeField] Vector3 groundDefaultScale;

    public string pos = "";

    public TaskUtil.DelayTaskMethod disableTask = null;


    private void OnTriggerEnter(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (showUICoroutin != null)
            {
                StopCoroutine(showUICoroutin);
                showUICoroutin = null;
            }

            if (groundTween != null)
                groundTween.Kill();
            groundTween = groundObject.transform.DOScale(groundDefaultScale * 1.35f, 0.5f).SetEase(Ease.InOutBack);
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (showUICoroutin != null && other.GetComponentInChildren<PlayerMovement>().GetCurrentMoveSpeed() != 0)
            {
                StopCoroutine(showUICoroutin);
                showUICoroutin = null;
            }

            if (other.GetComponentInChildren<PlayerMovement>().GetCurrentMoveSpeed() == 0 && showUICoroutin == null)
            {
                showUICoroutin = StartCoroutine(ShowUICoroutin());

            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (showUICoroutin != null)
            {
                StopCoroutine(showUICoroutin);
                showUICoroutin = null;
            }

            if (groundTween != null)
                groundTween.Kill();
            groundTween = groundObject.transform.DOScale(groundDefaultScale, 0.5f).SetEase(Ease.InOutBack);
        }
    }

    IEnumerator ShowUICoroutin()
    {
        if (gameObject != null)
        {
            yield return new WaitForSeconds(1f);

            if (disableTask != null)
                disableTask.Kill();

            IdleManager.instance.GenerateFieldRVUI(type, () => { if (gameObject != null) { Destroy(gameObject); } }, pos, () =>
            {
                IdleManager.instance.TaskDelay(15, () => { if (gameObject != null) { Destroy(gameObject); }; });
            });

            EventManager.instance.CustomEvent(AnalyticsType.UI, type.ToString() + "- OnActivefieldRV " + pos, true, true);
        }
    }
}
