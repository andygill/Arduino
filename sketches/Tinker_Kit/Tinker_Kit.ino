/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int out0 = 11;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(out0, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(out0,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(out0,LOW);   // turn the LED on (HIGH is the voltage level)
  delay(500);



 
}
