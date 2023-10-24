using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New idlePlayer Skin", menuName = "Skin/IdlePlayer")]

public class IdlePlayerSkin : SkinObject
{
    public float moveSpeedBonus;
    public float stackBonus;

    public Mesh skinMesh;
}
