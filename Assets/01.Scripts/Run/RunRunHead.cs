using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class RunRunHead : MonoBehaviour
{
    [SerializeField] Transform child;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Bullet"))
        {
            other.GetComponentInChildren<Bullet>().Push();

            RunRunManager.instance.AddScore(100);

            child.DOShakePosition(0.15f, 2f);
        }
    }
}
