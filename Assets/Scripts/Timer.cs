using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Timer : MonoBehaviour
{
    public float targetTime = 0.0f;
    private string minutesString, secondsString;
    [SerializeField] TextMeshProUGUI text;
    [SerializeField] TextMeshProUGUI centeredText, endText;
    private bool stopTime = false;
    public static Timer Instance { get; private set; }
    private void Start()
    {
        Instance = this;
        minutesString = "";
        secondsString = "";
    }
    void Update()
    {

        if(!stopTime) targetTime += Time.deltaTime;

        
        float seconds = Mathf.RoundToInt(targetTime);

        secondsString = seconds.ToString();
        
        //print("seconds is" + secondsString);

        text.text =  secondsString;
    }
    public void Center()
    {
        stopTime = true;
        text.enabled = false;
        centeredText.enabled = true;
        centeredText.text = targetTime.ToString();
        endText.enabled = true;
    }
    void timerEnded()
    {
        
    }
}
