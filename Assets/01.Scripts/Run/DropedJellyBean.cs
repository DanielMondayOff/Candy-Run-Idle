using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class DropedJellyBean : MonoBehaviour
{

    [SerializeField] MeshRenderer meshRenderer;

    public float value = 50f;
    public float maxValue = 200f;

    private void Start()
    {
        Init();
    }

    public void Init()
    {
        int randomIndex = Random.Range(0, RunManager.instance.jellyBeanMats.Length);
        var mat = RunManager.instance.jellyBeanMats[randomIndex];
        Material[] materials = { mat };
        meshRenderer.materials = materials;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            RunManager.instance.AddCandyLength(value);
            gameObject.SetActive(false);
        }

        if (other.CompareTag("Bullet") && value < maxValue)
        {
            value += 10f;
            meshRenderer.transform.localScale = new Vector3(meshRenderer.transform.localScale.x + 0.04f, meshRenderer.transform.localScale.y + 0.04f, meshRenderer.transform.localScale.z + 0.04f);
            meshRenderer.transform.DOPunchScale(Vector3.one * 0.15f, 0.15f, 1, 0.1f);
            other.GetComponentInChildren<Bullet>().Push();
            // Destroy(other.gameObject);
        }
    }
}
