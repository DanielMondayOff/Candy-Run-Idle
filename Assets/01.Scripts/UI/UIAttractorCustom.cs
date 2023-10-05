using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAttractorCustom : MonoBehaviour
{
    [SerializeField] Coffee.UIExtensions.UIParticleAttractor ui_ParticleAttractor;
    [SerializeField] ParticleSystem particle;
    [SerializeField] RectTransform attractorTarget;

    public void Init(Transform target, CandyItem item, UnityEngine.Events.UnityAction onAttract = null, System.Action OnCompleteParticle = null)
    {
        attractorTarget.SetParent(target);
        attractorTarget.anchoredPosition = Vector2.zero;

        var renderer = particle.GetComponent<ParticleSystemRenderer>().material = item.candy.particleMat;

        var emission = particle.emission;

        short cycle = (short)Mathf.Clamp((short)(item.count / 10), 1, 7);

        for (int i = 0; i <= cycle; i++)
        {
            int count = (cycle > i) ? 10 : item.count % 10;
            emission.SetBurst(i, new ParticleSystem.Burst(i * 0.8f / ((float)item.count / 5f), (short)count, (short)count, 1, 0.8f / ((float)item.count / 5f)));
        }

        if (onAttract != null)
            ui_ParticleAttractor.m_OnAttracted.AddListener(onAttract);

        particle.Play();

        if (OnCompleteParticle != null)
            RunManager.instance.TaskWaitUntil(() =>
            {
                OnCompleteParticle.Invoke(); Destroy(gameObject);
            }, () => (!particle.IsAlive()));
    }
}
