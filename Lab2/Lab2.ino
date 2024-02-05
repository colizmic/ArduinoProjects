//Michael Colizza
// C++ code
//
void setup()
{
  //set pin 10 to output a signal
  pinMode(10, OUTPUT);
}

void loop()
{
  //sets a variable equal to the output of potentiometer
  int value = analogRead(A0);
  //takes the value of A0(pin of potentiometer) and maps it to between 0-255 instead of the potentiometers raw range of 0-1023 
  int bright = map(value, 0, 1023, 0, 255);
  //sends the value var to pin 10 to be sent to LED
  analogWrite(10, bright);
  //prints the brightness variable 
  Serial.print(bright);
}
