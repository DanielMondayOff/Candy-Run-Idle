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
        WorkerStateMachine();
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
        var line = IdleManager.instance.FindEmptyOrderLine_Worker();
        if (line != null)
        {
            MoveToCandy(line);
        }
    }

    void MoveToCandy(OrderLine line)
    {
        line.currentWorker = this;

        currentOrder = line.currentCustomer.order;

        agent.SetDestination(IdleManager.instance.FindCandyJar(line.currentCustomer.order.candy.id).transform.position);

        currentWorkerStatus = WorkerStatus.MoveToCandy;

        this.TaskWaitUntil(() => MoveToCustomer(line), () => (agent.remainingDistance < 0.1f));
    }

    void MoveToCustomer(OrderLine line)
    {
        workerInventory = new CandyItem() {candy = line.currentCustomer.order.candy, count = 1};

        agent.SetDestination(line.workerLine.position);

        currentWorkerStatus = WorkerStatus.MoveToCustomer;

        this.TaskWaitUntil(() => CompleteDelivery(line), () => (agent.remainingDistance < 0.1f));
    }

    void CompleteDelivery(OrderLine line)
    {
        line.currentCustomer.AddCandyToOrder(workerInventory);
        
        currentWorkerStatus = WorkerStatus.Wait;
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
