using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RunObstacle : MonoBehaviour
{
    public int hp;

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
            RunManager.instance.TakeDamage();
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
    }
}
