using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RunEndLine : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && !RunManager.instance.isGameEnd)
        {
            switch (RunManager.instance.runGameType)
            {
                case RunGameType.Default:
                    RunManager.instance.StartCuttingCandy();
                    break;

                case RunGameType.CPI1:
                    RunManager.instance.EndCPI1Run();
                    break;
            }
        }
    }
}
