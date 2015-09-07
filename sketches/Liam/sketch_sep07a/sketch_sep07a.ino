#include <Keypad.h>
 
char keys[4][4]={
 {'1','2','3','A'},
 {'4','5','6','B'},
 {'7','8','9','C'},
 {'*','0','#','D'}};
 
byte rowPin[4]={5,6,7,8};
byte colPin[4]={9,10,11,12};


 
int red = 3;
int green = 2;

Keypad keypad=Keypad(makeKeymap(keys),rowPin,colPin,4,4);
 
void setup()
{
 Serial.begin(9600);
}

char key() {
 char pressed = 0;
 while(!pressed) {
   pressed=keypad.getKey();
 } 
 return pressed;
}
 
int w = 72;
void loop()
{
  delay(100);
  char pressed=key();
  if(pressed)
  {
   digitalWrite(red, HIGH);
   Serial.print(pressed);
  } else {
   digitalWrite(red, LOW);
   Serial.print('.');
  }
  
  if (w == 0) {
   Serial.println("");
   w = 72;
  }
}

