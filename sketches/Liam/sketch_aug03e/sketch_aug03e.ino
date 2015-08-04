void setup() {
  // initialize serial communications (for debugging only):
  Serial.begin(9600);
}
int count = 0;
void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorReading);
  // map the analog input range (in this case, 400 - 1000 from the photoresistor)
  // to the output pitch range (120 - 1500Hz)
  // change the minimum and maximum input numbers below
  // depending on the range your sensor's giving:
  int thisPitch = map(sensorReading, 400, 1000, 120, 1500);

   count++;

  // play the pitch:
  if (count < 5000) {
   tone(9, thisPitch*2    .5, 10);
  }
  delay(1);        // delay in between reads for stability
}

