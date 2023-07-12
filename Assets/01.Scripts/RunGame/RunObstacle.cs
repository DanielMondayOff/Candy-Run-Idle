using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class RunObstacle : MonoBehaviour
{
    public int hp;

    public float damage = 100;

    public bool isUsed = false;
    public bool isDestroyed = false;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Bullet") && !isDestroyed)
        {
            TakeDamage();
        }

        if (other.CompareTag("Player") && !isUsed)
        {
            RunManager.instance.TakeDamage(100);
            isUsed = true;
        }
    }

    public void TakeDamage()
    {
        hp--;

        if (hp <= 0)
        {
            Destroy();
        }
    }

    public void Destroy()
    {
        isDestroyed = true;
        gameObject.SetActive(false);

        var money = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Money"));

        money.transform.position = transform.position;

        money.transform.DOJump(money.transform.position, 1.5f, 1, 0.5f);
    }
}
