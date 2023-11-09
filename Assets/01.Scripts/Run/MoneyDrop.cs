using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyDrop : MonoBehaviour
{
    public int moneyValue;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            RunManager.instance.GetMoney(moneyValue);

            Managers.Pool.Push(GetComponent<Poolable>());

            // var particle = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Particles/DollarbillDirectional"));

            // particle.transform.position = transform.position;
            // particle.GetComponentInChildren<ParticleSystem>().Play();

            // this.TaskDelay(5, () => Managers.Pool.Push(particle.GetComponentInParent<Poolable>()));

            SaveManager.instance.GetMoney(moneyValue);

            EventManager.instance.CustomEvent(AnalyticsType.RUN, "GetDropMoney", true, true);

            var p = Managers.Pool.Pop(Resources.Load<GameObject>("Particles/UIAttractor_Money 1"), RunManager.instance.runGameUI.transform).GetComponentInChildren<UIAttractorCustom>();

            p.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
            p.transform.localScale = Vector3.one;

            Vector2 anchordPos = Camera.main.WorldToViewportPoint(transform.position);

            p.GetComponentInChildren<UIAttractorCustom>().Init(RunManager.instance.moneyImagePos, new Vector2(anchordPos.x * RunManager.instance.runGameUI.GetComponent<RectTransform>().sizeDelta.x, anchordPos.y * RunManager.instance.runGameUI.GetComponent<RectTransform>().sizeDelta.y)
            , OnCompleteParticle: () => { p.attractorTarget.transform.SetParent(p.transform); Managers.Pool.Push(p.GetComponent<Poolable>()); });
            p.GetComponentInChildren<ParticleSystem>().Play();


            //     MondayOFF.EventTracker.LogCustomEvent(
            // "RUN",
            // new Dictionary<string, string> { { "RUN_TYPE", "GetDropMoney" } }
            // );
        }

        if (other.CompareTag("Player2"))
        {
            var particle = Managers.Pool.Pop(Managers.Resource.Load<GameObject>("Particles/DollarbillDirectional"));

            particle.transform.position = transform.position;
            particle.GetComponentInChildren<ParticleSystem>().Play();

            this.TaskDelay(5, () => Managers.Pool.Push(particle.GetComponentInParent<Poolable>()));
            Managers.Pool.Push(GetComponent<Poolable>());

            var p = Managers.Pool.Pop(Resources.Load<GameObject>("Particles/UIAttractor_Money 2"), RunManager.instance.runGameUI.transform).GetComponentInChildren<UIAttractorCustom>();

            p.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
            p.transform.localScale = Vector3.one;
            Vector2 anchordPos = Camera.main.WorldToViewportPoint(transform.position);
            p.GetComponentInChildren<UIAttractorCustom>().Init(RunManager.instance.moneyImagePos, new Vector2(anchordPos.x * RunManager.instance.runGameUI.GetComponent<RectTransform>().sizeDelta.x, anchordPos.y * RunManager.instance.runGameUI.GetComponent<RectTransform>().sizeDelta.y)
            , OnCompleteParticle: () => { p.attractorTarget.transform.SetParent(p.transform); Managers.Pool.Push(p.GetComponent<Poolable>()); });
            p.GetComponentInChildren<ParticleSystem>().Play();

            RunRunManager.instance.AddMoney(5);
            RunRunManager.instance.AddScore(5);
        }
    }
}
