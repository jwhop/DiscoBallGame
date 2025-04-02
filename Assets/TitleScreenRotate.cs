using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleScreenRotate : MonoBehaviour
{
    [SerializeField] float rotationForce;
    private float rotateX, rotateY, rotateZ;
    // Start is called before the first frame update
    void Start()
    {
        rotateX = Random.Range(-15f, 15f);
        rotateY = Random.Range(-15f, 15f);
        rotateZ = Random.Range(-15f, 15f);
    }

    // Update is called once per frame
    void Update()
    {
        transform.GetChild(0).Rotate((Vector3.up * rotateY * Time.deltaTime + Vector3.right * rotateX * Time.deltaTime + Vector3.forward * rotateZ * Time.deltaTime) * rotationForce);
    }
}
