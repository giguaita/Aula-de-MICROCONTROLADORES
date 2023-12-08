// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  if (analogRead(A0) > 600) {
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
}