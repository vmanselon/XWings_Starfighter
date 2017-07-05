
//LED Analog in
int led = 13;

void setup() {
  Serial.begin (9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
}

void loop() {
  if (Serial.available() > 0)
  {
    // read Serial
    char ltr = Serial.read();

    /* Turn ON LED */
    if (ltr == 'o')
    {
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    }

    /* Turn OFF LED */
    else if (ltr == 'f')
    {
      digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
    }

  }
}


