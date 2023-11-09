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
    public int currentMoney = 0;

    public int currentBulletCount = 0;
    public Text bulletCountText;
    public Text scoreText;
    public Text moneyText;

    public Transform magTrans1;
    public GameObject mag;
    public GameObject EndCard;

    public GameObject head;
    public GameObject player;
    public GameObject gun;


    private System.Action onChangeBulletCountEvent;

    private Tween boink = null;

    private bool gameStarted = false;
    private bool jumping = false;
    private bool headOut = false;

    [SerializeField] private float distance;

    [SerializeField] private AnimationCurve jumpAnimationCurve;


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
        currentMoney = StageNum = ES3.KeyExists("RunRunCurrentMoney") ? ES3.Load<int>("RunRunCurrentMoney") : 0;
        this.TaskDelay(0.001f, () => moneyText.text = currentMoney.ToString());
        EventManager.instance.CustomEvent(AnalyticsType.TEST, "RunRun - TryStage - " + StageNum);
    }

    private void Update()
    {
        distance = Vector3.Distance(player.transform.position, head.transform.position);

        if (head.transform.position.z > 170 && !jumping)
        {
            HeadOut();
        }
        else if (Vector3.Distance(player.transform.position, head.transform.position) < 30f && !jumping && gameStarted && !headOut)
        {
            HeadJump();
        }
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

    public void StartStage()
    {
        gameStarted = true;
    }

    public void EndStage()
    {
        if (!gameStarted)
            return;
        gameStarted = false;

        StageNum += 1;

        ES3.Save<int>("RunRunCurrentStage", StageNum);

        scoreText.transform.parent.gameObject.SetActive(false);
        EndCard.GetComponentInChildren<Text>().text = "Score : " + score;
        EndCard.SetActive(true);

        RunManager.instance.isGameEnd = true;
        RunManager.instance.canMove = false;
        RunManager.instance.enableSwipe = false;
        RunManager.instance.joyStickCanvas.GetComponent<JoyStickController>().ForcePointerUp();
    }

    public void HeadJump()
    {
        jumping = true;
        head.GetComponent<Animator>().SetTrigger("Jump");

        head.transform.DOJump(new Vector3(Random.Range(-1, 2) * 3, 0, head.transform.position.z + 15f), 3, 1, 1.6f).SetEase(jumpAnimationCurve).OnComplete(() => { jumping = false; });
    }

    public void AddScore(int value)
    {
        score += value;

        scoreText.text = score.ToString();
    }

    public void gunKnockBack()
    {
        gun.transform.DOLocalMoveZ(-7f, 0.15f).SetLoops(1);
        gun.transform.DOShakePosition(0.2f);
    }

    public void AddMoney(int value)
    {
        currentMoney += value;

        ES3.Save<int>("RunRunCurrentMoney", currentMoney);
        moneyText.text = currentMoney.ToString();
    }

    public void HeadOut()
    {
        headOut = true;

        head.GetComponent<Animator>().SetTrigger("Jump");
        head.transform.DOMoveY(-50, 1.5f).SetEase(jumpAnimationCurve).OnComplete(() => EndStage());
    }

    public void GenerateEmoji(string path)
    {
        var emojis = Resources.LoadAll<GameObject>(path);

        var emoji = Managers.Pool.Pop(emojis[Random.Range(0, emojis.Length)]);

        emoji.transform.position = head.transform.position + (Vector3.back * 0.5f);

        emoji.GetComponent<ParticleSystem>().Play();

        this.TaskDelay(5f, () => Managers.Pool.Push(emoji));
    }
}
