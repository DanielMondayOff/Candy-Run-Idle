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

    public CandyObject candyObject;

    public void GenerateBullet()
    {
        if (!StageManager.instance.IsAllowJellyGun)
            return;

        if (RunManager.instance.tripleShot)
        {
            Transform[] bullets = new Transform[3];

            for (int i = 0; i < 3; i++)
            {
                var bullet = Instantiate(bulletPrefab, firePos.transform.position, Quaternion.identity);
                bullets[i] = bullet.transform;
                this.TaskDelay(RunManager.instance.GetBulletRange() / 100f, () => { if (bullet != null) bullet.GetComponentInChildren<Bullet>().Push(); });
            }

            bullets[0].transform.DOMove(bullets[0].transform.position + new Vector3(500, 0, 3000), 100);
            bullets[1].transform.DOMove(bullets[0].transform.position + new Vector3(0, 0, 3000), 100);
            bullets[2].transform.DOMove(bullets[0].transform.position + new Vector3(-500, 0, 3000), 100);
        }
        else
        {
            var bullet = Instantiate(bulletPrefab, firePos.transform.position, Quaternion.identity);

            bullet.transform.DOMoveZ(3000, 100);

            this.TaskDelay(RunManager.instance.GetBulletRange() / 100f, () => { if (bullet != null) bullet.GetComponentInChildren<Bullet>().Push(); });
        }
    }

    public void CutCandy(List<GameObject> list, float length = 100f, bool torque = true)
    {
        var candy = Instantiate(cutCandyPrefab, cutCandyPos.position, Quaternion.identity);

        candy.GetComponentInChildren<SkinnedMeshRenderer>().materials = new Material[] {candyObject.mat};

        if (length < 50)
            length = 50;

        candy.transform.GetChild(0).transform.localScale = new Vector3(candy.transform.GetChild(0).transform.localScale.x, candy.transform.GetChild(0).transform.localScale.y, length / 1000f);

        if (torque)
            candy.GetComponentInChildren<Rigidbody>().AddTorque(Random.insideUnitSphere * Random.Range(3f, 10f), ForceMode.Impulse);

        list.Add(candy);

        //new Vector3(Random.Range(-0.1f, 0.1f), Random.Range(-0.1f, 0.1f), Random.Range(-0.1f, 0.1f)
    }

    public void UpgradeCandy()
    {
        candyObject = candyObject.nextCandy;

        GetComponentInChildren<SkinnedMeshRenderer>().materials = new Material[] { candyObject.mat };
    }

}
