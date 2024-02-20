// C++ code
//
//Michael Colizza
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, INPUT);
  pinMode(1, OUTPUT);
  int buttonState = 0;
}


void loop()
{
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(8, LOW); 
  delay(1000);

checkButton();

  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(4, LOW);
  delay(1000);

checkButton();


}

// check button
   void checkButton()
   {
    int buttonState = digitalRead(6);
    if(buttonState == LOW)
    {
    digitalWrite(4, HIGH);
    digitalWrite(1, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    digitalWrite(1, LOW);
   }
   }
