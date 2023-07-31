using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RunEndLine : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && !RunManager.instance.isGameEnd)
        {
            RunManager.instance.StartCuttingCandy();
        }
    }
}
