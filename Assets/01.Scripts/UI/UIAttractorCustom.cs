using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAttractorCustom : MonoBehaviour
{
    [SerializeField] Coffee.UIExtensions.UIParticleAttractor ui_ParticleAttractor;
    [SerializeField] ParticleSystem particleSystem;
    [SerializeField] RectTransform attractorTarget;

    public void Init(Transform target, CandyItem item, UnityEngine.Events.UnityAction onAttract = null, System.Action OnCompleteParticle = null)
    {
        attractorTarget.SetParent(target);
        attractorTarget.anchoredPosition = Vector2.zero;

        var renderer = particleSystem.GetComponent<ParticleSystemRenderer>().material = item.candy.particleMat;

        var emission = particleSystem.emission;
        emission.SetBurst(0, new ParticleSystem.Burst(0, 5, 5, (short)(item.count / 5), 0.1f));

        if (onAttract != null)
            ui_ParticleAttractor.m_OnAttracted.AddListener(onAttract);

        particleSystem.Play();

        if (OnCompleteParticle != null)
            RunManager.instance.TaskWaitUntil(OnCompleteParticle, () => (!particleSystem.IsAlive()));
    }
}
