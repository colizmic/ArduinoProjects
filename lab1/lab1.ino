//Michael Colizza
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);               // wait for a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11, LOW);
}
