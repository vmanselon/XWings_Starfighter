String message = "coucou";

void setup() {
  Serial.begin(9600);
  while (!Serial) { // needed to keep leonardo/micro from starting too fast!
    delay(10);
  }
}

void loop()
{
  Serial.println(message);
  Serial.flush();
  delay(1000);
}


