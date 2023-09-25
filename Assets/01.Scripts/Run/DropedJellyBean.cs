using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class DropedJellyBean : MonoBehaviour
{

    [SerializeField] MeshRenderer meshRenderer;
    [SerializeField] GameObject[] models;
    [SerializeField] Animator animator;


    [SerializeField] int currentModelNum = 0;

    [SerializeField] MeshRenderer jellyMesh;

    int jellyMatNum = 0;


    public float value = 50f;
    public float maxValue = 200f;

    public bool changeJellyColor = true;

    private void Start()
    {
        meshRenderer = GetComponentInChildren<MeshRenderer>();

        animator = GetComponentInChildren<Animator>();

        Init();

    }

#if UNITY_STANDALONE || UNITY_EDITOR
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.J))
        {
            NextCandyModel();
        }

        if (Input.GetKeyDown(KeyCode.H))
        {
            animator.enabled = !animator.enabled;
        }

        if (Input.GetKeyDown(KeyCode.G))
        {
            jellyMatNum++;

            if (jellyMatNum >= RunManager.instance.jellyBeanMats.Length)
                jellyMatNum = 0;

            var mat = RunManager.instance.jellyBeanMats[jellyMatNum];
            Material[] materials = { mat };
            meshRenderer.materials = materials;
        }
    }
#endif

    public void NextCandyModel()
    {
        currentModelNum++;

        meshRenderer.gameObject.SetActive(false);

        if (currentModelNum >= models.Length)
        {
            currentModelNum = 0;
        }

        meshRenderer = models[currentModelNum].GetComponent<MeshRenderer>();
        meshRenderer.gameObject.SetActive(true);

    }

    public void Init()
    {
        if (changeJellyColor)
        {
            int randomIndex = Random.Range(0, RunManager.instance.jellyBeanMats.Length);
            var mat = RunManager.instance.jellyBeanMats[randomIndex];
            Material[] materials = { mat };
            meshRenderer.materials = materials;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            var particle = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Particles/Jelly Particle"));

            particle.transform.position = transform.position;
            var renderer = particle.GetComponentInChildren<ParticleSystemRenderer>();
            renderer.material = meshRenderer.material;

            particle.GetComponentInChildren<ParticleSystem>().Play();

            RunManager.instance.TaskDelay(3, () => Managers.Pool.Push(particle.GetComponentInChildren<Poolable>()));

            RunManager.instance.AddCandyLength(value);
            gameObject.SetActive(false);

            EventManager.instance.CustomEvent(AnalyticsType.RUN, "Player Get Jelly", true, true);
        }

        if (other.CompareTag("Bullet") && value < maxValue)
        {
            value += 5f;
            meshRenderer.transform.localScale = new Vector3(meshRenderer.transform.localScale.x + 0.04f, meshRenderer.transform.localScale.y + 0.04f, meshRenderer.transform.localScale.z + 0.04f);
            meshRenderer.transform.DOPunchScale(Vector3.one * 0.15f, 0.15f, 1, 0.1f);
            other.GetComponentInChildren<Bullet>().Push();
            // Destroy(other.gameObject);
        }
    }
}
