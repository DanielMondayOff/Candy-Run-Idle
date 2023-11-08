using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using DG.Tweening;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RunRunManager : MonoBehaviour
{
    public static RunRunManager instance;

    public static int StageNum = 0;
    public int score = 0;

    public int currentBulletCount = 0;
    public Text bulletCountText;

    public Transform magTrans1;
    public GameObject mag;
    public GameObject EndCard;

    private System.Action onChangeBulletCountEvent;

    private Tween boink = null;


    private void Awake()
    {
        if (instance == null)
            instance = this;
    }

    private void Start()
    {
        onChangeBulletCountEvent += () => { bulletCountText.text = currentBulletCount.ToString(); };

        RunRunStart();

        StageNum = ES3.KeyExists("RunRunCurrentStage") ? ES3.Load<int>("RunRunCurrentStage") : 0;

        EventManager.instance.CustomEvent(AnalyticsType.TEST, "RunRun - TryStage - " + StageNum);
    }

    public void RunRunStart()
    {
        StageManager.instance.randomMapGenerator.GenearteRandomRunRunMap();
    }

    public void AddBullet(int count = 1, bool boink = true)
    {
        currentBulletCount += count;
        onChangeBulletCountEvent.Invoke();

        if (boink)
            mag.transform.DOScale(1.2f, 0.15f).SetEase(Ease.OutBack)
                .OnComplete(() => mag.transform.DOScale(1f, 0.15f));
    }
    public void UseBullet(int count = 1)
    {
        currentBulletCount -= count;
        onChangeBulletCountEvent.Invoke();
    }

    public void Restart()
    {
        SceneManager.LoadScene(3);
    }

    public void EndStage()
    {
        StageNum += 1;

        ES3.Save<int>("RunRunCurrentStage", StageNum);

        EndCard.GetComponentInChildren<Text>().text = "Score : " + score;
        EndCard.SetActive(true);

        RunManager.instance.isGameEnd = true;
        RunManager.instance.canMove = false;
        RunManager.instance.enableSwipe = false;
        RunManager.instance.joyStickCanvas.GetComponent<JoyStickController>().ForcePointerUp();
    }

}
