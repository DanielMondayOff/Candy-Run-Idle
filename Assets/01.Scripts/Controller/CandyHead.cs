using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CandyHead : MonoBehaviour
{
    public Transform firePos;
    public GameObject bulletPrefab;

    public void GenerateBullet()
    {
        var bullet = Instantiate(bulletPrefab, firePos.transform.position, Quaternion.identity);

        bullet.transform.DOMoveZ(2000, 100);

        this.TaskDelay(RunManager.instance.GetBulletRange() / 100f,() =>  Destroy(bullet));
    }

  
}
