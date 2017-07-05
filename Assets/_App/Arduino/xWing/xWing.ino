
//Motor x_Win
int motorPin1 = 6;
int motorPin2 = 3;


//Led Pins
int ledsPin = 9;

void setup() {
  Serial.begin (9600);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(ledsPin, OUTPUT);
  analogWrite(ledsPin, 0);
}

void loop() {
  if (Serial.available() > 0)
  {
    // read Serial
    char ltr = Serial.read();

    /* Turn ON LED */
    if (ltr == 'o')
    {
      TurnOnLED();
    }

    /* Turn OFF LED */
    else if (ltr == 'f')
    {
      TurnOffLED();
    }


    /* Open Wings */
    if (ltr == 'a')
    {
      OpenWings();
    }

    /* Close Wings */
    else if (ltr == 'z')
    {
      CloseWings();
    }

  }
}

void OpenWings() {
  analogWrite(motorPin1, 255);
  analogWrite(motorPin2, 0);
  delay(2000);
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
}


void CloseWings() {
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 255);
  delay(2000);
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
}

void TurnOnLED() {
  analogWrite(ledsPin, 255);
}

void TurnOffLED() {
  analogWrite(ledsPin, 0);
}

