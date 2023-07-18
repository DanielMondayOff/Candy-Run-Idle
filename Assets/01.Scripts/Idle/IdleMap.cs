using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleMap : MonoBehaviour
{
    public OrderLine[] orderLines;

    [SerializeField] Transform[] customerSpawnPoints;
    public Transform GetRandomSpawnPoint() => customerSpawnPoints[Random.Range(0, customerSpawnPoints.Length)];
}
