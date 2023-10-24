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
}
