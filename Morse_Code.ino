// YUVRAJ BANSAL
// 211099(4799)
// TASK 2.1P

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

String myName = "";
int module  = 200;

//void will make the arduino to blink for 1 module (represents "dot")
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(module * 1);
  digitalWrite(LED_BUILTIN, LOW);    
  delay(module * 1); 
}

//void will make the arduino to blink for 3 module (represents "line")
void line()
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(module * 3);
  digitalWrite(LED_BUILTIN, LOW);    
  delay(module * 1); 
}

// Acknowledge the alphabets and run it's morse code
void morseName(String uv){

  for(int i = 0; i < uv.length(); i++)
  {
    switch(uv[i])
    {
      case 'a':
        dot();
        line();
        break;
      case 'b':
        line();
        dot();
        dot();
        dot();
        break;
      case 'c':
        line();
        dot();
        line();
        dot();
        break;
      case 'd':
        line();
        dot();
        dot();
        break;
      case 'e':
        dot();
        break;
      case 'f':
        line();
        dot();
        dot();
        line();
        dot();
        break;
      case 'g':
        line();
        line();
        dot();
        break;
      case 'h':
        dot();
        dot();
        dot();
        dot();
        break;
      case 'i':
        dot();
        dot();
        break;
      case 'j':
        dot();
        line();
        line();
        line();
        break;
      case 'k':
        line();
        dot();
        line();
        break;
      case 'l':
        dot();
        line();
        dot();
        dot();
        break;
      case 'm':
        line();
        line();
        break;
      case 'n':
        line();
        dot();
        break;
      case 'o':
        line();
        line();
        line();
        break;
      case 'p':
        dot();
        line();
        line();
        dot();
        break;
      case 'q':
        line();
        line();
        dot();
        line();
        break;
      case 'r':
        dot();
        line();
        dot();
        break;
      case 's':
        dot();
        dot();
        dot();
        break;
      case 't':
        line();
        break;
      case 'u':
        dot();
        dot();
        line();
        break;
      case 'v':
        dot();
        dot();
        dot();
        line();
        break;
      case 'w':
        dot();
        line();
        line();
        break;
      case 'x':
        line();
        dot();
        dot();
        line();
        break;
      case 'y':
        line();
        dot();
        line();
        line();
        break;
      case 'z':
        line();
        line();
        dot();
        dot();
        break;
    }
    delay(module * 3);
  }
}


// Acknowledge the Input from the User.
void loop() {
  while(Serial.available()) {           // check the Input from serial monitor
    char input = (char)Serial.read();   // reads the alphabets and then stores it
    myName += input;
  }
  morseName(myName);
}
