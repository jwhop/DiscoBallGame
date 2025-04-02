using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraGyro : MonoBehaviour
{
    public Transform CameraTransform;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetEulerAngles(float x, float y, float z)
    {
        CameraTransform.eulerAngles = new Vector3(-y, z, x);
        //CameraTransform.rotation = 
        //Quaternion.AngleAxis(z, Vector3.up) * Quaternion.AngleAxis(-y, Vector3.right) *
        //Quaternion.AngleAxis(x, Vector3.forward);
    }
}
