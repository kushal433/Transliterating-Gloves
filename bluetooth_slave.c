const int LflexPin1 = A0;
const int LflexPin2 = A1;
const int LflexPin3 = A2;
const int LflexPin4 = A3;
const int LflexPin5 = A6;
int x=0;
void setup() 
{
 Serial.begin(38400); // Default communication rate of the Bluetooth module
}
void loop() 
{
 if(Serial.available() > 0) // Checks whether data is comming from the serial port
   {
    x= Serial.read();
 } // Reads the data from the serial port
  int f1;
  int f2;
  int f3;
  int f4;
  int f5;
  f1 = analogRead(LflexPin1);
   // Serial.print("sensor 1: ");
 //Serial.println(f1);
  f2 = analogRead(LflexPin2);
    //Serial.print("sensor 1: ");
 //Serial.println(f2);
  f3 = analogRead(LflexPin3);
    //Serial.print("sensor 1: ");
 //Serial.println(f3);
  f4 = analogRead(LflexPin4);
    //Serial.print("sensor 1: ");
 //Serial.println(f4);
  f5 = analogRead(LflexPin5);
    //Serial.print("sensor 1: ");
 //Serial.println(f5);
  delay(1000);
   if((f1<195)&&(f1>180) && (f2<265)&&(f2>250) && (f3<170)&&(f3>150)  && (f4<200)&&(f4>185) && (f5<230)&&(f5>215) ) 
  {
     Serial.println("WHY") ; 
                       }
 //delay(1000);
  if((f1<170)&&(f1>160) && (f2<220)&&(f2>200) && (f3<125)&&(f3>115)  && (f4<175)&&(f4>160) && (f5<215)&&(f5>200) ) 
  {
     Serial.println("SORRY") ; 
                       }
 //delay(1000);
  if((f1<180)&&(f1>170) && (f2<280)&&(f2>260) && (f3<150)&&(f3>135)  && (f4<190)&&(f4>175) && (f5<230)&&(f5>215) ) 
  {
     Serial.println("ALWAYS") ; 
                       }
 //delay(1000);
  if((f1<185)&&(f1>170) && (f2<245)&&(f2>230) && (f3<150)&&(f3>140)  && (f4<170)&&(f4>160) && (f5<215)&&(f5>200) ) 
  {
     Serial.println("NO") ; 
                       }
 //delay(1000); 
 if(x==1)
{ 
  if((f1<210)&&(f1>185) && (f2<255)&&(f2>230) && (f3<160)&&(f3>140)  && (f4<245)&&(f4>215) && (f5<255)&&(f5>235) ) 
  {
     Serial.println("HELP") ; 
                       }
 //delay(1000);
  }
  if(x==2)
{ 
  if((f1<210)&&(f1>180) && (f2<255)&&(f2>225) && (f3<160)&&(f3>140)  && (f4<280)&&(f4>250) && (f5<245)&&(f5>220) ) 
  {
     Serial.println("FAMILY") ; 
                       }
 //delay(1000);
}
  if(x==3)
{ 
  if((f1<200)&&(f1>185) && (f2<295)&&(f2>270) && (f3<190)&&(f3>140)  && (f4<240)&&(f4>190) && (f5<230)&&(f5>210) ) 
  {
     Serial.println("PLAY") ; 
                       }
 //delay(1000);
  
}

  if(x==4)
{ 
  if((f1<160)&&(f1>140) && (f2<210)&&(f2>175) && (f3<210)&&(f3>100)  && (f4<190)&&(f4>145) && (f5<240)&&(f5>205) ) 
  {
     Serial.println("PROMISE") ; 
                       }
 //delay(1000);
  
}
 }

