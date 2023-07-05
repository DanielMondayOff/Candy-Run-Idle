using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CandyHead : MonoBehaviour
{
    public Transform firePos;
    public GameObject bulletPrefab;

    public bool fireBullet = false;

    void Start()
    {
        this.TaskWhile(RunManager.instance.GetCurrentFireRate(), 1, GenerateBullet, () => fireBullet);
    }

    void GenerateBullet()
    {
        var bullet = Instantiate(bulletPrefab, firePos.transform.position, Quaternion.identity);

        bullet.transform.DOMoveZ(2000, 100);

        this.TaskDelay(RunManager.instance.GetBulletLength(),() =>  Destroy(bullet));
    }
}
