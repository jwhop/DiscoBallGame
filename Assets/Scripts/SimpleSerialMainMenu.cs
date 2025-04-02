using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using System.Threading;
using UnityEngine.SceneManagement;

public class SimpleSerialMainMenu : MonoBehaviour
{
    public static SimpleSerialMainMenu Instance { get; private set; }
    public String portName = "COM7";  // use the port name for your Arduino, such as /dev/tty.usbmodem1411 for Mac or COM3 for PC
    public GameObject leftPaddle, rightPaddle;

    private SerialPort serialPort = null; 
    private int baudRate = 19200;  // match your rate from your serial in Arduino
    private int readTimeOut = 100;

    private string serialInput;
    private bool isLeft = true;
    bool programActive = true;
    Thread thread;
    public List<bool> isPressed;
    public List<bool> isLit;
    private string prevOutputString, outputString;
    private bool writeString, writingString;
    private int currentSceneNum;
    private float outputStringTimer = 0f;
    void Start()
    {
        Instance = this;
        isPressed = new List<bool>();
        isLit = new List<bool>();
        for (int i = 0; i < 22; i++)
        {
            isPressed.Add(false);
            isLit.Add(false);
        }
        prevOutputString = "";
        outputString = "";
        writeString = false;
        writingString = false;
        try
        {
            serialPort = new SerialPort();
            serialPort.PortName = portName;
            serialPort.BaudRate = baudRate;
            serialPort.ReadTimeout = readTimeOut;
            serialPort.Open();
        }
        catch (Exception e)
        {
            Debug.Log("message is " +e.Message);
        }
        thread = new Thread(new ThreadStart(ProcessData));  // serial events are now handled in a separate thread
        thread.Start();
        StartCoroutine(WriteToSerial("1111111111111111111111"));
        currentSceneNum = SceneManager.GetActiveScene().buildIndex;
    }


    void ProcessData()
    {
        Debug.Log("Thread: Start");
        while (programActive)
        {
            try
            {
                serialInput = serialPort.ReadLine();
            }
            catch (TimeoutException)
            {

            }
        }
        Debug.Log("Thread: Stop");
    }

    IEnumerator WriteToSerial(string s)
    {
        if (writingString) yield break;
        else
        {
            if(serialPort != null)
            {
                writingString = true;
                serialPort.WriteLine(outputString);
                yield return new WaitForSeconds(0.11f);
                writingString = false;
            }
            
        }
        
    }

    void Update()
    {
        //print(serialInput);
        if (serialInput != null && serialInput != "" && serialInput.Contains("|"))
        {
            //string[] totalData = serialInput.Split('&');

            string[] JoystickData = serialInput.Split('|');  // parses using semicolon ; into a string array called strEul. I originally was sending Euler angles for gyroscopes

            for (int i = 0; i < JoystickData.Length; i++)
            {
                int currentData = 0;
                try
                {
                    currentData = int.Parse(JoystickData[i]);
                }
                catch (Exception e)
                {
                    Debug.Log(e);
                }
                if (currentData == 1)
                {
                    //Debug.Log(i);
                    if (currentSceneNum == 0 && (i == 2 || i == 5 || i == 12 || i == 15 || i == 17 || i == 20))
                    {
                        SceneManager.LoadScene(1);
                    }
                    isPressed[i] = true;
                    Transform t = gameObject.transform.GetChild(i);
                    if (!t.gameObject.GetComponent<AudioSource>().isPlaying)
                    {
                        //t.gameObject.GetComponent<AudioSource>().Play();
                    }
                    if(t.localScale.x == 0.2f)
                    {
                        if (t.localScale.z < 1.2)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                t.localScale.z + 10 *Time.deltaTime);
                        }
                    }
                    else
                    {
                        if(t.localScale.z < 6)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                t.localScale.z + 50*Time.deltaTime);
                        }
                    }
                    
                }
                else
                {
                    isPressed[i] = false;
                    Transform t = gameObject.transform.GetChild(i);
                    if (t.localScale.x ==0.2f)
                    {
                        if (t.localScale.z > 0.2f)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                Mathf.Max(0.2f, t.localScale.z - 10 * Time.deltaTime));
                        }
                    }
                    else
                    {
                        if (t.localScale.z > 1)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                Mathf.Max(1, t.localScale.z - 50 * Time.deltaTime));
                        }
                    }
                }
                
            }
        }
        outputStringTimer -= Time.deltaTime;
        if(outputStringTimer <= 0f)
        {
            outputStringTimer = 1f;
            outputString = "";

            for (int i = 0; i < isPressed.Count; i++)
            {
                outputString += UnityEngine.Random.Range(0f, 1f) < .4f ? "1" : "0";

            }
        }


        if (prevOutputString != outputString)
        {
            //print("printing");
            writeString = true;
            StartCoroutine(WriteToSerial(outputString));
        }
        else
        {
            writeString = false;
        }
        prevOutputString = outputString;
        serialInput = null;
    }

    public static float map(float value, float leftMin, float leftMax, float rightMin, float rightMax)
    {
        return rightMin + (value - leftMin) * (rightMax - rightMin) / (leftMax - leftMin);
    }

    public void OnDisable()  // attempts to closes serial port when the gameobject script is on goes away
    {

        programActive = false;
        if (serialPort != null && serialPort.IsOpen)
        {
            serialPort.WriteLine("11111111111111111111111");
            serialPort.Close();
        }
    }
}