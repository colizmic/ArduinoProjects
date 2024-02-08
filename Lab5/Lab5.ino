//Michael Colizza
// C++ code
//
//init. variables 
int button1State = 0;
int button2State = 0;

void setup()
{
  //sets pinmodes 
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  
}

void loop()
{
  //set variables = output of buttons
  int button1State = digitalRead(3);
  int button2State = digitalRead(2);
  
//checks variable reading and sends power to LED depending on the button's state
  if (button1State == LOW){
  	digitalWrite(13, HIGH);
  }
  else if (button2State == LOW){
  	digitalWrite(13, HIGH);
  }
  else if (button2State == LOW && button1State == LOW){
    digitalWrite(13, LOW);
    }
  else{
  digitalWrite(13, LOW);
  }
}
