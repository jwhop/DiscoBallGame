using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using System.Threading;

public class SimpleSerial : MonoBehaviour
{
    public static SimpleSerial Instance { get; private set; }
    public String portName = "COM7";  // use the port name for your Arduino, such as /dev/tty.usbmodem1411 for Mac or COM3 for PC
    public GameObject leftPaddle, rightPaddle;

    private SerialPort serialPort = null; 
    private int baudRate = 115200;  // match your rate from your serial in Arduino
    private int readTimeOut = 100;

    private string serialInput;
    private bool isLeft = true;
    bool programActive = true;
    Thread thread;
    public List<bool> isPressed;
    public List<bool> isLit;
    private string prevOutputString, outputString;
    private bool writeString, writingString;
    Rigidbody rb;
    public List<float> pressedValues;
    public float pushForce;

    public bool IsTesting;
    void Start()
    {
        Instance = this;
        isPressed = new List<bool>();
        pressedValues = new List<float>();
        isLit = new List<bool>();
        for (int i = 0; i < 23; i++)
        {
            isPressed.Add(false);
            isLit.Add(false);
            pressedValues.Add(0);
        }
        prevOutputString = "";
        outputString = "";
        writeString = false;
        writingString = false;
        rb = GetComponent<Rigidbody>();
        if (IsTesting)
        {

        }
        else
        {
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
                Debug.Log("message is " + e.Message);
            }
            thread = new Thread(new ThreadStart(ProcessData));  // serial events are now handled in a separate thread
            thread.Start();
            StartCoroutine(WriteToSerial("11111111111111111111111"));
        }
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

    void ControllerUpdate()
    {
        if (serialInput != null && serialInput != "" && serialInput.Contains("|"))
        {
            string[] JoystickData = serialInput.Split('|');  // parses using semicolon ; into a string array called strEul. I originally was sending Euler angles for gyroscopes

            for (int i = 0; i < JoystickData.Length; i++)
            {
                if (int.Parse(JoystickData[i]) == 1)
                {

                    isPressed[i] = true;
                    if (pressedValues[i] < 1) pressedValues[i] += Time.deltaTime;

                    Transform t = gameObject.transform.GetChild(i);
                    if (!t.gameObject.GetComponent<AudioSource>().isPlaying)
                    {
                        //t.gameObject.GetComponent<AudioSource>().Play();
                    }
                    if (t.localScale.x == 0.2f)
                    {
                        //if (t.localScale.z < 1.2)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                t.localScale.z + 1 * Time.deltaTime);
                        }
                    }
                    else
                    {
                        //if (t.localScale.z < 6)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                t.localScale.z + 5 * Time.deltaTime);
                        }
                    }

                }
                else
                {
                    isPressed[i] = false;
                    if (pressedValues[i] > 0) pressedValues[i] = 0;

                    Transform t = gameObject.transform.GetChild(i);
                    //if (t.localScale.x ==0.2f)
                    //{
                    //    if (t.localScale.z > 0.2f)
                    //    {
                    //        gameObject.transform.GetChild(i).localScale = new Vector3(
                    //            t.localScale.x,
                    //            t.localScale.y,
                    //            Mathf.Max(0.2f, t.localScale.z - 1 * Time.deltaTime));
                    //    }
                    //}
                    //else
                    //{
                    //    if (t.localScale.z > 1)
                    //    {
                    //        gameObject.transform.GetChild(i).localScale = new Vector3(
                    //            t.localScale.x,
                    //            t.localScale.y,
                    //            Mathf.Max(1, t.localScale.z - 5 * Time.deltaTime));
                    //    }
                    //}
                }

            }
        }

        outputString = "";

        for (int i = 0; i < isLit.Count; i++)
        {
            if (isLit[i] == true)
            {
                outputString += "0";
            }
            else
            {
                outputString += "1";
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

    void TestUpdate()
    {
        
        for (int i = 0; i < isPressed.Count; i++)
        {
            if (isPressed[i])
            {
                if (!Input.GetKey((KeyCode)i + 97))
                {
                    isPressed[i] = false;
                    continue;
                }

                if (pressedValues[i] < 1) pressedValues[i] += Time.deltaTime;

                Transform t = gameObject.transform.GetChild(i);
                
                if (t.localScale.x == 0.2f)
                {
                    //if (t.localScale.z < 1.2)
                    {
                        gameObject.transform.GetChild(i).localScale = new Vector3(
                            t.localScale.x,
                            t.localScale.y,
                            t.localScale.z + 1 * Time.deltaTime);
                    }
                }
                else
                {
                    //if (t.localScale.z < 6)
                    {
                        gameObject.transform.GetChild(i).localScale = new Vector3(
                            t.localScale.x,
                            t.localScale.y,
                            t.localScale.z + 5 * Time.deltaTime);
                    }
                }

            }
            else
            {
                if (pressedValues[i] > 0) pressedValues[i] = 0;

                Transform t = gameObject.transform.GetChild(i);
                if (t.localScale.x == 0.2f)
                {
                    if (t.localScale.z > 0.2f)
                    {
                        gameObject.transform.GetChild(i).localScale = new Vector3(
                            t.localScale.x,
                            t.localScale.y,
                            Mathf.Max(0.2f, t.localScale.z - 1 * Time.deltaTime));
                    }
                }
                else
                {
                    if (t.localScale.z > 1)
                    {
                        gameObject.transform.GetChild(i).localScale = new Vector3(
                            t.localScale.x,
                            t.localScale.y,
                            Mathf.Max(1, t.localScale.z - 5 * Time.deltaTime));
                    }
                }
            }

        }
    }
    void Update()
    {
        if(!IsTesting)
        {
            ControllerUpdate();
        }
        else 
        {
            TestUpdate();
        }
    }

    public static float map(float value, float leftMin, float leftMax, float rightMin, float rightMax)
    {
        return rightMin + (value - leftMin) * (rightMax - rightMin) / (leftMax - leftMin);
    }
    private void FixedUpdate()
    {
        //Vector3 _pushDirection = Vector3.zero;
        //int numPressed = 0;
        //for (int i = 0; i < isPressed.Count; i++)
        //{
        //    if (isPressed[i])
        //    {
        //        numPressed++;
        //        _pushDirection += -1 * (transform.position - gameObject.transform.GetChild(i).position).normalized * pressedValues[i];
        //    }
        //}
        ////print(_pushDirection);
        //rb.AddForce(_pushDirection * pushForce * numPressed, ForceMode.Force);
    }
    public void OnDisable()  // attempts to closes serial port when the gameobject script is on goes away
    {
        if (!IsTesting)
        {
            serialPort.WriteLine("11111111111111111111111");

            programActive = false;
            if (serialPort != null && serialPort.IsOpen)
                serialPort.Close();
        }
    }

    void OnGUI()
    {
        Event e = Event.current;
        if (e.isKey && (int)e.keyCode >= 97 && (int)e.keyCode <= 118)
        {
            if (e.type.ToString() == "KeyDown")
            {
                int keyNum = (int)e.keyCode;
                Debug.Log("key down!");
                isPressed[keyNum - 97] = true;
            }
            else if (e.type.ToString() == "KeyUp")
            {
                int keyNum = (int)e.keyCode;
                Debug.Log("key up!");

                isPressed[keyNum - 97] = false;
            }
        }
    }
}