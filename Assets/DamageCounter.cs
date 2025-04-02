using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class DamageCounter : MonoBehaviour
{
    public static DamageCounter Instance { get; private set; }
    [SerializeField] TextMeshProUGUI damageCounter;
    private int numDamages = 0;
    // Start is called before the first frame update
    void Start()
    {
        Instance = this;
    }

    public void Damage()
    {
        numDamages++;
        if (numDamages == 3)
        {
            SceneManager.LoadScene(2);
        }
        else
        {
            damageCounter.text = "lives: " + (3 - numDamages).ToString();
        }
    }
}
