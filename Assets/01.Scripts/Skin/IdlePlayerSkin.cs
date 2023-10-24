using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New idlePlayer Skin", menuName = "Skin/IdlePlayer")]

public class IdlePlayerSkin : SkinObject
{
    public float moveSpeedBonus;
    public float stackBonus;

    public Mesh skinMesh;

    public override string GetStatText()
    {
        string text = "";

        if (moveSpeedBonus > 0)
            text += "Move Speed + " + "<b><color=#D2FFBD>" + moveSpeedBonus * 100 + "%" + "</color></b>";

        if (stackBonus > 0)
            text += "\nMax Stack + " + "<b><color=#D2FFBD>" + stackBonus + "</color></b>";

        return text;
    }
}
