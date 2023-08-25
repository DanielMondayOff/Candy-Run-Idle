using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using Sirenix.OdinInspector;


public class CameraManager : SerializedMonoBehaviour
{

    [SerializeField] Dictionary<string, CinemachineVirtualCamera> cameraDic = new Dictionary<string, CinemachineVirtualCamera>();

    [SerializeField] CinemachineVirtualCamera currentVirtualCamera;

    public static CameraManager instance;

    private void Awake()
    {
        instance = this;
    }
    /*  */
    public void ChangeCamera(string key)
    {
        CinemachineVirtualCamera find = null;
        cameraDic.TryGetValue(key, out find);

        if (find == null)
        {
            Debug.LogError("해당 Key값의 카메라를 찾지 못했습니다.");
            return;
        }
        else
        {
            currentVirtualCamera.Priority = 10;
            find.Priority = 11;

            currentVirtualCamera = find;

            currentVirtualCamera.gameObject.SetActive(false);
            currentVirtualCamera.gameObject.SetActive(true);

        }

    }
}
