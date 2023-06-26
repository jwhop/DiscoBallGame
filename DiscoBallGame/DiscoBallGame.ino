// Define Pins
const int buttonPin1 = 10; //1 button
const int LEDPin1 = 11; //1 button

const int buttonPin2 = 8; //1 button
const int LEDPin2 = 9; //1 button

const int buttonPin3 = 6; //1 button
const int LEDPin3 = 7; //1 button

const int buttonPin4 = 4; //1 button
const int LEDPin4 = 5; //1 button

const int buttonPin5 = 2; //1 button
const int LEDPin5 = 3; //1 button

const int buttonPin6 = 15; //1 button
const int LEDPin6 = 14; //1 button

const int buttonPin7 = 17; //1 button
const int LEDPin7 = 16; //1 button

const int buttonPin8 = 19; //1 button
const int LEDPin8 = 18; //1 button

const int buttonPin9 = 21; //1 button
const int LEDPin9 = 20; //1 button

const int buttonPin10 = 26; //1 button
const int LEDPin10 = 27; //1 button

const int buttonPin11 = 30; //1 button
const int LEDPin11 = 31; //1 button

const int buttonPin12 = 34; //1 button
const int LEDPin12 = 35; //1 button

const int buttonPin13 = 38; //1 button
const int LEDPin13 = 39; //1 button

const int buttonPin14 = 42; //1 button
const int LEDPin14 = 43; //1 button

const int buttonPin15 = 46; //1 button
const int LEDPin15 = 47; //1 button

const int buttonPin16 = A14; //1 button
const int LEDPin16 = A15; //1 button

const int buttonPin17 = A12; //1 button
const int LEDPin17 = A13; //1 button

const int buttonPin18 = A10; //1 button
const int LEDPin18 = A11; //1 button

const int buttonPin19 = A8; //1 button
const int LEDPin19 = A9; //1 button

const int buttonPin20 = A6; //1 button
const int LEDPin20 = A7; //1 button

const int buttonPin21 = A4; //1 button
const int LEDPin21 = A5; //1 button

const int buttonPin22 = A2; //1 button
const int LEDPin22 = A3; //1 button

const int buttonPin23 = 50; //1 button
const int LEDPin23 = 51; //1 button

int LEDs[24] = {
  LEDPin1,LEDPin2, LEDPin3, LEDPin4, LEDPin5, LEDPin6, 
  LEDPin7, LEDPin8, LEDPin9, LEDPin10, LEDPin11, LEDPin12, 
  LEDPin13, LEDPin14, LEDPin15, LEDPin16, LEDPin17, LEDPin18, 
  LEDPin19, LEDPin20, LEDPin21, LEDPin22, LEDPin23
  }; 

int RedLEDs[5] = {LEDPin2, LEDPin8, LEDPin10, LEDPin13, LEDPin16};
int RedButtons[5] = {buttonPin2, buttonPin8, buttonPin10, buttonPin13, buttonPin16};

int BlueLEDs[6] = {LEDPin1, LEDPin5, LEDPin9, LEDPin11, LEDPin15, LEDPin20};
int BlueButtons[6] = {buttonPin1, buttonPin5, buttonPin9, buttonPin11, buttonPin15, buttonPin20};

int YellowLEDs[6] = {LEDPin4, LEDPin7, LEDPin12, LEDPin18, LEDPin21, LEDPin23};
int YellowButtonss[6] = {buttonPin4, buttonPin7, buttonPin12, buttonPin18, buttonPin21, buttonPin23};

int GreenLEDs[6] = {LEDPin3, LEDPin6, LEDPin14, LEDPin17, LEDPin19, LEDPin22};
int GreenButtons[6] = {buttonPin3, buttonPin6, buttonPin14, buttonPin17, buttonPin19, buttonPin22};

boolean pressed1,pressed2, pressed3, pressed4, pressed5, pressed6, pressed7, pressed8, pressed9, pressed10, pressed11, pressed12, pressed13, pressed14, pressed15, pressed16, pressed17, pressed18, pressed19, pressed20, pressed21, pressed22, pressed23;
bool pressingRed, pressingBlue, pressingYellow, pressingGreen;

