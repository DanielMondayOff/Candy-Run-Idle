using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Sirenix.OdinInspector;

public class BuildObject : SaveableObject
{
    [SerializeField] BuildSaveData savedata;

    [SerializeField] Collector collector;

    private void Awake() {
        Sleep();
    }

    override protected void NewGuid()
    {
        Guid = System.Guid.NewGuid().ToString();

        savedata.SetGuid(Guid);

#if UNITY_EDITOR
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }


    [Button("ForceBuild")]
    public void Build(bool direct = false)
    {
        gameObject.SetActive(true);

        if (direct)
        {
            transform.localScale = Vector3.one;
            OnCompleteBuild();
        }
        else
        {
            transform.DOScale(Vector3.one, 0.5f).SetEase(Ease.OutBack).OnComplete(OnCompleteBuild);
        }


        void OnCompleteBuild()
        {

        }
    }

    public void Sleep()
    {
        transform.localScale = Vector3.zero;
        gameObject.SetActive(false);
    }
}

[System.Serializable]
public class BuildSaveData
{
    [SerializeField] string guid;
    public void SetGuid(string _guid) => guid = _guid;
    [SerializeField] bool complete;
    [SerializeField] bool currentMoneyStack;
}
