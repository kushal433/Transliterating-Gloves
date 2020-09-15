Final program
#include math.h
#include wire.h
const int MPU=0x68; 
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
int AcXcal,AcYcal,AcZcal,GyXcal,GyYcal,GyZcal,tcal; 
double t,tx,tf,pitch,roll;
String newprint,prevprint;
void setup() 
{
  int flexPin1 = A0;      //for flex sensor on pinky finger
int flexPin2 = A1;      //for flex sensor on ring finger
int flexPin3 = A2;      //for flex sensor on middle finger
int flexPin4 = A3;      //for flex sensor on index finger
int flexPin5 = A4;      //for flex sensor on thumb 
int fp;         // variable for analog value from pinky finger
int fr;        // variable for analog value from ring finger
int fm        // variable for analog value from middle finger
int fi;        // variable for analog value from index finger
int ft;       // variable for analog value from thumb
const int vcc=5;
  Wire.begin(); 
    Wire.beginTransmission(MPU); 
    Wire.write(0x6B); 
    Wire.write(0);  
    Wire.endTransmission(true); 
    Serial.begin(9600);
}

void loop() 
{
 fp=analogRead(flexPin1);
   Serial.println("Analog Value on pinky finger is "fp) 
  fr=analogRead(flexPin2);
   Serial.println("Analog Value on ring finger"fr)
  fm=analogRead(flexPin3);
   Serial.println("Analog Value on middle finger"fm)
  fi=analogRead(flexPin4);
   Serial.println("Analog Value on index finger"fi)
  ft=analogRead(flexPin5);
   Serial.println("Analog Value on thumb"ft)
    Wire.beginTransmission(MPU); 
    Wire.write(0x3B); 
    Wire.endTransmission(false); 
    Wire.requestFrom(MPU,14,true);   
    AcXcal = -950;
    AcYcal = -300;
    AcZcal = 0;
    GyXcal = 480;
    GyYcal = 170;
    GyZcal = 210;
    AcX=Wire.read()<<8|Wire.read(); // 0x3B (ACCEL_XOUT_H) 0x3C (ACCEL_XOUT_L)  
    AcY=Wire.read()<<8|Wire.read(); // 0x3D (ACCEL_YOUT_H) 0x3E (ACCEL_YOUT_L) 
    AcZ=Wire.read()<<8|Wire.read(); // 0x3F (ACCEL_ZOUT_H) 0x40 (ACCEL_ZOUT_L)
    GyX=Wire.read()<<8|Wire.read(); // 0x43 (GYRO_XOUT_H) 0x44 (GYRO_XOUT_L)
    GyY=Wire.read()<<8|Wire.read(); // 0x45 (GYRO_YOUT_H) 0x46 (GYRO_YOUT_L)
    GyZ=Wire.read()<<8|Wire.read(); // 0x47 (GYRO_ZOUT_H) 0x48 (GYRO_ZOUT_L) 
    getAngle(AcX,AcY,AcZ); 
    void getAngle(int Ax,int Ay,int Az) 
{
    double x = Ax;
    double y = Ay;
    double z = Az;
    pitch = atan(x/sqrt((y*y) + (z*z))); 
    roll = atan(y/sqrt((x*x) + (z*z))); 
    pitch = pitch * (180.0/3.14);
    roll = roll * (180.0/3.14) ;
}
if(fp>200 && fr>200 && fm>140  && fi<180 ) 
        {
                    if(ft>240)
         {
            if( AcX >2500 && abs(AcX) <8000)
            {
              a=1;
            }
            if(abs(AcY) > 1000 && abs(AcY) < 8000 )
            {
              b=1;
            }
           if(a==1 && b==1)
            {
            newprint = "Hello ";
            printing();
              a=0;
              b=0;
            }
         }
        
       #endif
   
    }
}
void printing()
{
  if(prevprint == newprint)
  {
    
  }
  else
  {
    Serial.println(newprint);
  }
  prevprint = newprint;
  delay(500);
  
} 

}
