using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IdleWorker : MonoBehaviour
{
    [SerializeField] NavMeshAgent agent;

    [SerializeField] private CandyOrder currentOrder = null;

    private CandyItem workerInventory;

    public WorkerStatus currentWorkerStatus;

    private void Update()
    {

    }

    void WorkerStateMachine()
    {
        switch (currentWorkerStatus)
        {
            case WorkerStatus.Wait:
                WaitNextOrder();
                break;

            case WorkerStatus.MoveToCandy:

                break;

            case WorkerStatus.MoveToCustomer:

                break;
        }
    }

    void WaitNextOrder()
    {
        var order = IdleManager.instance.FindEmptyOrderLine_Worker();
        if (order != null)
        {
            order.currentWorker = this;

            currentWorkerStatus = WorkerStatus.MoveToCandy;
        }

    }

    public void SetMoveSpeed(float speed) => agent.speed = speed;


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

public enum WorkerStatus
{
    Wait = 1,
    MoveToCandy = 2,
    MoveToCustomer = 3
}
