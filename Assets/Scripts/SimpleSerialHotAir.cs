using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using System.Threading;

public class SimpleSerialHotAir : MonoBehaviour
{
    public static SimpleSerialHotAir Instance { get; private set; }
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
    private Vector3 centerOfSphere;
    private Rigidbody rb;
    [SerializeField] float pushForce, dragForce;
    [SerializeField] LayerMask layerMask;
    private bool isGrounded;
    void Start()
    {
        Instance = this;
        isPressed = new List<bool>();
        isLit = new List<bool>();
        for (int i = 0; i < 23; i++)
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
        StartCoroutine(WriteToSerial("11111111111111111111111"));
        centerOfSphere = transform.position;
        rb = GetComponent<Rigidbody>();
        isGrounded = true;
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
        RaycastHit hit;
        // Does the ray intersect any objects excluding the player layer
        if (Physics.Raycast(transform.position, Vector3.down, out hit, 7f, layerMask))
        {
            isGrounded = true;
            Debug.DrawRay(transform.position, Vector3.down * hit.distance, Color.yellow);
        }
        else
        {
            isGrounded = false;
        }
        print(isGrounded);
        //print(serialInput);
        if (serialInput != null && serialInput != "" && serialInput.Contains("|"))
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
                        //t.gameObject.GetComponent<AudioSource>().Play();
                    }
                    if(t.localScale.x == 0.2f)
                    {
                        if (t.localScale.z < 1.2)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                t.localScale.z + 1 *Time.deltaTime);
                        }
                    }
                    else
                    {
                        if(t.localScale.z < 6)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                t.localScale.x,
                                t.localScale.y,
                                t.localScale.z + 5*Time.deltaTime);
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

    public void FixedUpdate()
    {
        Vector3 _pushDirection = Vector3.zero;
        for(int i = 0; i < isPressed.Count; i++)
        {
            if (isPressed[i])
            {
                _pushDirection +=  (gameObject.transform.GetChild(i).position - transform.position).normalized;
            }
        }
        print(_pushDirection);
        rb.AddForce(_pushDirection * pushForce, ForceMode.Force);
        //if (!isGrounded) rb.AddForce(new Vector3(0, -2.81f, 0));
        if(rb.velocity.magnitude > 1f) rb.AddForce(new Vector3(-rb.velocity.x, -rb.velocity.y, -rb.velocity.z) * dragForce);
    }

    //private void OnCollisionEnter(Collision collision)
    //{
    //    if (collision.gameObject.CompareTag("Ground"))
    //    {
    //        isGrounded = true;
    //    }
    //}

    //private void OnCollisionExit(Collision collision)
    //{
    //    if (collision.gameObject.CompareTag("Ground"))
    //    {
    //        isGrounded = false;
    //    }
    //}
    public static float map(float value, float leftMin, float leftMax, float rightMin, float rightMax)
    {
        return rightMin + (value - leftMin) * (rightMax - rightMin) / (leftMax - leftMin);
    }

    public void OnDisable()  // attempts to closes serial port when the gameobject script is on goes away
    {
        serialPort.WriteLine("11111111111111111111111");

        programActive = false;
        if (serialPort != null && serialPort.IsOpen)
            serialPort.Close();
    }
}