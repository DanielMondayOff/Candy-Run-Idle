using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;
using Sirenix.OdinInspector;
using System.Linq;

public class IdleWorker2 : SerializedMonoBehaviour
{
    [SerializeField] NavMeshAgent agent;
    [SerializeField] Animator animator;


    [SerializeField] Dictionary<Transform, ItemObject> itemPoints = new Dictionary<Transform, ItemObject>();

    [SerializeField] bool Working = false;
    private bool delivery = false;

    private void Start()
    {
        this.TaskWhile(1f, 1f, FindJob);
    }

    private void Update()
    {
        if (agent.velocity.magnitude > 0.1f)
        {
            animator.SetBool("Move", true);
        }
        else
            animator.SetBool("Move", false);

        if (delivery)
            animator.SetLayerWeight(1, 1);
        else
            animator.SetLayerWeight(1, 0);
    }


    public void FindJob()
    {
        if (Working)
            return;

        print("finding");

        var jobs = IdleManager.instance.candyDisplayStandList.Where((n) => n.isReady && n.GetEmptyPoint().Value == null).ToArray();

        if (jobs.Length > 0)
        {
            Working = true;
            var job = jobs[Random.Range(0, jobs.Length)];

            agent.SetDestination(job.currentMachine.transform.position);

            this.TaskWaitUntil(() => itemPoints[itemPoints.First().Key] = job.currentMachine.GiveItemobjectToWorker(itemPoints.First().Key, () =>
                {
                    DeliveryToStand(job);
                    delivery = true;
                }
            ), () => (Vector3.Distance(transform.position, job.currentMachine.transform.position) < 5f));
        }
    }

    public void DeliveryToStand(DisplayStand stand)
    {
        agent.SetDestination(stand.transform.position);

        this.TaskWaitUntil(() =>
        {
            if (stand.GetEmptyPoint().Key != null)
            {
                itemPoints.First().Value.Jump(stand.GetEmptyPoint().Key);
                stand.AddItemObject(itemPoints.First().Value.gameObject);
            }
            else
            {
                Managers.Pool.Push(itemPoints.First().Value.gameObject.GetComponentInChildren<Poolable>());
            }

            itemPoints[itemPoints.First().Key] = null;
            EndDelivery();
        }, () => (Vector3.Distance(stand.transform.position, transform.position) < 8f));
    }

    public void EndDelivery()
    {
        Working = false;
        delivery = false;
    }


}