int Buttons[24] = {
  buttonPin1, buttonPin2, buttonPin3, buttonPin4, buttonPin5, buttonPin6, 
  buttonPin7, buttonPin8, buttonPin9, buttonPin10, buttonPin11, buttonPin12,
  buttonPin13, buttonPin14, buttonPin15, buttonPin16, buttonPin17, buttonPin18,
  buttonPin19, buttonPin20, buttonPin21, buttonPin22, buttonPin23
};

int*currentArray = 0;
int*currentNotArray = 0;
int currentTargetNum = 0;
bool isTransitioning = false;
float transitionTimer = 2.0;
int level = 5;

int incomingByte = 0; // for incoming serial data


void setup() {
  //Serial.println(LEDPin18);
  //declare pinmode
  pinMode(buttonPin1, INPUT_PULLUP);  
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
  pinMode(buttonPin7, INPUT_PULLUP);
  pinMode(buttonPin8, INPUT_PULLUP);
  pinMode(buttonPin9, INPUT_PULLUP);
  pinMode(buttonPin10, INPUT_PULLUP);
  pinMode(buttonPin10, INPUT_PULLUP);
  pinMode(buttonPin11, INPUT_PULLUP);
  pinMode(buttonPin12, INPUT_PULLUP);
  pinMode(buttonPin13, INPUT_PULLUP);
  pinMode(buttonPin14, INPUT_PULLUP);
  pinMode(buttonPin15, INPUT_PULLUP);
  pinMode(buttonPin16, INPUT_PULLUP);
  pinMode(buttonPin17, INPUT_PULLUP);
  pinMode(buttonPin18, INPUT_PULLUP);
  pinMode(buttonPin19, INPUT_PULLUP);
  pinMode(buttonPin20, INPUT_PULLUP);
  pinMode(buttonPin21, INPUT_PULLUP);
  pinMode(buttonPin22, INPUT_PULLUP);  
  pinMode(buttonPin23, INPUT_PULLUP);


  pinMode(LEDPin1, OUTPUT);  
  pinMode(LEDPin2, OUTPUT);
  pinMode(LEDPin3, OUTPUT);
  pinMode(LEDPin4, OUTPUT);
  pinMode(LEDPin5, OUTPUT);
  pinMode(LEDPin6, OUTPUT);
  pinMode(LEDPin7, OUTPUT);
  pinMode(LEDPin8, OUTPUT);
  pinMode(LEDPin9, OUTPUT);
  pinMode(LEDPin10, OUTPUT);  
  pinMode(LEDPin11, OUTPUT);
  pinMode(LEDPin12, OUTPUT);
  pinMode(LEDPin13, OUTPUT);
  pinMode(LEDPin14, OUTPUT);
  pinMode(LEDPin15, OUTPUT);
  pinMode(LEDPin16, OUTPUT);
  pinMode(LEDPin17, OUTPUT);
  pinMode(LEDPin18, OUTPUT);
  pinMode(LEDPin19, OUTPUT);
  pinMode(LEDPin20, OUTPUT);
  pinMode(LEDPin21, OUTPUT);
  pinMode(LEDPin22, OUTPUT);
  pinMode(LEDPin23, OUTPUT);


  //open serial port (USB)
  //Serial.begin(115200);
  //disguise as a keyboard

  pressed1 = false;
  pressed2 = false;
  pressed3 = false;
  pressed4 = false;
  pressed5 = false;
  pressed6 = false;
  pressed7 = false;
  pressed8 = false;
  pressed9 = false;
  pressed10 = false;  
  pressed11 = false;
  pressed12 = false;
  pressed13 = false;
  pressed14 = false;
  pressed15 = false;
  pressed16 = false;
  pressed17 = false;
  pressed18 = false;
  pressed19 = false;
  pressed20 = false;
  pressed21 = false;
  pressed22 = false;
  pressed23 = false;

  pressingRed = false;  
  pressingBlue = false;
  pressingBlue = false;
  pressingGreen = false;

  isTransitioning = false;
  
  currentNotArray = new int[23];

  for(int i = 0; i < 23; i++)
  {
    currentNotArray[i] = i;
  }
  randomSeed(analogRead(0));

  SetUpButtons(level);

}

