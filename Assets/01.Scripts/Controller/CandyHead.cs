using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyHead : MonoBehaviour
{
    public Transform firePos;
    public GameObject bulletPrefab;

    public bool fireBullet = false;


    // Start is called before the first frame update
    void Start()
    {
        this.TaskWhile(RunManager.instance.GetCurrentFireRate(), 1, GenerateBulletbullet, () => fireBullet);
    }

    void GenerateBulletbullet()
    {
        var bullet = Instantiate(bulletPrefab, firePos.transform.position, Quaternion.identity);

        bullet.
    }
}
