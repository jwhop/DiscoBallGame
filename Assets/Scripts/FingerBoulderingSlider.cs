using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class FingerBoulderingSlider : MonoBehaviour
{

    public static FingerBoulderingSlider Instance { get; private set; }
    public float timerLength;
    public bool isActive;
    private float timer;
    private Slider slider;
    private int numTimesReset;
    public AnimationCurve TimerLengthOverTime;
    private float totalScore;
    public TextMeshProUGUI totalScoreCounter;
    public GameObject EndScreen;
    public TextMeshProUGUI endScore;

    // Start is called before the first frame update
    void Start()
    {
        Instance = this;
        timerLength = 10f;
        timer = 10f;
        slider = GetComponent<Slider>();
        numTimesReset = -1;
        isActive = false;
        totalScore = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isActive) return;
        totalScore += Time.deltaTime;
        totalScoreCounter.text = ((int)totalScore).ToString();
        timer -= Time.deltaTime;
        if(timer < 0)
        {
            EndGame();
        }
        slider.value = timer / timerLength;
    }
    public void StartTimer()
    {
        isActive = true;
    }
    public void ResetTimer()
    {
        numTimesReset++;
        timerLength = 10 - numTimesReset * 0.5f;
        timer = timerLength;
    }
    public void EndGame()
    {
        isActive = false;
        endScore.text = ((int)totalScore).ToString();
        EndScreen.SetActive(true);
        totalScoreCounter.gameObject.SetActive(false);
    }
}
