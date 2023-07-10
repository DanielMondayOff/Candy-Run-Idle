using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

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
}
