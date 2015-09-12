//KGs first thing she made by he self
int led = 13;       //This LED is green
int led2 = 12;      //This LED is green
int led3 = 11;      //This LED is yellow
int led4 = 10;      //This LED is yellow
int led5 = 9;       //This LED is red
int led6 = 8;       //This LED is red
int spkr = 6;       // The Speaker

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);   
  pinMode(led4, OUTPUT);  
  pinMode(led5, OUTPUT);   
  pinMode(led6, OUTPUT);  
  pinMode(spkr, OUTPUT);  
}

int light(uint8_t state) {
  static uint8_t leds[5] = {0,0,0,0,0};
  static tones = 0;
  digitalWrite(led, state); 
  digitalWrite(led2, leds[0]); 
  digitalWrite(led3, leds[1]); 
  digitalWrite(led4, leds[2]); 
  digitalWrite(led5, leds[3]); 
  digitalWrite(led6, leds[4]); 
  delay(500);
  if (leds[0] != state)  {
    if (state == HIGH) {
       tone(spkr,400);
    } else {
     noTone(spkr);
    } 
  }
  for(int i = 4;i > 0;i--) {
    leds[i] = leds[i-1];
  }
  leds[0] = state;
}

void symbol(char *c) {
 for(;*c != 0;c++) {
  switch(*c) {
   case '.': 
   case '*':
    light(HIGH);
    light(LOW);
    break;
   case '-': 
    light(HIGH);
    light(HIGH);
    light(HIGH);
    light(LOW);
    break;
   case ' ': 
    light(LOW);
    light(LOW);
    light(LOW);
    break;
  }
 }   
 light(LOW);
 light(LOW);
 light(LOW);
}

void word(char *c) {
 for(;*c != 0;c++) {
    switch(*c) {
        case 'A': symbol(".-"); break;
        case 'B': symbol("-..."); break;
        case 'C': symbol("-.-."); break;
        case 'D': symbol("-.."); break;
        case 'E': symbol("."); break;
        case 'F': symbol("..-."); break;
        case 'G': symbol("--."); break;
        case 'H': symbol("...."); break;
        case 'I': symbol(".."); break;
        case 'J': symbol(".---"); break;
        case 'K': symbol("-.-"); break;
        case 'L': symbol(".-.."); break;
        case 'M': symbol("--"); break;
        case 'N': symbol("-."); break;
        case 'O': symbol("---"); break;
        case 'P': symbol(".--."); break;
        case 'Q': symbol("--.-"); break;
        case 'R': symbol(".-."); break;
        case 'S': symbol("..."); break;
        case 'T': symbol("-"); break;
        case 'U': symbol("..-"); break;
        case 'V': symbol("...-"); break;
        case 'W': symbol(".--"); break;
        case 'X': symbol("-..-"); break;
        case 'Y': symbol("-.--"); break;
        case 'Z': symbol("--.."); break;
        case '1': symbol(".----"); break;
        case '2': symbol("..---"); break;
        case '3': symbol("...--"); break;
        case '4': symbol("....-"); break;
        case '5': symbol("....."); break;
        case '6': symbol("-...."); break;
        case '7': symbol("--..."); break;
        case '8': symbol("---.."); break;
        case '9': symbol("----."); break;
        case '0': symbol("-----"); break;
        case '/': symbol("-..-."); break;
        case '+': symbol(".-.-."); break;
        case '=': symbol("-...-"); break;
        case '.': symbol(".-.-.-"); break;
        case ',': symbol("--..--"); break;
        case '?': symbol("..--.."); break;
        case '(': symbol("-.--."); break;
        case ')': symbol("-.--.-"); break;
        case '-': symbol("-....-"); break;
        case '"': symbol(".-..-."); break;
        case '_': symbol("..--.-"); break;
        case '\'': symbol(".----."); break;
        case ':': symbol("---..."); break;
        case ';': symbol("-.-.-."); break;
        case '$': symbol("...-..-"); break;
        case ' ': symbol(" "); break;
    }
 }   
}

// the loop routine runs 20:
void loop ( ){
  word("LIAM  ");
}
