using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinObject : ScriptableObject
{
    public int id;
    public string skinName;
    public Sprite icon;
    public int requireRoyalCandy = 0;
    public int requireRV = 0;

    public bool basic = false;
    public bool onlyPurcahse = false;

    public virtual string GetStatText()
    {
        return null;
    }

    public virtual T GetCurrentSkinObject<T>()
    {
        return (T)default;
    }

    public virtual float GetMoveSpeedBonus()
    {
        return 0;
    }

    public virtual float GetCuttingSpeedBonus()
    {
        return 0;
    }

    public virtual int GetMaxStackBonus()
    {
        return 0;
    }
}
