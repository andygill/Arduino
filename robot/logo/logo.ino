//********************************************************************************
// * File Name          : linefollow
// * Author             : RadioShack Corporation
// * Version            : V1.0
// * Date               : 2014/01/16
// * Description        : Optical sensors send feedback to PCB 
// *                      to make the robot follow a black line on a white background.
// ********************************************************************************
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ********************************************************************************

#include <MakeItRobotics.h>//include library
MakeItRobotics line_following;//declare object

void dc_write_init();
// **************************************************************************
// *                            Power Up Initial
// **************************************************************************
void setup() 
{ 
  Serial.begin(10420);                     //tell the Arduino to communicate with Make: it PCB
  delay(500);                              //delay 500ms
  line_following.line_following_setup();   //initialize the status of line following robot
  line_following.all_stop();               //all motors stop
  dc_write_init(); // Our version of all motors stop
}
// **************************************************************************
// *                            Main Loop 
// **************************************************************************


void dc_write(byte type, byte value) {
  static int types[] = { DC_CMD_DIRA, DC_CMD_DIRB, DC_CMD_PWMA, DC_CMD_PWMB };
  static int values[] = { -1, -1, -1, -1 };

  int ix;
  for(ix = 0;ix < 4;ix++) {
    if (type == types[ix]) {
      break; 
    }
  }
  // Abort if ix == 4?

  if (ix == 4 || values[ix] != value) {
    line_following.dc_write(type,value);
  }
  if (ix != 4) { 
    values[ix] = value;
  }
}  

void dc_write_init() {
  // all stop
  dc_write(DC_CMD_DIRA, FW);
  dc_write(DC_CMD_PWMA, 0);
  dc_write(DC_CMD_DIRB, FW);
  dc_write(DC_CMD_PWMB, 0);
}


void go(int lhs,int rhs,int wait) {
  int MAX_SPEED = 100;
  lhs = min(max(lhs,-MAX_SPEED),MAX_SPEED);
  rhs = min(max(rhs,-MAX_SPEED),MAX_SPEED); // was lhs, bug found by Kay Gill
  rhs = rhs * 65;
  rhs = rhs / 50; // for different moters
  dc_write(DC_CMD_DIRA, lhs>=0 ? FW : BW);
  dc_write(DC_CMD_PWMA, lhs == 0 ? 0 : 256 - abs(lhs));
  dc_write(DC_CMD_DIRB, rhs>=0 ? FW : BW);
  dc_write(DC_CMD_PWMB, rhs == 0 ? 0 : 256 - abs(rhs));
  delay(wait);
}

void forward(int sz) {
  go(100,100,sz); 
}
void backward(int sz) {
  go(-100,-100,sz); 
}

void stop() {
   go(0,0,0);
}

void wait() {
  while(1) { 
    delay(1000); // 1000 seconds 
  }
}

void flower() {
  forward(1000);
  go(-100,100,200);
  backward(1000);
  go(0,0,1000);

}

void fb(int l,int r) {
   go(l,r,500);
   go(-l,-r,500);
   stop();   
   delay(500);
}

void left() {
  go(-70,100,300);
  go(0,100,300);
  go(50,100,200);
  go(70,100,200);
     stop();   
  
}

void right() {
  go(100,-70,300);
  go(100,0,300);
  go(100,50,200);
  go(100,70,200);
     stop();   
  
}

void loop() 
{  
//  stop();
//  flower();
left(); right ();
  delay(1000);
}

