using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rock : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        transform.position = new Vector3(Random.Range(-100, 100), Random.Range(-100f, 100f), Random.Range(-200f, 200f));
        transform.eulerAngles = new Vector3(Random.Range(0f, 360f), Random.Range(-0f, 360f), Random.Range(-0f, 360f));
        float scale = Random.Range(50f, 500f);
        transform.localScale = new Vector3(scale, scale, scale);
    }
}
