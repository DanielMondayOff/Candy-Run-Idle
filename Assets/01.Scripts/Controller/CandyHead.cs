using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CandyHead : MonoBehaviour
{
    public Transform firePos;
    public GameObject bulletPrefab;

    public Transform cutCandyPos;
    public GameObject cutCandyPrefab;

    public void GenerateBullet()
    {
        var bullet = Instantiate(bulletPrefab, firePos.transform.position, Quaternion.identity);

        bullet.transform.DOMoveZ(3000, 100);

        this.TaskDelay(RunManager.instance.GetBulletRange() / 100f, () => { if (bullet != null) bullet.GetComponentInChildren<Bullet>().Push(); });
    }

    public void CutCandy(float length = 100f, bool torque = true)
    {
        var candy = Instantiate(cutCandyPrefab, cutCandyPos.position, Quaternion.identity);
        candy.transform.GetChild(0).transform.localScale = new Vector3(candy.transform.GetChild(0).transform.localScale.x, candy.transform.GetChild(0).transform.localScale.y, length / 1000f);

        if (torque)
            candy.GetComponentInChildren<Rigidbody>().AddTorque(Random.insideUnitSphere * Random.Range(3f, 10f), ForceMode.Impulse);

        //new Vector3(Random.Range(-0.1f, 0.1f), Random.Range(-0.1f, 0.1f), Random.Range(-0.1f, 0.1f)
    }

}
