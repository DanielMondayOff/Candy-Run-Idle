using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IdleCustomer : MonoBehaviour
{
    [SerializeField] private NavMeshAgent agent;

    private Vector3 targetPos;
    private System.Action onComplete = null;

    private void Update()
    {
        if (onComplete != null)
            if (agent.remainingDistance < 0.1f)
            {
                onComplete.Invoke();
                onComplete = null;
            }
    }

    public void SetDestination(Vector3 pos, System.Action onComplete)
    {
        agent.SetDestination(pos);
        this.onComplete = onComplete;
    }
}

public enum CustomerStateus
{
    
}
