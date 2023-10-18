using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New idlePlayer Skin", menuName = "Skin/IdlePlayer")]

public class IdlePlayerSkin : ScriptableObject
{
    public int id;
    public float moveSpeedBonus;
    public float stackBonus;
    public Sprite icon;
}
