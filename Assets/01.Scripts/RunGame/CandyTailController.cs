using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using DG.Tweening;

public class CandyTailController : MonoBehaviour
{
    [System.Serializable]
    struct TailPart
    {
        public Transform tailTrans;
        public Vector3 trailLocalPos;

        public TailPart(Transform trans, Vector3 pos)
        {
            this.tailTrans = trans;
            this.trailLocalPos = pos;
        }
    }

    [SerializeField] private Transform[] candyParts;
    [SerializeField] private List<TailPart> candyTailParts = new List<TailPart>();


    [Button]
    public void Init()
    {
        candyTailParts.Clear();

        foreach (var part in candyParts)
        {
            candyTailParts.Add(new TailPart(part, part.transform.localPosition));
        }
    }

    public void ChangeCandyLength(float currentLength)
    {
        var tailAnimator = GetComponent<FIMSpace.FTail.TailAnimator2>();

        tailAnimator.LengthMultiplier = currentLength / 1000f;

        // tailAnimator._TransformsGhostChain.Clear();

        // for (int i = 0; i < candyTailParts.Count; i++)
        // {
        //     if (i < Mathf.FloorToInt(currentLength / 100))
        //     {
        //         tailAnimator._TransformsGhostChain.Add(candyTailParts[i].tailTrans);
        //         candyTailParts[i].tailTrans.transform.localPosition = candyTailParts[i].trailLocalPos;
        //     }
        //     else if (i == Mathf.FloorToInt(currentLength / 100))
        //     {
        //         tailAnimator._TransformsGhostChain.Add(candyTailParts[i].tailTrans);
        //         candyTailParts[i].tailTrans.transform.localPosition = candyTailParts[i].trailLocalPos;
        //     }
        //     else
        //     {
        //         candyTailParts[i].tailTrans.transform.localPosition = Vector3.zero;
        //     }
        // }

        // tailAnimator.EndBone = candyTailParts[Mathf.FloorToInt(currentLength / 100)].tailTrans;

        // tailAnimator.CheckForNullsInGhostChain();
    }

    public IEnumerator TailWave(System.Action onComplete = null)
    {
        Transform centerPart = null;
        Transform nextPart = null;

        for (int i = 0; i < candyParts.Length; i++)
        {
            if (centerPart != null)
            {
                // centerPart.transform.DOScale(new Vector3(1, 1, 1), 0.1f);
                centerPart.transform.localScale = new Vector3(1, 1, 1);
            }

            centerPart = candyParts[i];

            // centerPart.transform.DOScale(new Vector3(1.5f, 1, 1.5f), 0.1f);
            centerPart.transform.localScale = new Vector3(1.25f, 1, 1.25f);


            if (i + 1 < candyParts.Length)
                nextPart = candyParts[i + 1];

            // nextPart.transform.DOScale(new Vector3(0.685f, 1, 0.685f), 0.1f);
            nextPart.transform.localScale = new Vector3(0.8f, 1, 0.8f);


            yield return new WaitForSeconds(0.02f);
        }

        if (onComplete != null)
        {
            onComplete.Invoke();
        }
    }
}
