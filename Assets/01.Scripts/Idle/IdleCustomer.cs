using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IdleCustomer : MonoBehaviour
{
    [SerializeField] private NavMeshAgent agent;

    private Vector3 targetPos;
    private System.Action nextAction = null;
    private Transform spawnPoint;

    public CandyOrder order;


    public void Init(Transform spawnPoint)
    {
        this.spawnPoint = spawnPoint;
    }

    private void Update()
    {
        if (nextAction != null)
            if (agent.remainingDistance < 0.1f)
            {
                nextAction.Invoke();
                nextAction = null;
            }
    }

    public void SetDestination(Vector3 pos, System.Action onComplete = null)
    {
        agent.SetDestination(pos);
        if (onComplete != null)
            this.TaskWaitUntil(onComplete, () => (agent.remainingDistance < 0.1f));
            // this.nextAction = onComplete;
    }

    public void WaitUntilCandy()
    {
        if (order.currentCount >= order.requestCount)
            Exit();
    }

    public void Exit()
    {
        SetDestination(spawnPoint.position, () => Managers.Pool.Push(GetComponentInChildren<Poolable>()));
    }
}

public enum CustomerStateus
{

}
