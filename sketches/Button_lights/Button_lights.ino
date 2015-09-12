//KGs 2nd thing she made by he self
int led = 13;       //This LED is green
int led2 = 12;      //This LED is green
int led3 = 11;      //This LED is yellow
int led4 = 10;      //This LED is yellow
int led5 = 9;       //This LED is red
int led6 = 8  ;       //This LED is red
int button=2;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);   
  pinMode(led4, OUTPUT);  
  pinMode(led5, OUTPUT);   
  pinMode(led6, OUTPUT);
  pinMode(button,INPUT);
}

// the loop routine runs 20:
 void loop ( ){ 
   for(int i=0;i<10;i) {
      int b = digitalRead(button);
      if (b != 1) {
        digitalWrite(led, HIGH);    
  delay(100);   
   digitalWrite(led2, HIGH);    
  delay(100);  
    digitalWrite(led3, HIGH);    
  delay(100);   
   digitalWrite(led4, HIGH);    
  delay(100);  
   digitalWrite(led5, HIGH);    
  delay(100);   
   digitalWrite(led6, HIGH);
  delay(100);     
      } else {
      digitalWrite(led, HIGH);    
  delay(100);   
   digitalWrite(led2, HIGH);    
  delay(100);  
    digitalWrite(led3, HIGH);    
  delay(100);   
   digitalWrite(led4, HIGH);    
  delay(100);  
   digitalWrite(led5, HIGH);    
  delay(100);   
   digitalWrite(led6, HIGH);
  delay(100);  
   digitalWrite(led6, LOW);    
  delay(100);   
   digitalWrite(led5, LOW);    
  delay(100);  
    digitalWrite(led4, LOW);    
  delay(100);   
   digitalWrite(led3, LOW);    
  delay(100);  
   digitalWrite(led2, LOW);    
  delay(100);   
   digitalWrite(led, LOW);    
  delay(100);  
     
      }
   }
 }   
    

