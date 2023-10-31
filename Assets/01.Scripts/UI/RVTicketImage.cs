using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RVTicketImage : MonoBehaviour
{
    [SerializeField] Image rvImage;
    [SerializeField] GameObject ticketImage;

    [SerializeField] int requestTicket = 1;

    private void OnEnable()
    {
        this.TaskWaitUntil(() => OnChangeRvTicketCount(), () => SaveManager.instance != null);

        this.TaskWaitUntil(() => SaveManager.instance.rVTicketImageList.Add(this), () => SaveManager.instance != null);
    }

    private void OnDisable()
    {
        SaveManager.instance.rVTicketImageList.Remove(this);
    }

    public void OnChangeRvTicketCount()
    {
        if (SaveManager.instance.RVTicket >= requestTicket)
        {
            if (rvImage != null)
                rvImage.enabled = false;
            ticketImage.SetActive(true);
        }
        else
        {
            if (rvImage != null)
                rvImage.enabled = true;
            ticketImage.SetActive(false);
        }
    }
}
