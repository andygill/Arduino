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
// **************************************************************************
// *                            Power Up Initial
// **************************************************************************
void setup() 
{ 
  Serial.begin(10420);                     //tell the Arduino to communicate with Make: it PCB
  delay(500);                              //delay 500ms
  line_following.line_following_setup();   //initialize the status of line following robot
  line_following.all_stop();               //all motors stop
}
// **************************************************************************
// *                            Main Loop 
// **************************************************************************
void go(int lhs,int rhs) {
  int MAX_SPEED = 100;
  lhs = min(max(lhs,-MAX_SPEED),MAX_SPEED);
  rhs = min(max(rhs,-MAX_SPEED),MAX_SPEED); // was lhs, bug found by Kay Gill
  rhs = rhs * 65;
  rhs = rhs / 50; // for different moters
  if (lhs != 0) lhs = 256 - lhs;
  if (rhs != 0) rhs = 256 - rhs;
  line_following.dc_write(DC_CMD_DIRA, lhs>=0 ? FW : BW);
  line_following.dc_write(DC_CMD_DIRB, rhs>=0 ? FW : BW);
  line_following.dc_write(DC_CMD_PWMA, abs(lhs));
  line_following.dc_write(DC_CMD_PWMB, abs(rhs));
}

void loop() 
{  
  go(50,50);
  delay(1000);
  go(-50,50);
  delay(500);
  go(50,50);
  delay(1000);
  go(50,-50);
  delay(500);
}

