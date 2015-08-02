/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int s1 = 2;
int s2 = 3;
int s6 = 4;
int s7 = 5;
int s8 = 6;
int s9 = 7;
int s13 = 8;
int s14 = 9;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(s1, OUTPUT);     
  pinMode(s2, OUTPUT);     
  pinMode(s6, OUTPUT);     
  pinMode(s7, OUTPUT);     
  pinMode(s8, OUTPUT);     
  pinMode(s9, OUTPUT);     
  pinMode(s13,OUTPUT);     
  pinMode(s14,OUTPUT);
                                   }

// the loop routine runs over and over again forever:
void loop(){   // turn the LED on (HIGH is the voltage level)
                 // wait for a second
digitalWrite(s14,HIGH );    // turn the LED off by making the voltage LOW
digitalWrite(s13,LOW );                // wait for a second
digitalWrite(s9,HIGH );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,HIGH );  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, HIGH);                                                                                                                                                                                              
delay(100); 
digitalWrite(s6, LOW);                                                                                                                                                                                              
delay(500);
  
}
