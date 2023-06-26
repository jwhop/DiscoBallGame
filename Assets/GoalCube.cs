using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalCube : MonoBehaviour
{
    private float yValue;
    // Start is called before the first frame update
    void Start()
    {
        yValue = transform.position.y;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(Vector3.up * Time.deltaTime);
        transform.position = new Vector3(transform.position.x, yValue + Mathf.Sin(Time.time), transform.position.z);
    }
}
