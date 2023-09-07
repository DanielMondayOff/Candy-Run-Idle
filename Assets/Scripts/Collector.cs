using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.Events;
using MoreMountains.NiceVibrations;
using Sirenix.OdinInspector;

public class Collector : MonoBehaviour
{

    [HorizontalGroup("Guid")][ReadOnly][SerializeField] string guid;
    public string Guid { get => guid; protected set => guid = value; }

    [HorizontalGroup("Guid")]
    [Button(SdfIconType.ArrowClockwise)]
    virtual protected void NewGuid()
    {
        Guid = System.Guid.NewGuid().ToString();
#if UNITY_EDITOR
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }

    public bool isComplete = false;

    Coroutine collectCoroutine = null;

    Tween groundTween = null;

    public GameObject groundObject;
    public Vector3 groundDefaultScale;

    public Text requireMoneyText;
    public Image fillImage;

    public GameObject costParent;
    public GameObject rvParent;

    public bool ignoreMultifly = false;

    public UnityEvent onComplete = null;

    public UnityEvent onComplete_userOnly = null;

    public int requireMoney;
    public int currentMoney;

    private Transform targetPlayer;
    public Vector3 activeSize;

    public List<Collector> nextCollectorList = new List<Collector>();

    public bool firstCollector = false;

    Tween fillAmountTween = null;

    public bool RV = false;

    float rvFill = 0;

    public static readonly float rvRequierSec = 1.5f;

    private void Start()
    {
        if (ES3.KeyExists(guid + "_currentMoney"))
        {
            currentMoney = ES3.Load<int>(guid + "_currentMoney");
        }

        if (ES3.KeyExists(guid + "_isComplete"))
        {
            print("isComplete + " + guid);
            gameObject.SetActive(false);
            onComplete.Invoke();
        }
        else if (ES3.KeyExists(guid + "_isActive"))
        {
            print("isActive + " + guid);
            ActiveThisCollector();
        }
        else if (currentMoney >= requireMoney)
        {
            onComplete.Invoke();
            gameObject.SetActive(false);
        }

        else
        {
            if (!firstCollector)
                Sleep();
        }

        requireMoneyText.text = (requireMoney - currentMoney).ToString();

        groundDefaultScale = groundObject.transform.localScale;

        ChangeFillAmount();
    }

    public void Init()
    {
        transform.localScale = Vector3.zero;
        transform.DOScale(Vector3.one, 0.5f);

        IconInit();
    }

    void IconInit()
    {
        if (RV)
        {
            costParent.SetActive(false);
            rvParent.SetActive(true);
        }
        else
        {
            costParent.SetActive(true);
            rvParent.SetActive(false);
        }
    }

    private void OnValidate()
    {
        requireMoneyText.text = (requireMoney - currentMoney).ToString();

        activeSize = transform.localScale;

        IconInit();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (collectCoroutine != null)
            {
                StopCoroutine(collectCoroutine);
                collectCoroutine = null;
            }

            // if (other.GetComponentInChildren<UnityEngine.AI.NavMeshAgent>().isStopped)
            //     collectCoroutine = StartCoroutine(CollectCoroutine());

            targetPlayer = other.transform;

            if (groundTween != null)
                groundTween.Kill();
            groundTween = groundObject.transform.DOScale(groundDefaultScale * 1.2f, 0.5f).SetEase(Ease.InOutBack);
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (collectCoroutine != null && other.GetComponentInChildren<PlayerMovement>().GetCurrentMoveSpeed() != 0)
            {
                StopCoroutine(collectCoroutine);
                collectCoroutine = null;
            }

            if (other.GetComponentInChildren<PlayerMovement>().GetCurrentMoveSpeed() == 0 && collectCoroutine == null)
                collectCoroutine = StartCoroutine(CollectCoroutine());
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (isComplete)
            return;

        if (other.tag.Equals("Player"))
        {
            if (collectCoroutine != null)
            {
                StopCoroutine(collectCoroutine);
                collectCoroutine = null;
            }

            if (groundTween != null)
                groundTween.Kill();
            groundTween = groundObject.transform.DOScale(groundDefaultScale, 0.5f).SetEase(Ease.InOutBack);

            rvFill = 0;
            ChangeFillAmount();
        }
    }

