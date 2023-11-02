using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using Sirenix.OdinInspector;


public class CameraManager : SerializedMonoBehaviour
{

    [SerializeField] Dictionary<string, CinemachineVirtualCamera> cameraDic = new Dictionary<string, CinemachineVirtualCamera>();

    [SerializeField] CinemachineVirtualCamera currentVirtualCamera;

    [SerializeField] Transform[] firstFocusTrans;

    [SerializeField] Transform[] secondFocusTrans;


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
            if (key == "idle" || key == "follow")
            {
                Camera.main.GetComponent<CinemachineBrain>().m_DefaultBlend = new CinemachineBlendDefinition(CinemachineBlendDefinition.Style.Cut, 0f);
            }
            else
                Camera.main.GetComponent<CinemachineBrain>().m_DefaultBlend = new CinemachineBlendDefinition(CinemachineBlendDefinition.Style.EaseInOut, 1f);


            currentVirtualCamera.Priority = 10;
            find.Priority = 11;

            currentVirtualCamera = find;
        }

    }

    public void SwapCameraSec(Transform target)
    {
        var lastTarget = currentVirtualCamera.m_Follow;

        currentVirtualCamera.m_Follow = target;

        this.TaskDelay(2.5f, () => currentVirtualCamera.m_Follow = lastTarget);
    }

    public void FirstCameraFocus()
    {

        if (ES3.KeyExists("FirstCameraFocus"))
            return;

        ES3.Save<bool>("FirstCameraFocus", true);

        var lastTarget = currentVirtualCamera.m_Follow;

        currentVirtualCamera.m_Follow = firstFocusTrans[0];
        this.TaskDelay(2.5f, () => currentVirtualCamera.m_Follow = firstFocusTrans[1]);
        this.TaskDelay(5f, () => currentVirtualCamera.m_Follow = lastTarget);

        // for (int i = 0; i < firstFocusTrans.Length; i++)
        // {
        //     this.TaskDelay(2.5f, () =>
        //     {
        //         if (i == (firstFocusTrans.Length - 1))
        //             currentVirtualCamera.m_Follow = lastTarget;
        //         else
        //         {
        //             currentVirtualCamera.m_Follow = firstFocusTrans[i];
        //         }
        //     });
        // }
    }

    public void SecondCameraFocus()
    {
        if (ES3.KeyExists("SecondCameraFocus"))
            return;

        ES3.Save<bool>("SecondCameraFocus", true);

        var lastTarget = currentVirtualCamera.m_Follow;

        currentVirtualCamera.m_Follow = secondFocusTrans[0];
        this.TaskDelay(2.5f, () => currentVirtualCamera.m_Follow = lastTarget);
    }
}