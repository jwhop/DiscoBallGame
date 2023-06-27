using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class terrainScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Button"))
        {
            print("AAA " + other.gameObject.transform.GetSiblingIndex());
            SimpleSerial.Instance.isLit[other.gameObject.transform.GetSiblingIndex()] = true;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Button"))
        {
            SimpleSerial.Instance.isLit[other.gameObject.transform.GetSiblingIndex()] = false;
        }
    }
}
