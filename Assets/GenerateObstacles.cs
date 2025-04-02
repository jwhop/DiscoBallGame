using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateObstacles : MonoBehaviour
{
    [SerializeField] List<GameObject> WallOptions;
    [SerializeField] List<GameObject> HangingOptions;
    [SerializeField] Material rockMaterial;
    float zDistance = 7f;
    public static GenerateObstacles Instance { get; private set; }
    // Start is called before the first frame update
    void Start()
    {
        GenerateTerrain();
    }

    public void GenerateTerrain()
    {

        for (int i = 0; i < 40; i++)
        {
            zDistance += 20f;
            GameObject g = Instantiate(WallOptions[Random.Range(0, WallOptions.Count)], new Vector3(Random.Range(-20f, 20f), Random.Range(0f, 15f), zDistance), Quaternion.Euler(Random.Range(-20f, 20f), Random.Range(0f, 360f), Random.Range(-20f, 20f)));
            g.transform.localScale = new Vector3(Random.Range(40f, 70f), Random.Range(40f, 100f), Random.Range(40f, 70f));

            //g.transform.Translate(Vector3.forward * zDistance);
            g.GetComponent<MeshRenderer>().material = rockMaterial;

            int numStalactites = Random.Range(0, 5);
            for (int j = 0; j < numStalactites; j++)
            {
                GameObject s = Instantiate(HangingOptions[Random.Range(0, HangingOptions.Count)], new Vector3(Random.Range(-12f, 12f), Random.Range(19f, 50f), zDistance - 10), Quaternion.Euler(Random.Range(-20f, 20f), Random.Range(0f, 360f), 180f + Random.Range(-20f, 20f)));

                s.transform.localScale = new Vector3(Random.Range(40f, 70f), Random.Range(40f, 100f), Random.Range(40f, 70f));
                s.GetComponent<MeshRenderer>().material = rockMaterial;

            }


        }
    }
}
