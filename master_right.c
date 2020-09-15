// Include the required Wire library for I2C<br>
//MASTER-RIGHT HAND
#include<Wire.h>
const int RflexPin1 = A0;
const int RflexPin2 = A1;
const int RflexPin3 = A2;
const int RflexPin4 = A3;
const int RflexPin5 = A6;
int x = 0;
void setup()
{
  // Start the I2C Bus as Master
  Wire.begin(); 
  Serial.begin(9600);
}
void loop() {
  int r1;
  int r2;
  int r3;
  int r4;
  int r5;
r1 = analogRead(RflexPin1);
  Serial.print("sensor 1: ");
 Serial.println(r1);
 //delay(1000); 
 r2 = analogRead(RflexPin2);
  Serial.print("sensor 2: ");
 Serial.println(r2);
  //delay(1000);
  r3 = analogRead(RflexPin3);
  Serial.print("sensor 3: ");
 Serial.println(r3);
  //delay(1000);
  r4 = analogRead(RflexPin4);
  Serial.print("sensor 4: ");
  Serial.println(r4);
  //delay(1000);
  r5 = analogRead(RflexPin5);
  Serial.print("sensor 5: ");
  Serial.println(r5);
  delay(1000);
 if((r1<200)&&(r1>185) && (r2<245)&&(r2>225) && (r3<160)&&(r3>140)  && (r4<160)&&(r4>140) && (r5<130)&&(r5>110) ) 
        {
          x=1;
          //Serial.println("HELP") ; 
                       }
 //delay(1000);
 if((r1<200)&&(r1>190) && (r2<250)&&(r2>240) && (r3<150)&&(r3>130)  && (r4<200)&&(r4>180) && (r5<170)&&(r5>150) ) 
        {
          x=2;
          //Serial.println("FAMILY") ; 
                       }
 //delay(1000);
 if((r1<210)&&(r1>180) && (r2<250)&&(r2>235) && (r3<145)&&(r3>120)  && (r4<160)&&(r4>150) && (r5<140)&&(r5>120) ) 
        {
          x=3;
          //Serial.println("PLAY") ; 
                       }
 //delay(1000);
 if((r1<200)&&(r1>190) && (r2<240)&&(r2>220) && (r3<140)&&(r3>130)  && (r4<150)&&(r4>130) && (r5<120)&&(r5>100) ) 
        {
          x=4;
          //Serial.println("PROMISE") ; 
                       }
 //delay(1000);
 
  Serial.println("The value of x is");
  Serial.print(x);        
 //delay(1000);
  Wire.beginTransmission(9); // transmit to device #9
  Wire.write(x);              // sends x 
  Wire.endTransmission();    // stop transmitting
  // x = 0; // `reset x once it gets 6
  delay(500);
}
