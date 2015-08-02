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
digitalWrite(s9,LOW );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,LOW);  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, LOW);                                                                                                                                                                                              
digitalWrite(s2, LOW); 
digitalWrite(s1, LOW);                                                                                                                                                                                              
delay(100);
  
digitalWrite(s14,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s13,HIGH );                // wait for a second
digitalWrite(s9,LOW );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,LOW);  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, LOW);                                                                                                                                                                                              
digitalWrite(s2, LOW); 
digitalWrite(s1, LOW);                                                                                                                                                                                              
delay(100);
digitalWrite(s14,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s13,LOW );                // wait for a second
digitalWrite(s9,HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,LOW);  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, LOW);                                                                                                                                                                                              
digitalWrite(s2, LOW); 
digitalWrite(s1, LOW);                                                                                                                                                                                              
delay(100);
digitalWrite(s14,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s13,LOW );                // wait for a second
digitalWrite(s9,LOW );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,HIGH);  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, LOW);                                                                                                                                                                                              
digitalWrite(s2, LOW); 
digitalWrite(s1, LOW);                                                                                                                                                                                              
delay(100);
digitalWrite(s14,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s13,LOW );                // wait for a second
digitalWrite(s9,LOW );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,LOW);  
digitalWrite(s7,HIGH);    // turn the LED off by making the voltage LOW
digitalWrite(s6, LOW);                                                                                                                                                                                              
digitalWrite(s2, LOW); 
digitalWrite(s1, LOW);                                                                                                                                                                                              
delay(100);
digitalWrite(s14,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s13,LOW );                // wait for a second
digitalWrite(s9,LOW );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,LOW);  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, HIGH);                                                                                                                                                                                              
digitalWrite(s2, LOW); 
digitalWrite(s1, LOW);                                                                                                                                                                                              
delay(100);
digitalWrite(s14,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s13,LOW );                // wait for a second
digitalWrite(s9,LOW );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,LOW);  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, LOW);                                                                                                                                                                                              
digitalWrite(s2, HIGH); 
digitalWrite(s1, LOW);                                                                                                                                                                                              
delay(100);
digitalWrite(s14,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s13,LOW );                // wait for a second
digitalWrite(s9,LOW );   // turn the LED on (HIGH is the voltage level)
digitalWrite(s8,LOW);  
digitalWrite(s7,LOW );    // turn the LED off by making the voltage LOW
digitalWrite(s6, LOW);                                                                                                                                                                                              
digitalWrite(s2, LOW); 
digitalWrite(s1, HIGH);                                                                                                                                                                                              
delay(100);}
