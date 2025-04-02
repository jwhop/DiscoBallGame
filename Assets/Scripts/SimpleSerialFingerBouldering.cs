using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using System.Threading;
using UnityEngine.SceneManagement;

public class SimpleSerialFingerBouldering : MonoBehaviour
{
    public static SimpleSerialFingerBouldering Instance { get; private set; }
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

    public SomeGuyControllerScript SomeGuy1;
    public SomeGuyControllerScript SomeGuy2;
    public CameraGyro CamGyro;

    public List<int> IndexesToPress;
    public int newIndex;
    public GameObject EndUI;

    public bool HasStarted = false;
    void Start()
    {
        Instance = this;
        isPressed = new List<bool>();
        pressedValues = new List<float>();
        isLit = new List<bool>();
        for (int i = 0; i < 22; i++)
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
        //StartCoroutine(WriteToSerial("1111111111111111111111"));
        
        IndexesToPress = new List<int>();
        StartCoroutine(StartGame());
        newIndex = -1;
    }

    IEnumerator StartGame()
    {
        yield return new WaitForSeconds(1f);
        IndexesToPress.Add(5);
        IndexesToPress.Add(6);
        IndexesToPress.Add(14);
        IndexesToPress.Add(20);

        isLit[5] = true;
        isLit[6] = true;
        isLit[14] = true;
        isLit[20] = true;
        HasStarted = true;

        WriteNewString();
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
                serialPort.WriteLine(s);
                yield return new WaitForSeconds(0.11f);
                writingString = false;
            }
        }
    }


    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
        if (serialInput != null && serialInput != "" && serialInput.Contains("|"))
        {
            
            if (serialInput.Contains("&"))
            {
                string[] totalData = serialInput.Split('&');
                string cameraData = totalData[1];
                string[] cameraValues = cameraData.Split('|');
                float roll = float.Parse(cameraValues[0]);
                float pitch = float.Parse(cameraValues[1]);
                float yaw = float.Parse(cameraValues[2]);
                
                //CamGyro.SetEulerAngles(roll, pitch, yaw);
                transform.eulerAngles = new Vector3(roll, pitch, yaw);

                string[] JoystickData = totalData[0].Split('|');  // parses using semicolon ; into a string array called strEul. I originally was sending Euler angles for gyroscopes

                for (int i = 0; i < JoystickData.Length; i++)
                {
                    
                    if (int.Parse(JoystickData[i]) == 1)
                    {
                        if (!IndexesToPress.Contains(i) && HasStarted)
                        {
                            FingerBoulderingSlider.Instance.EndGame();
                        }
                        isPressed[i] = true;
                        if (pressedValues[i] < 1) pressedValues[i] += Time.deltaTime;

                        Transform t = gameObject.transform.GetChild(i);
                    }
                    else
                    {
                        isPressed[i] = false;
                        if (!IndexesToPress.Contains(i))
                        {
                            isLit[i] = false;
                            if(IndexesToPress.Count < 4 && HasStarted)
                            {
                                //EndUI.SetActive(true);
                                FingerBoulderingSlider.Instance.EndGame();
                            }
                        }
                        else if (i != newIndex && newIndex > 0)
                        {
                            IndexesToPress.Remove(i);
                            WriteNewString();
                        }
                        if (pressedValues[i] > 0) pressedValues[i] = 0;

                        Transform t = gameObject.transform.GetChild(i);

                    }

                }
            }
            
        }

        bool _pressingAll = false;
        for (int i = 0; i < IndexesToPress.Count; i++)
        {
            if (!isPressed[IndexesToPress[i]])
            {
                _pressingAll = false;
                break;
            }
            _pressingAll = true;
        }

        if (_pressingAll)
        {
            if (newIndex == -1)
            {
                FingerBoulderingSlider.Instance.StartTimer();
                SomeGuy1.IndexLeftFoot = IndexesToPress[0];
                SomeGuy1.IndexRightFoot = IndexesToPress[1];

                SomeGuy2.IndexLeftFoot = IndexesToPress[2];
                SomeGuy2.IndexRightFoot = IndexesToPress[3];
            }
            else
            {
                SomeGuy1.changedLeftFoot = false;
                SomeGuy1.changedRightFoot = false;

                SomeGuy2.changedLeftFoot = false;
                SomeGuy2.changedRightFoot = false;

                if (!IndexesToPress.Contains(SomeGuy1.IndexLeftFoot))
                {
                    SomeGuy1.IndexLeftFoot = newIndex;
                    SomeGuy1.changedLeftFoot = true;
                }
                else if (!IndexesToPress.Contains(SomeGuy1.IndexRightFoot))
                {
                    SomeGuy1.IndexRightFoot = newIndex;
                    SomeGuy1.changedRightFoot = true;

                }
                else if (!IndexesToPress.Contains(SomeGuy2.IndexLeftFoot))
                {
                    SomeGuy2.IndexLeftFoot = newIndex;
                    SomeGuy2.changedLeftFoot = true;

                }
                else if (!IndexesToPress.Contains(SomeGuy2.IndexRightFoot))
                {
                    SomeGuy2.IndexRightFoot = newIndex;
                    SomeGuy2.changedRightFoot = true;

                }
            }
            
            //swap it out for a new one (that is not pressed)
            int _newIndex = UnityEngine.Random.Range(0, 22);
            while (IndexesToPress.Contains(_newIndex))
            {
                _newIndex = UnityEngine.Random.Range(0, 22);
            }

            isLit[_newIndex] = true;
            newIndex = _newIndex;
            //update some guys

            

            SomeGuy1.PositionGuy(gameObject.transform.GetChild(SomeGuy1.IndexLeftFoot).position, gameObject.transform.GetChild(SomeGuy1.IndexRightFoot).position);
            SomeGuy2.PositionGuy(gameObject.transform.GetChild(SomeGuy2.IndexLeftFoot).position, gameObject.transform.GetChild(SomeGuy2.IndexRightFoot).position);

            
            //update timer
            FingerBoulderingSlider.Instance.ResetTimer();
            IndexesToPress.Add(_newIndex);
            WriteNewString();
        }

        //if(_numPressed == 2)
        //{
        //    SomeGuy1.PositionGuy(gameObject.transform.GetChild(indexesPressed[0]).position, gameObject.transform.GetChild(indexesPressed[1]).position);
        //}

        
        serialInput = null;
    }
    public void WriteNewString()
    {
        outputString = "";

        for (int i = 0; i < 22; i++)
        {
            outputString += IndexesToPress.Contains(i) ? "0" : "1";

        }

        StartCoroutine(WriteToSerial(outputString));
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
        serialPort.WriteLine("11111111111111111111111");

        programActive = false;
        if (serialPort != null && serialPort.IsOpen)
            serialPort.Close();
    }

}