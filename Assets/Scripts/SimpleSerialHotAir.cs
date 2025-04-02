using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using System.Threading;
using UnityEngine.SceneManagement;

public class SimpleSerialHotAir : MonoBehaviour
{
    public static SimpleSerialHotAir Instance { get; private set; }
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
    public List<float> pressedValues;
    public List<bool> isLit;
    private string prevOutputString, outputString;
    private bool writeString, writingString;
    private Vector3 centerOfSphere;
    private Rigidbody rb;
    [SerializeField] float pushForce, dragForce;
    [SerializeField] LayerMask layerMask;
    [SerializeField] List<GameObject> torches;
    private bool isGrounded;
    private Vector3 damageDirection;
    [SerializeField] float damageMultiplier;
    private float invincibilityFrameTimer = 0f;
    private float resetTimer = 0f;
    void Start()
    {
        Instance = this;
        isPressed = new List<bool>();
        isLit = new List<bool>();
        pressedValues = new List<float>();
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
        if (invincibilityFrameTimer > 0) invincibilityFrameTimer -= Time.deltaTime;
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
            bool pressedAny = false;
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
                    pressedAny = true;
                    resetTimer = 0f;
                    //Debug.Log("child number" + i);
                    
                    isPressed[i] = true;
                    if (pressedValues[i] < 1) pressedValues[i] += Time.deltaTime;
                    Transform t = gameObject.transform.GetChild(i);
                    //Debug.Log(t.GetComponent<MeshRenderer>().sharedMaterials[0].name);
                    Material _baseMat = t.GetComponent<MeshRenderer>().materials[0];
                    Material _flameMat = t.GetComponent<MeshRenderer>().sharedMaterials[1];
                    if (!t.gameObject.GetComponent<AudioSource>().isPlaying)
                    {
                        //t.gameObject.GetComponent<AudioSource>().Play();
                    }
                    float _jitter = _baseMat.GetFloat("_jitter");
                    

                    //Debug.Log("jitter is " + _jitter);
                    if(_jitter < 1.5f)
                    {
                        _jitter += Time.deltaTime;
                        _baseMat.SetFloat("_jitter", _jitter);
                    }

                    float _flameHeight = _flameMat.GetFloat("_FlameHeight");
                    if (_flameHeight > -0.5f)
                    {
                        _flameMat.SetFloat("_FlameHeight", _flameHeight -= 15f * Time.deltaTime);
                    }

                    float _scale = t.localScale.x;
                    if(t.localScale.z < 0)
                    {
                        if (_scale < 1.33f)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                _scale + Time.deltaTime * 5,
                                _scale + Time.deltaTime * 5,
                                -(_scale + Time.deltaTime * 5));
                        }
                    }
                    else
                    {
                        if (_scale < 1.33f)
                        {
                            gameObject.transform.GetChild(i).localScale = new Vector3(
                                _scale + Time.deltaTime * 5,
                                _scale + Time.deltaTime * 5,
                                (_scale + Time.deltaTime * 5));
                        }
                    }
                    

                }
                else
                {
                    if(JoystickData[i] != null)
                    {
                        isPressed[i] = false;
                        if (pressedValues[i] > 0) pressedValues[i] = 0;

                        Transform t = gameObject.transform.GetChild(i);
                        //Debug.Log(t.GetComponent<MeshRenderer>().sharedMaterials[0].name);
                        Material _baseMat = t.GetComponent<MeshRenderer>().materials[0];
                        Material _flameMat = t.GetComponent<MeshRenderer>().sharedMaterials[1];
                        float _jitter = _baseMat.GetFloat("_jitter");


                        //Debug.Log("jitter is " + _jitter);
                        if (_jitter > 0f)
                        {
                            //_jitter -= Time.deltaTime;
                            _baseMat.SetFloat("_jitter", 0);
                        }

                        float _flameHeight = _flameMat.GetFloat("_FlameHeight");
                        if (_flameHeight < 1f)
                        {
                            _flameMat.SetFloat("_FlameHeight", 1f);
                        }

                        float _scale = t.localScale.x;
                        if (t.localScale.z < 0)
                        {
                            if (_scale > 1f)
                            {
                                gameObject.transform.GetChild(i).localScale = new Vector3(
                                    _scale - Time.deltaTime * 5,
                                    _scale - Time.deltaTime * 5,
                                    -(_scale - Time.deltaTime * 5));
                            }
                        }
                        else
                        {
                            if (_scale > 1f)
                            {
                                gameObject.transform.GetChild(i).localScale = new Vector3(
                                    _scale - Time.deltaTime * 5,
                                    _scale - Time.deltaTime * 5,
                                    _scale - Time.deltaTime * 5);
                            }
                        }

                    }


                }
                
            }
            if (!pressedAny) resetTimer += Time.deltaTime;
            if (resetTimer > 60f) SceneManager.LoadScene(0);
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
        int numPressed = 0;
        for(int i = 0; i < isPressed.Count; i++)
        {
            if (isPressed[i])
            {
                numPressed++;
                _pushDirection +=  (transform.position - gameObject.transform.GetChild(i).position).normalized * pressedValues[i];
            }
        }
        //print(_pushDirection);
        rb.AddForce(_pushDirection * pushForce * numPressed, ForceMode.Force);
        //if (!isGrounded)
        //{
        //    if(rb.velocity.y < 0) // falling
        //        rb.AddForce(new Vector3(0, -9.81f * 8f, 0));
        //    else
        //        rb.AddForce(new Vector3(0, -9.81f * 8f, 0));
        //}
        //if (rb.velocity.sqrMagnitude > 1f) rb.AddForce(new Vector3(-Mathf.Sign(rb.velocity.x) * (rb.velocity.x * rb.velocity.x), -Mathf.Sign(rb.velocity.y) * (rb.velocity.y * rb.velocity.y), -Mathf.Sign(rb.velocity.z) * (rb.velocity.z * rb.velocity.z)) * dragForce);

        for (int i = 0; i < torches.Count; i++)
        {
            torches[i].SetActive(transform.position.z > ((i / 2) * 30f) - 30f && transform.position.z < ((i / 2) * 30f) + 30f);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            isGrounded = true;
        }
        else if (collision.gameObject.CompareTag("Rock"))
        {

            if (collision.impulse.magnitude > 2000f && invincibilityFrameTimer <= 0)
            {
                invincibilityFrameTimer = 3f;
                DamageCounter.Instance.Damage();
                rb.AddForce((transform.position - collision.GetContact(0).point).normalized * damageMultiplier, ForceMode.Impulse);
            }
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            isGrounded = false;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("EndGoal"))
        {
            Debug.Log("END");
            Timer.Instance.Center();
            StartCoroutine(EndGame());
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
        {
            serialPort.WriteLine("11111111111111111111111");
            serialPort.Close();
        }
    }

    IEnumerator EndGame()
    {
        yield return new WaitForSeconds(10f);
        SceneManager.LoadScene(0);
    }
}