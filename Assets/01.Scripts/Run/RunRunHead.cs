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

            for (int i = 0; i < Random.Range(2, 4); i++)
            {
                var money = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Money"));
                money.transform.position = transform.position;
                money.transform.DOJump(new Vector3(Random.Range(0, 2f) * 3, 0, transform.position.z + Random.Range(0, 2f)), 2.5f, 2, 1f);
            }

            //이모티콘 생성
            RunRunManager.instance.GenerateEmoji("Particles/Happy2");

            child.DOShakePosition(0.15f, 2f);
        }
    }
}
