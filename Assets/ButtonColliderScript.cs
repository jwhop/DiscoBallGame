using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonColliderScript : MonoBehaviour
{
    int childNum;
    // Start is called before the first frame update
    void Start()
    {
        childNum = transform.GetSiblingIndex();
        //print(childNum);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            //SimpleSerial.Instance.isLit[childNum] = true;
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            //SimpleSerial.Instance.isLit[childNum] = false;
        }
    }
}
