using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SphereMovementTest : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.A))
        {
            transform.GetChild(0).localScale = new Vector3(transform.GetChild(0).localScale.x, transform.GetChild(0).localScale.y+0.1f, transform.GetChild(0).localScale.z);
        }
        if (Input.GetKey(KeyCode.D))
        {
            transform.GetChild(1).localScale = new Vector3(transform.GetChild(1).localScale.x, transform.GetChild(1).localScale.y + 0.1f, transform.GetChild(1).localScale.z);
        }
    }
}
