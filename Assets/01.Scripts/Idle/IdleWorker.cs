using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IdleWorker : MonoBehaviour
{
    [SerializeField] NavMeshAgent agent;

    [SerializeField] private CandyOrder currentOrder = null;
    [SerializeField]
    private CandyJar candyJar;


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

        this.TaskWaitUntil(() => { MoveToCustomer(line); TakeCandy(); }, () => (agent.remainingDistance < 0.1f));

        void TakeCandy()
        {
            SaveManager.instance.TakeCandy(line.currentCustomer.order.candy.id, 1);

            IdleManager.instance.OnChangeInventory();
        }
    }

    void MoveToCustomer(OrderLine line)
    {
        workerInventory = new CandyItem() { candy = line.currentCustomer.order.candy, count = 1 };

        agent.SetDestination(line.workerLine.position);

        currentWorkerStatus = WorkerStatus.MoveToCustomer;

        candyJar.ChangeJarModel(workerInventory.candy.id);
        candyJar.gameObject.SetActive(true);

        this.TaskWaitUntil(() => CompleteDelivery(line), () => (agent.remainingDistance < 0.1f));
    }

    void CompleteDelivery(OrderLine line)
    {
        line.currentCustomer.AddCandyToOrder(workerInventory);

        line.currentWorker = null;

        candyJar.gameObject.SetActive(false);

        currentWorkerStatus = WorkerStatus.Wait;
    }

}

public enum WorkerStatus
{
    Wait = 1,
    MoveToCandy = 2,
    MoveToCustomer = 3
}
