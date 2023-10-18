using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Cutter Skin", menuName = "Skin/Cutter")]
public class CnadyCutterSkinObject : ScriptableObject
{
    public int id;
    public float cuttingSpeedBonus;
    public Sprite icon;

}
