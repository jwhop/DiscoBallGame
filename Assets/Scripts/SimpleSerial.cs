using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using System.Threading;

public class SimpleSerial : MonoBehaviour
{

    public String portName = "COM7";  // use the port name for your Arduino, such as /dev/tty.usbmodem1411 for Mac or COM3 for PC
    public GameObject leftPaddle, rightPaddle;

    private SerialPort serialPort = null; 
    private int baudRate = 115200;  // match your rate from your serial in Arduino
    private int readTimeOut = 100;

    private string serialInput;
    private bool isLeft = true;
    bool programActive = true;
    Thread thread;
    List<bool> isPressed;
    
    void Start()
    {
        isPressed = new List<bool>();
        for (int i = 0; i < 23; i++)
        {
            isPressed.Add(false);
        }
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
            Debug.Log(e.Message);
        }
        thread = new Thread(new ThreadStart(ProcessData));  // serial events are now handled in a separate thread
        thread.Start();        
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

    void Update()
    {
        if (serialInput != null)
        {
            string[] JoystickData = serialInput.Split('|');  // parses using semicolon ; into a string array called strEul. I originally was sending Euler angles for gyroscopes
            
            for (int i = 0; i < JoystickData.Length; i++)
            {
                if (int.Parse(JoystickData[i]) == 1)
                {
                    
                    isPressed[i] = true;
                    Transform t = gameObject.transform.GetChild(i);
                    if (!t.gameObject.GetComponent<AudioSource>().isPlaying)
                    {
                        t.gameObject.GetComponent<AudioSource>().Play();
                    }
                    if(t.localScale.x == 0.2f)
                    {
                        if (t.localScale.z < 1.2)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                t.localScale.z + 10*Time.deltaTime);
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
                    print(t.localScale.x);
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
    }

    public static float map(float value, float leftMin, float leftMax, float rightMin, float rightMax)
    {
        return rightMin + (value - leftMin) * (rightMax - rightMin) / (leftMax - leftMin);
    }

    public void OnDisable()  // attempts to closes serial port when the gameobject script is on goes away
    {
        programActive = false;
        if (serialPort != null && serialPort.IsOpen)
            serialPort.Close();
    }
}