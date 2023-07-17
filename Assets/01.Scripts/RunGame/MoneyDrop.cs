using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyDrop : MonoBehaviour
{
    public int moneyValue;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            RunManager.instance.GetMoney(moneyValue);

            Managers.Pool.Push(GetComponent<Poolable>());

            var particle = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Particles/DollarbillDirectional"));

            particle.transform.position = transform.position;
            particle.GetComponentInChildren<ParticleSystem>().Play();

            SaveManager.instance.GetMoney(moneyValue);
        }
    }
}
