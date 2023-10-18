using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinActiveUI : MonoBehaviour
{
    public int id;
    public SkinType type;

    [SerializeField] UnityEngine.UI.Image icon;

    public void Init(CnadyCutterSkinObject obj)
    {
        id = obj.id;
        icon.sprite = obj.icon;
    }

    public void OnClick()
    {
        switch (type)
        {
            case SkinType.Cutter:
                RunManager.instance.ChangeCutterSkin(id);
                break;

            case SkinType.IdlePlayer:
                IdleManager.instance.ChangeIdleSkin(id);
                break;
        }
    }
}

public enum SkinType
{
    Cutter = 0,
    IdlePlayer = 1
}
