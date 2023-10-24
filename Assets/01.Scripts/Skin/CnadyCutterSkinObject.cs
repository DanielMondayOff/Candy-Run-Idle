using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Cutter Skin", menuName = "Skin/Cutter")]
public class CnadyCutterSkinObject : SkinObject
{
    public float cuttingSpeedBonus;

    public override string GetStatText()
    {
        string text = "";

        if (cuttingSpeedBonus > 0)
            text += "Cutting Speed + " + "<b><color=#D2FFBD>" + cuttingSpeedBonus * 100 + "%" + "</color></b>";

        return text;
    }
}
