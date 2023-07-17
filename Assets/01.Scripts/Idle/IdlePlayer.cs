using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IdlePlayer : MonoBehaviour
{
    [SerializeField] NavMeshAgent agent;

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
