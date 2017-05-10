 //float xpin,ypin,zpin;
 //int xprev,xfwd,xdiff;
const int xpin = A0; // x-axis of the accelerometer
const int ypin = A1; // y-axis of the accelerometer
const int zpin = A2; // z-axis of the accelerometer
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
   
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  //xprev=analogRead(xpin);
  //delay(333);
  Serial.print("DATA,");
  Serial.print("TIME,");
  Serial.print("TIMER,");
  //Serial.println("CMD");
  //Serial.println("ARG");
  //Serial.print("xAxis=");
  
  Serial.print(analogRead(xpin));
  Serial.print(",");
  //Serial.print(",yAxis=");
  Serial.print(analogRead(ypin));
  Serial.print(",");
  //Serial.print(",zAxis=");
  Serial.println(analogRead(zpin));
  delay(500);
  /*
  xfwd=analogRead(xpin);
  xdiff=xfwd-xprev;//406-262=144 range 144 to 80
  if(xdiff < 0)
  xdiff = xdiff * (-1);
  //Serial.println(xdiff);
  if(xdiff >= 20 && xdiff <=100)
  Serial.println("Hand rotated");
  */
 
}
