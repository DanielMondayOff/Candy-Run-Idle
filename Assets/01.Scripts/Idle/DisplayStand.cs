using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using DG.Tweening;

public class DisplayStand : BuildObject
{
    [SerializeField] Dictionary<Transform, ItemObject> displayPoints = new Dictionary<Transform, ItemObject>();

    public KeyValuePair<Transform, ItemObject> GetEmptyPoint()
    {
        foreach (var point in displayPoints)
        {
            if (point.Value == null)
                return point;
        }

        return new KeyValuePair<Transform, ItemObject>();
    }

    public KeyValuePair<Transform, ItemObject> GetItemObject(bool removeFromList = false)
    {
        foreach (var point in displayPoints)
        {
            if (point.Value != null)
            {
                if (removeFromList)
                    displayPoints[point.Key] = null;

                return point;
            }
        }

        return new KeyValuePair<Transform, ItemObject>();
    }

    public KeyValuePair<Transform, ItemObject> FindEmptyPoint() => displayPoints.Where((n) => n.Value == null).First();
    [SerializeField] Stack<Item> items = new Stack<Item>();

    [SerializeField] Transform[] customerQueueLine;
    [SerializeField] List<IdleCustomer> customerList = new List<IdleCustomer>();

    [SerializeField] public int itemId;

    public bool isReady = false;


    private TaskUtil.WhileTaskMethod checkPlayerItemWhileTask = null;
    private TaskUtil.WhileTaskMethod checkDistBetweenCustomer = null;


    TaskUtil.DelayTaskMethod candyGiveDelay = null;

    public float Debug_distToCustomer;

    [SerializeField] Canvas CandyCanvas;
    [SerializeField] Text test_candyName;
    [SerializeField] Image candyImage;
    [SerializeField] Text test_candyCount;

    private bool pause = false;

    [SerializeField] public CandyMachine currentMachine;


    private void Start()
    {
        if (ES3.KeyExists(Guid + "_items"))
        {
            var _items = ES3.Load<Item[]>(Guid + "_items");

            _items.ToList().ForEach((n) => items.Push(n));

            foreach (var item in _items)
            {
                foreach (var point in displayPoints)
                {
                    if (point.Value == null)
                    {
                        displayPoints[point.Key] = IdleManager.instance.GenerateItemObject(point.Key, item.id).GetComponentInChildren<ItemObject>();
                        displayPoints[point.Key].transform.localScale = Vector3.one * 0.2f;
                        break;
                    }
                }
            }
        }

        test_candyCount.text = "X " + (items.Count);
    }

    public void Init()
    {
        candyImage.sprite = SaveManager.instance.FindCandyObjectInReousrce(itemId).icon;

        test_candyCount.text = "X " + (items.Count);

        this.TaskWhile(1, 0, CheckDistBetweenCustomer);
    }

    public void AddItemObject(GameObject itemObj)
    {
        var point = GetEmptyPoint();
        if (point.Key == null)
        {
            Debug.LogError("자리가 없습니다.");
            return;
        }

        foreach (var _point in displayPoints)
        {
            if (_point.Value == null)
            {
                displayPoints[_point.Key] = itemObj.GetComponentInChildren<ItemObject>();

                items.Push(displayPoints[_point.Key].GetItem);

                ES3.Save<Item[]>(Guid + "_items", items.ToArray());

                OnChangeInventory();
                return;
            }
        }
    }

    public void PopoutItemObject(Transform parent)
    {
        Transform findKey = null;

        foreach (var point in displayPoints)
        {
            if (point.Value != null)
            {
                point.Value.Jump(parent);
                findKey = point.Key;
            }
        }

        if (findKey != null)
            displayPoints.Remove(findKey);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("Player"))
        {
            checkPlayerItemWhileTask = this.TaskWhile(0.25f, 0, () => CheckPlayerItems(other.GetComponent<IdlePlayer>()));
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("Player"))
        {
            if (checkPlayerItemWhileTask != null)
            {
                checkPlayerItemWhileTask.Kill();
                checkPlayerItemWhileTask = null;
            }
        }
    }

    private void CheckPlayerItems(IdlePlayer player)
    {
        if (GetEmptyPoint().Key != null)
            player.PopoutItem(itemId, GetEmptyPoint().Key, this);
    }

    void GenerateItemObject()
    {

    }

    public override void Build(bool direct = false)
    {
        if (isReady)
            return;

        base.Build(direct);

        isReady = true;

        Init();
    }

    public bool CheckHasQueue()
    {
        if (customerQueueLine.Length > customerList.Count)
            return true;
        else
            return false;
    }

    public void EnqueueCustomer(IdleCustomer newCustomer)
    {
        customerList.Add(newCustomer);

        UpdateLine();
    }

    public void CheckDistBetweenCustomer()
    {
        if (!isReady || candyGiveDelay != null || pause)
            return;

        if (customerList.Count > 0)
        {
            Debug_distToCustomer = Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position);

            if (Vector3.Distance(customerList[0].transform.position, customerQueueLine[0].transform.position) < 1f)
            {
                if (items.Count <= 0)
                {
                    pause = true;
                    this.TaskDelay(2.5f, () =>
                    {
                        customerList[0].Exit();
                        // delayTimer = null;
                        customerList[0].GenerateEmoji("Particles/Dispoint");
                        customerList.Remove(customerList[0]);

                        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Customer Dispoint_" + itemId, true, true);

                        UpdateLine();

                        //     if (ES3.Load<bool>("NextStageEnable") == )
                        //         IdleManager.instance.HighlightNextStageBtn();

                        pause = false;
                    });
                }
                else
                {
                    // if (delayTimer != null)
                    // {
                    //     delayTimer.Kill();
                    //     delayTimer = null;
                    // }

                    GiveCandyToCustomer(customerList[0]);
                }
            }
        }
        else
            Debug_distToCustomer = 0;
    }

    public void GiveCandyToCustomer(IdleCustomer customer)
    {
        // customer.SetTimer(2.5f);

        candyGiveDelay = this.TaskDelay(1f, () =>
        {

            IdleManager.instance.counter.EnqueueCustomer(customer);

            // customer.candyInventory.candy = SaveManager.instance.FindCandyObjectInReousrce(itemId);
            // customer.candyInventory.count = 1;

            // SaveManager.instance.TakeCandy(customer.candyInventory.candy.id, 1);

            // customer.UpdateCandyJar();

            // candyItem.TakeCandy(1);

            var itemObject = GetItemObject(true);

            customer.AddItem(itemObject.Value.gameObject);

            items.Pop();

            customerList.Remove(customer);

            OnChangeInventory(true);

            transform.DOPunchScale(Vector3.one * 0.1f, 0.5f);

            UpdateLine();

            candyGiveDelay = null;

            EventManager.instance.CustomEvent(AnalyticsType.IDLE, "Candy Give_" + itemId, true, true);

        });
    }

    public void OnChangeInventory(bool wiggle = false)
    {
        candyImage.sprite = SaveManager.instance.FindCandyObjectInReousrce(itemId).icon;

        test_candyCount.text = "X " + (items.Count);

        if (wiggle)
            CandyCanvas.transform.DOPunchScale(CandyCanvas.transform.localScale * 0.3f, 0.2f, 2);
    }

    public void UpdateLine()
    {
        for (int i = 0; i < customerList.Count; i++)
        {
            customerList[i].SetDestination(customerQueueLine[i].transform.position);
        }
    }
}