    IEnumerator CollectCoroutine()
    {
        if (isComplete)
            if (collectCoroutine != null)
                StopCoroutine(collectCoroutine);

        int valueForTick = (requireMoney - currentMoney) / 10;

        valueForTick = Mathf.Clamp(valueForTick, 1, int.MaxValue);

        while (true)
        {
            yield return new WaitForSeconds(0.1f);

            if (RV ? (rvFill >= rvRequierSec) : false)
            {
                StopCoroutine(collectCoroutine);
                collectCoroutine = null;

                MondayOFF.AdsManager.ShowRewarded(() => { OnCompleteCollect(); EventManager.instance.CustomEvent(AnalyticsType.RV, "CollectorRV_" + guid, true, true); });
            }
            else if (GetRemainMoney() <= 0)
            {
                OnCompleteCollect();
            }
            else
            {
                if (RV)
                {
                    rvFill += 0.1f;
                }
                else if (GetRemainMoney() >= valueForTick)
                {
                    if (SaveManager.instance.CheckPossibleUpgrade(valueForTick))
                    {
                        SaveManager.instance.LossMoney(valueForTick);
                        IdleManager.instance.GenerateDummyMoney("Money Dummy", targetPlayer.position, transform.position);

                        currentMoney += valueForTick;

                        MMVibrationManager.Haptic(HapticTypes.LightImpact);
                    }
                    else if (SaveManager.instance.GetMoney() <= 0)
                    {

                    }
                    else
                    {
                        int money = SaveManager.instance.GetMoney();
                        SaveManager.instance.LossMoney(money);
                        IdleManager.instance.GenerateDummyMoney("Money Dummy", targetPlayer.position, transform.position);

                        currentMoney += money;

                        MMVibrationManager.Haptic(HapticTypes.LightImpact);
                    }
                }
                else
                {
                    if (SaveManager.instance.CheckPossibleUpgrade(GetRemainMoney()))
                    {
                        SaveManager.instance.LossMoney(GetRemainMoney());
                        IdleManager.instance.GenerateDummyMoney("Money Dummy", targetPlayer.position, transform.position);

                        currentMoney += GetRemainMoney();

                        MMVibrationManager.Haptic(HapticTypes.LightImpact);
                    }
                    else if (SaveManager.instance.GetMoney() <= 0)
                    {

                    }
                    else
                    {
                        int money = SaveManager.instance.GetMoney();

                        SaveManager.instance.LossMoney(money);
                        IdleManager.instance.GenerateDummyMoney("Money Dummy", targetPlayer.position, transform.position);

                        currentMoney += money;

                        MMVibrationManager.Haptic(HapticTypes.LightImpact);
                    }
                }
                requireMoneyText.text = (requireMoney - currentMoney).ToString();

                if (GetRemainMoney() <= 0)
                {
                    OnCompleteCollect();
                }

                ChangeFillAmount();

                ES3.Save<int>(guid + "_currentMoney", currentMoney);
            }
        }
    }

    [Button("ForceComplete")]
    public void OnCompleteCollect()
    {
        if (isComplete)
            return;

        isComplete = true;

        if (groundTween != null)
            groundTween.Kill();
        groundTween = gameObject.transform.DOScale(Vector3.zero, 0.7f).SetEase(Ease.InOutBack).SetDelay(0.15f).OnComplete(() => { onComplete.Invoke(); onComplete_userOnly.Invoke(); });

        ES3.Save<bool>(guid + "_isComplete", true);

        nextCollectorList.ForEach((n) => n.ActiveThisCollector());

        EventManager.instance.CustomEvent(AnalyticsType.IDLE, "COLLECT_COMPLETE_ " + guid, true, true);


        // MondayOFF.EventTracker.LogCustomEvent(
        // "IDLE",
        // new Dictionary<string, string> { { "COLLECT_COMPLETE", guid } }
        // );
    }

    public int GetRemainMoney()
    {
        return (requireMoney - currentMoney);
    }

    public void Sleep()
    {
        gameObject.SetActive(false);
        transform.localScale = Vector3.zero;
    }

    public void ActiveThisCollector()
    {
        if (ES3.KeyExists(guid + "_isComplete"))
            return;

        gameObject.SetActive(true);
        transform.DOScale(activeSize, 0.7f).SetEase(Ease.InOutBack);

        ES3.Save<bool>(guid + "_isActive", true);
    }

    void ChangeFillAmount()
    {
        if (fillAmountTween != null ? fillAmountTween.IsPlaying() : false)
        {
            fillAmountTween.Kill();
            fillAmountTween = null;
        }

        if (RV)
            fillAmountTween = fillImage.DOFillAmount(rvFill / rvRequierSec, 0.1f);
        else
            fillAmountTween = fillImage.DOFillAmount((float)currentMoney / (float)requireMoney, 0.1f);
    }
}



