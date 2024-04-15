const int dotDuration = 400;
const int dashDuration = 1200;
const int letterSpace = 400; // Space between letters

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(dotDuration);                     
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(dashDuration);                     
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
}

void B(){
  dash();
  dot();
  dot();
  dot();
}

void A(){
  dot();
  dash();
}

void I(){
  dot();
  dot();
}

void L(){
  dot();
  dash();
  dot();
  dot();
}

void E(){
  dot();
}

void Y(){
  dash();
  dot();
  dash();
  dash();
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(2000);                     
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  B();                    
  A();
  I();
  L();
  E();
  Y();
}


