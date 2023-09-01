using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using MoreMountains.NiceVibrations;

public class CandyMachine : BuildObject
{
    public candySaveData candyItem;

    [SerializeField] Canvas CandyCanvas;
    [SerializeField] Text test_candyName;
    [SerializeField] Image candyImage;
    [SerializeField] Text test_candyCount;

    [SerializeField] Transform candyDeco;

    public Transform[] customerQueueLine;

    public List<IdleCustomer> customerList = new List<IdleCustomer>();

    public bool isReady = false;

    public float Debug_distToCustomer;

    public TaskUtil.DelayTaskMethod delayTimer = null;
    public TaskUtil.DelayTaskMethod candyGiveDelay = null;

    //================================================================================

    public TaskUtil.WhileTaskMethod playerTakeCandyTask = null;
    public Transform itemObjectGeneratePoint;



    public void Init()
    {
        candyItem = SaveManager.instance.FindCandyItem(candyItem.id);

        candyImage.sprite = SaveManager.instance.FindCandyObjectInReousrce(candyItem.id).icon;

        test_candyCount.text = "X " + (candyItem.count);

        this.TaskWhile(1, 0, CheckDistBetweenCustomer);

        UpdateCandyDisplay();
    }

    public void EnqueueCustomer(IdleCustomer newCustomer)
    {
        customerList.Add(newCustomer);

        UpdateLine();
    }

    public void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("Player"))
        {

            this.playerTakeCandyTask = this.TaskWhile(0.2f, 0, () => ItemObjectMoveTask(other.GetComponentInChildren<IdlePlayer>()));
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("Player"))
        {
            if (this.playerTakeCandyTask != null)
                this.playerTakeCandyTask.Kill();
        }
    }

    public void CheckDistBetweenCustomer()
    {
        if (!isReady || candyGiveDelay != null)
            return;

        if (customerList.Count > 0)
        {
            Debug_distToCustomer = Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position);

            if (Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position) < 1f)
            {
                if (candyItem.count <= 0)
                {
                    if (delayTimer == null)
                        delayTimer = this.TaskDelay(2.5f, () =>
                        {
                            customerList[0].Exit();
                            delayTimer = null;
                            customerList[0].GenerateEmoji("Particles/Dispoint");
                            customerList.Remove(customerList[0]);

                            EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Customer Dispoint_" + candyItem.id, true, true);

                            UpdateLine();

                            if (ES3.Load<bool>("NextStageEnable"))
                                IdleManager.instance.HighlightNextStageBtn();
                        });
                }
                else
                {
                    if (delayTimer != null)
                    {
                        delayTimer.Kill();
                        delayTimer = null;
                    }

                    GiveCandyToCustomer(customerList[0]);
                }
            }
        }
        else
            Debug_distToCustomer = 0;
    }

    public void GiveCandyToCustomer(IdleCustomer customer)
    {
        customer.SetTimer(2.5f);

        candyGiveDelay = this.TaskDelay(2.5f, () =>
        {

            IdleManager.instance.counter.EnqueueCustomer(customer);

            customer.candyInventory.candy = SaveManager.instance.FindCandyObjectInReousrce(candyItem.id);
            customer.candyInventory.count = 1;

            SaveManager.instance.TakeCandy(customer.candyInventory.candy.id, 1);

            customer.UpdateCandyJar();

            // candyItem.TakeCandy(1);

            customerList.Remove(customer);

            OnChangeInventory(true);

            transform.DOPunchScale(Vector3.one * 0.1f, 0.5f);

            UpdateLine();

            candyGiveDelay = null;

            EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Candy Give_" + candyItem.id, true, true);

        });
    }

    public void UpdateLine()
    {
        for (int i = 0; i < customerList.Count; i++)
        {
            customerList[i].SetDestination(customerQueueLine[i].transform.position);
        }
    }

    public void OnChangeInventory(bool wiggle = false)
    {
        candyImage.sprite = SaveManager.instance.FindCandyObjectInReousrce(candyItem.id).icon;

        test_candyCount.text = "X " + (candyItem.count);

        if (wiggle)
            CandyCanvas.transform.DOPunchScale(CandyCanvas.transform.localScale * 0.3f, 0.2f, 2);

        UpdateCandyDisplay();
    }

    public override void Build(bool direct = false)
    {
        base.Build(direct);

        isReady = true;

        Init();
    }

    public void UpdateUI()
    {
        test_candyCount.text = "X " + (candyItem.count);
    }

    public void UpdateCandyDisplay()
    {
        candyDeco.transform.DOMoveY(Mathf.Clamp(-6f + (candyItem.count * 0.3f), -6f, 0), 0.5f);
    }

    public bool CheckHasQueue()
    {
        if (customerQueueLine.Length > customerList.Count)
            return true;
        else
            return false;
    }

    public void ItemObjectMoveTask(IdlePlayer player)
    {
        var playerPoint = player.GetPlayerEmptyPoint();
        if (playerPoint != null)
        {
            var obj = IdleManager.instance.GenerateItemObject(itemObjectGeneratePoint, candyItem.id);

            obj.GetComponentInChildren<ItemObject>().Jump(playerPoint);

            // SaveManager.instance.TakeCandy(candyItem.id, 1);

            OnChangeInventory(true);

            transform.DOPunchScale(Vector3.one * 0.1f, 0.20f);

            player.AddItemStack(obj);

            MMVibrationManager.Haptic(HapticTypes.MediumImpact);
        }
    }

    public ItemObject GiveItemobjectToWorker(Transform point, System.Action onComplete = null)
    {

        var obj = IdleManager.instance.GenerateItemObject(itemObjectGeneratePoint, candyItem.id);

        obj.GetComponentInChildren<ItemObject>().Jump(point);


        // SaveManager.instance.TakeCandy(candyItem.id, 1);

        OnChangeInventory(true);

        transform.DOPunchScale(Vector3.one * 0.1f, 0.20f);

        if (onComplete != null)
            onComplete.Invoke();

        return obj.GetComponentInChildren<ItemObject>();
    }
}
