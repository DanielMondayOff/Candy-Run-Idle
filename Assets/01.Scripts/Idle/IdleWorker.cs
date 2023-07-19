using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IdleWorker : MonoBehaviour
{
    [SerializeField] NavMeshAgent agent;

    [SerializeField] private CandyOrder currentOrder = null;

    private void Update()
    {
        
    }

    void WaitNextOrder()
    {
        
    }

    public void SetMoveSpeed (float speed) => agent.speed = speed;


    public void SetDestination(Transform target)
    {
        
    }

    public void StartGetCandy()
    {

    }

    public void EndGetCandy()
    {

    }


}
