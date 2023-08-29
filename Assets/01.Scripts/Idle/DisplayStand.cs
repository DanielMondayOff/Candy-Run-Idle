using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayStand : MonoBehaviour
{
    [SerializeField] Transform[] displayPoints;
    [SerializeField] IdleDisplayItem[] items;

    [SerializeField] Transform[] customerPoint;
    [SerializeField] List<IdleCustomer> customerList = new List<IdleCustomer>();

    public void StackItem()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("Player"))
        {

        }
    }

    private void OnTriggerExit(Collider other)
    {

    }
}
