using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuppetSphereTest : MonoBehaviour
{
    private Rigidbody rb;
    public float power;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        rb.AddForce((Input.GetKey(KeyCode.Space) ? 1 : 0) * Vector3.up * power, ForceMode.Acceleration);
    }
}
