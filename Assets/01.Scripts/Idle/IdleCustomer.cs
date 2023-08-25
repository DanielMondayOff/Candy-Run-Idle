using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
using DG.Tweening;

public class IdleCustomer : MonoBehaviour
{
    [SerializeField] private NavMeshAgent agent;

    private Vector3 targetPos;
    private System.Action nextAction = null;
    private Transform spawnPoint;
    public OrderLine line;

    public CandyOrder order;

    public CandyItem candyInventory;

    public bool waitForCandy = false;

    [SerializeField] Canvas CandyCanvas;
    [SerializeField] Text test_candyName;
    [SerializeField] Image candyImage;
    [SerializeField] Text test_candyCount;

    [SerializeField] CandyJar candyJar;

    [SerializeField] GameObject[] skin;

    [SerializeField] Animator animator;

    [SerializeField] Vector3 destination;

    [SerializeField] UnityEngine.UI.Image timer;



    public void Init(Transform spawnPoint)
    {
        this.spawnPoint = spawnPoint;
        agent.enabled = true;

        RandomSkin();
    }

    private void Update()
    {
        if (nextAction != null)
            if (agent.remainingDistance < 0.1f)
            {
                nextAction.Invoke();
                nextAction = null;
            }

        if (agent.velocity.magnitude > 0.1f)
        {
            animator.SetBool("Move", true);
        }
        else
            animator.SetBool("Move", false);

        if (candyInventory.count > 0)
            animator.SetLayerWeight(1, 1);
        else
            animator.SetLayerWeight(0, 1);
    }

    public void SetDestination(Vector3 pos, System.Action onComplete = null)
    {
        agent.SetDestination(pos);
        if (onComplete != null)
            this.TaskWaitUntil(() => { onComplete.Invoke(); animator.SetBool("Move", false); }, () => (agent.remainingDistance < 0.1f));

        destination = pos;
        // this.nextAction = onComplete;
    }

    // public void WaitUntilCandy()
    // {

    //     waitForCandy = true;

    //     OnChangeOrder();

    //     CandyCanvas.transform.DOScale(new Vector3(0.004f, 0.004f, 0.004f), 0.4f);

    //     // this.TaskWaitUntil(() => Exit(), () => (order.currentCount >= order.requestCount));
    //     // if (order.currentCount >= order.requestCount)
    //     //     Exit();
    // }

    // public void AddCandyToOrder(CandyItem item)
    // {
    //     animator.SetBool("Move", false);

    //     if (order.candy.id == item.candy.id)
    //     {
    //         order.currentCount += item.count;

    //         OnChangeOrder(true);

    //         if (order.currentCount >= order.requestCount)
    //             Exit();
    //     }
    // }

    public void Exit()
    {
        animator.SetBool("Move", true);

        waitForCandy = false;
        line.currentCustomer = null;

        CandyCanvas.gameObject.SetActive(false);
        SetDestination(spawnPoint.position, () => { IdleManager.instance.ExitCustomer(transform.root.gameObject); Destroy(transform.root.gameObject); });

        // candyJar.ChangeJarModel(order.candy.id);
        // candyJar.gameObject.SetActive(true);

        // SaveManager.instance.GetMoney(order.CalculateTotalCost());


        // var particle = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Particles/DollarbillDirectional Large"));

        // particle.transform.position = transform.position + (Vector3.up * 2);
        // particle.GetComponentInChildren<ParticleSystem>().Play();

        // this.TaskDelay(5, () => Managers.Pool.Push(particle.GetComponentInParent<Poolable>()));

        // Managers.Pool.Push(transform.GetComponentInParent<Poolable>()
    }

    // void OnChangeOrder(bool wiggle = false)
    // {
    //     // test_candyName.text = order.candy.name;
    //     candyImage.sprite = order.candy.icon;
    //     test_candyCount.text = "X " + (order.requestCount - order.currentCount);

    //     if (wiggle)
    //         CandyCanvas.transform.DOPunchScale(CandyCanvas.transform.localScale * 0.3f, 0.2f, 2);
    // }


    void RandomSkin()
    {
        skin[Random.Range(0, skin.Length)].SetActive(true);
    }

    public void CheckComplete()
    {

    }

    public void UpdateCandyJar()
    {
        candyJar.ChangeJarModel(candyInventory.candy.id);
        candyJar.gameObject.SetActive(true);
    }


    public void GenerateEmoji(string path)
    {
        var emojis = Resources.LoadAll<GameObject>(path);

        var emoji = Managers.Pool.Pop(emojis[Random.Range(0, emojis.Length)], transform);
        emoji.transform.localPosition = Vector3.up * 10;

        emoji.GetComponent<ParticleSystem>().Play();

        this.TaskDelay(5f, () => Managers.Pool.Push(emoji));
    }

    public void SetTimer(float time)
    {
        timer.enabled = true;
        timer.fillAmount = 0;
        timer.DOFillAmount(1, time).OnComplete(() => timer.enabled = false);
    }
}

public enum CustomerStateus
{

}