void SetUpButtons(int num)
{
  
  currentTargetNum = num;
  if(currentArray != 0)
  {
    //Serial.println("DELETING PREVIOUS ARRAY");
    delete [] currentArray;
  }
  if(currentNotArray != 0)
  {
    //Serial.println("DELETING PREVIOUS NOT ARRAY");
    delete [] currentNotArray;
  }
  
  currentNotArray = new int[23 - num];
  currentArray = new int[num];
  
  //copy all buttons to array, use this for assigning at random
  int copyArray [23] ;

  for(int i = 0; i < 23; i++)
  {
    copyArray[i] = i;
  }
  
  for (int i = 0; i < num; i++)
  {
    //add random number 
    int index = random(0, 23 - i);
    currentArray[i] = copyArray[index];
    //Serial.print("NEW INDEX IS : ");
    //Serial.println(index);
    for(int j = index; j < 23 - i; j++)
    {
      copyArray[j] = copyArray[j+1];
    }
    
  }
  int index = 0; 
  for(int i = 0; i < 23; i++)
  {
    bool InCurrent = false;
    for(int j = 0; j < num; j++)
    {

      if(currentArray[j] == i)
      {
        InCurrent = true;
      }
    }
    if(!InCurrent)
    {
      currentNotArray[index++] = i;
    }
  }
  
  for(int i = 0; i < num; i++)
  {
    digitalWrite(LEDs[currentArray[i]], HIGH);
  }
  
  
}

