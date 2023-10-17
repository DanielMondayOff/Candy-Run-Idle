#if UNITY_STANDALONE || UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyMatChanger : MonoBehaviour
{
    [SerializeField] MeshRenderer meshRenderer;
    [SerializeField] Material[] mats;

    int jellyMatNum = 0;


    void Update()
    {
        if (Input.GetKeyDown(KeyCode.G))
        {
            jellyMatNum++;

            if (jellyMatNum >= mats.Length)
                jellyMatNum = 0;

            var mat = mats[jellyMatNum];
            Material[] materials = { mat };
            meshRenderer.materials = materials;
        }
        else if (Input.GetKeyDown(KeyCode.F))
        {
            transform.rotation = transform.rotation.eulerAngles.x == 90 ? Quaternion.Euler(new Vector3(0, 0, 0)) : Quaternion.Euler(new Vector3(90, 0, 0));
        }
    }

    public void RotateCandy(Vector3 rotate)
    {
        transform.rotation = Quaternion.Euler(rotate);
    }

    public void CandySize(Vector3 size)
    {
        transform.localScale = size;
    }
}
#endif
