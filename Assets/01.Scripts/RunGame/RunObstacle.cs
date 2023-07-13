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

    [SerializeField] MeshRenderer meshRenderer;

    

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Bullet") && !isDestroyed)
        {
            TakeDamage();

            other.GetComponentInChildren<Bullet>().Push();
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

        transform.DOPunchScale(Vector3.one * 0.07f, 0.2f, 2, 1);

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

        var particle = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Particles/Obstacle Particle"));
        var shape = particle.GetComponentInChildren<ParticleSystem>().shape;

        shape.meshRenderer = meshRenderer;

        particle.GetComponentInChildren<ParticleSystem>().Play();

        this.TaskDelay(3f, () => Managers.Pool.Push(particle.GetComponentInChildren<Poolable>()));
    }
}