void loop() {
  //Serial.println("looping");
  /*if (Serial.available() > 0) {
    // read the incoming byte:
    String teststr = Serial.readString();  //read until timeout
    teststr.trim();      
    if(teststr.toInt() > 0 && teststr.toInt() < 23){
      SetUpButtons(teststr.toInt());
    }
  }*/
  bool success = true;
  for(int i = 0; i < currentTargetNum; i++)
  {
    if(digitalRead(Buttons[currentArray[i]]) == HIGH)
    {
      success = false;
    }
  }
  if(success && currentTargetNum > 0)
  {
    success = false;
    //currentTargetNum = -1;
    
    for(int i = 0; i < currentTargetNum; i++)
    {
      digitalWrite(LEDs[currentArray[i]], LOW);
    }
    
    for(int l = 0; l < 6; l++)
    {
      for(int i = 0; i < 6; i++)
      {

        digitalWrite(GreenLEDs[i], HIGH);

      }
      delay(350);
      for(int i = 0; i < 6; i++)
      {
        digitalWrite(GreenLEDs[i], LOW);
      }
      delay(350);

    }
    if(currentTargetNum == 23)
    {
      for(int l = 0; l < 50; l++)
      {
        for(int i = 0; i < 23; i++)
        {
          if(random(0,2) == 0)
          digitalWrite(LEDs[i], HIGH);
          else
          digitalWrite(LEDs[i], LOW);
        }
        delay(150);
      }
      for(int i = 0; i < 23; i++)
        {
          digitalWrite(LEDs[i], LOW);
        }
      level = 5;
      SetUpButtons(level);
    }
    else
    {
      level += 2;
      SetUpButtons(level);
    }

  }
  bool fail = false;
  for(int i = 0; i < 23 - currentTargetNum; i++)
  {
    //Serial.print(digitalRead(Buttons[0]));
    if(digitalRead(Buttons[currentNotArray[i]]) == LOW)
    {
      //Serial.println(currentNotArray[i]);
      //Serial.println(currentNotArray[i]);
      fail = true;
      break;
    }
  }
  if(fail)
  {
    for(int i = 0; i < currentTargetNum; i++)
    {
      digitalWrite(LEDs[currentArray[i]], LOW);
    }
    
    for(int l = 0; l < 3; l++)
    {
      for(int i = 0; i < 5; i++)
      {
        digitalWrite(RedLEDs[i], HIGH);
      }
      delay(500);
      for(int i = 0; i < 5; i++)
      {
        digitalWrite(RedLEDs[i], LOW);
      }
      delay(500);

    }
    level = 5;
    SetUpButtons(level);
  }

 
/*
if(!pressingRed)
{
    for(int i = 0; i < 5; i++)
  {
  
    if(random(0,2) == 0)
    {
      digitalWrite(RedLEDs[i], HIGH);
    }
    else
    {
      digitalWrite(RedLEDs[i], LOW);
    }
  }
}


  for(int i = 0; i < 6; i++)
  {
    if(random(0,2) == 0)
    {
      digitalWrite(BlueLEDs[i], HIGH);
    }
    else
    {
      digitalWrite(BlueLEDs[i], LOW);
    }
  }

  for(int i = 0; i < 6; i++)
  {
    if(random(0,2) == 0)
    {
      digitalWrite(YellowLEDs[i], HIGH);
    }
    else
    {
      digitalWrite(YellowLEDs[i], LOW);
    }
  }

  for(int i = 0; i < 6; i++)
  {
    if(random(0,2) == 0)
    {
      digitalWrite(GreenLEDs[i], HIGH);
    }
    else
    {
      digitalWrite(GreenLEDs[i], LOW);
    }
  }
  */


  //Old Code
  /*
  if (digitalRead(buttonPin1) == LOW) {
    if (!pressed1) {
      digitalWrite(LEDPin1, HIGH);
      pressed1 = true;
      Serial.print("pressed 1");
    }
  } else {
    if (pressed1) {
      digitalWrite(LEDPin1, LOW);
      pressed1 = false;
    }
  }

  if (digitalRead(buttonPin2) == LOW) {
    if (!pressed2) {
      digitalWrite(LEDPin2, HIGH);
      pressed2 = true;
      Serial.print("pressed 2");

    }
  } else {
    if (pressed2) {
      digitalWrite(LEDPin2, LOW);
      pressed2 = false;
    }
  }

  if (digitalRead(buttonPin3) == LOW) {
    if (!pressed3) {
      digitalWrite(LEDPin3, HIGH);
      pressed3 = true;
    }
  } else {
    if (pressed3) {
      digitalWrite(LEDPin3, LOW);
      pressed3 = false;
      Serial.print("pressed 3");

    }
  }

  if (digitalRead(buttonPin4) == LOW) {
    if (!pressed4) {
      digitalWrite(LEDPin4, HIGH);
      pressed4 = true;
      Serial.print("pressed 4");
    }
  } else {
    if (pressed4) {
      digitalWrite(LEDPin4, LOW);
      pressed4 = false;
    }
  }

  if (digitalRead(buttonPin5) == LOW) {
    if (!pressed5) {
      digitalWrite(LEDPin5, HIGH);
      pressed5 = true;
      Serial.print("pressed 5");
    }
  } else {
    if (pressed5) {
      digitalWrite(LEDPin5, LOW);
      pressed5 = false;
    }
  }

  if (digitalRead(buttonPin6) == LOW) {
    if (!pressed6) {
      digitalWrite(LEDPin6, HIGH);
      pressed6 = true;
      Serial.print("pressed 6");
    }
  } else {
    if (pressed6) {
      digitalWrite(LEDPin6, LOW);
      pressed6 = false;
    }
  }

  if (digitalRead(buttonPin7) == LOW) {
    if (!pressed7) {
      digitalWrite(LEDPin7, HIGH);
      pressed7 = true;
      Serial.print("pressed 7");
    }
  } else {
    if (pressed7) {
      digitalWrite(LEDPin7, LOW);
      pressed7 = false;
    }
  }

  if (digitalRead(buttonPin8) == LOW) {
    if (!pressed8) {
      digitalWrite(LEDPin8, HIGH);
      pressed8 = true;
      Serial.print("pressed 8");
    }
  } else {
    if (pressed8) {
      digitalWrite(LEDPin8, LOW);
      pressed8 = false;
    }
  }

  if (digitalRead(buttonPin9) == LOW) {
    if (!pressed9) {
      digitalWrite(LEDPin9, HIGH);
      pressed9 = true;
      Serial.print("pressed 9");
    }
  } else {
    if (pressed9) {
      digitalWrite(LEDPin9, LOW);
      pressed9 = false;
    }
  }

  if (digitalRead(buttonPin10) == LOW) {
    if (!pressed10) {
      digitalWrite(LEDPin10, HIGH);
      pressed10 = true;
      Serial.print("pressed 10");
    }
  } else {
    if (pressed10) {
      digitalWrite(LEDPin10, LOW);
      pressed10 = false;
    }
  }

    if (digitalRead(buttonPin11) == LOW) {
    if (!pressed11) {
      digitalWrite(LEDPin11, HIGH);
      pressed11 = true;
      Serial.print("pressed 11");
    }
  } else {
    if (pressed11) {
      digitalWrite(LEDPin11, LOW);
      pressed11 = false;
    }
  }

    if (digitalRead(buttonPin12) == LOW) {
    if (!pressed12) {
      digitalWrite(LEDPin12, HIGH);
      pressed12 = true;
      Serial.print("pressed 12");
    }
  } else {
    if (pressed12) {
      digitalWrite(LEDPin12, LOW);
      pressed12 = false;
    }
  }

    if (digitalRead(buttonPin13) == LOW) {
    if (!pressed13) {
      digitalWrite(LEDPin13, HIGH);
      pressed13 = true;
      Serial.print("pressed 13");
    }
  } else {
    if (pressed13) {
      digitalWrite(LEDPin13, LOW);
      pressed13 = false;
    }
  }

    if (digitalRead(buttonPin14) == LOW) {
    if (!pressed14) {
      digitalWrite(LEDPin14, HIGH);
      pressed14 = true;
      Serial.print("pressed 14");
    }
  } else {
    if (pressed14) {
      digitalWrite(LEDPin14, LOW);
      pressed14 = false;
    }
  }

    if (digitalRead(buttonPin15) == LOW) {
    if (!pressed15) {
      digitalWrite(LEDPin15, HIGH);
      pressed15 = true;
      Serial.print("pressed 15");
    }
  } else {
    if (pressed15) {
      digitalWrite(LEDPin15, LOW);
      pressed15 = false;
    }
  }

    if (digitalRead(buttonPin16) == LOW) {
    if (!pressed16) {
      digitalWrite(LEDPin16, HIGH);
      pressed16 = true;
      Serial.print("pressed 16");
    }
  } else {
    if (pressed16) {
      digitalWrite(LEDPin16, LOW);
      pressed16 = false;
    }
  }

    if (digitalRead(buttonPin17) == LOW) {
    if (!pressed17) {
      digitalWrite(LEDPin17, HIGH);
      pressed17 = true;
      Serial.print("pressed 17");
    }
  } else {
    if (pressed17) {
      digitalWrite(LEDPin17, LOW);
      pressed17 = false;
    }
  }

    if (digitalRead(buttonPin18) == LOW) {
    if (!pressed18) {
      digitalWrite(LEDPin18, HIGH);
      pressed18 = true;
      Serial.print("pressed 18");
    }
  } else {
    if (pressed18) {
      digitalWrite(LEDPin18, LOW);
      pressed18 = false;
    }
  }

    if (digitalRead(buttonPin19) == LOW) {
    if (!pressed19) {
      digitalWrite(LEDPin19, HIGH);
      pressed19 = true;
      Serial.print("pressed 19");
    }
  } else {
    if (pressed19) {
      digitalWrite(LEDPin19, LOW);
      pressed19 = false;
    }
  }

    if (digitalRead(buttonPin20) == LOW) {
    if (!pressed20) {
      digitalWrite(LEDPin20, HIGH);
      pressed20 = true;
      Serial.print("pressed 20");
    }
  } else {
    if (pressed20) {
      digitalWrite(LEDPin20, LOW);
      pressed20 = false;
    }
  }

    if (digitalRead(buttonPin21) == LOW) {
    if (!pressed21) {
      digitalWrite(LEDPin21, HIGH);
      pressed21 = true;
      Serial.print("pressed 21");
    }
  } else {
    if (pressed21) {
      digitalWrite(LEDPin21, LOW);
      pressed21 = false;
    }
  }

    if (digitalRead(buttonPin22) == LOW) {
    if (!pressed22) {
      digitalWrite(LEDPin22, HIGH);
      pressed22 = true;
      Serial.print("pressed 22");
    }
  } else {
    if (pressed22) {
      digitalWrite(LEDPin22, LOW);
      pressed22 = false;
    }
  }

    if (digitalRead(buttonPin23) == LOW) {
    if (!pressed23) {
      digitalWrite(LEDPin23, HIGH);
      pressed23 = true;
      Serial.print("pressed 23");
    }
  } else {
    if (pressed23) {
      digitalWrite(LEDPin23, LOW);
      pressed23 = false;
    }
  }*/
  
  //delay(2);
}

void CheckRedButtons()
{
  
  for(int i = 0; i < 5; i++)
  {
    if(digitalRead(buttonPin2 == LOW))
    {
    }
  }
  pressingRed = false;

}

void CheckBlueButtons()
{

}

void CheckYellowButtons()
{
  
}

void CheckGreenButtons()
{
  
}
