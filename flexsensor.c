const int flexPin1 = A0;
const int flexPin2 = A1;
const int flexPin3 = A2;
const int flexPin4 = A3;
const int flexPin5 = A6;
void setup()
{
 
     Serial.begin(9600);
}

void loop()
{
   
  int flexValue1;
  int flexValue2;
  int flexValue3;
  int flexValue4;
  int flexValue5;
  flexValue1 = analogRead(flexPin1);
  Serial.print("sensor 1: ");
  Serial.println(flexValue1);
 delay(1000); 
 flexValue2 = analogRead(flexPin2);
  Serial.print("sensor 2: ");
 Serial.println(flexValue2);
  delay(1000);
  flexValue3 = analogRead(flexPin3);
  Serial.print("sensor 3: ");
 Serial.println(flexValue3);
  delay(1000);
  flexValue4 = analogRead(flexPin4);
  Serial.print("sensor 4: ");
  Serial.println(flexValue4);
  delay(1000);
  flexValue5 = analogRead(flexPin5);
  Serial.print("sensor 5: ");
  Serial.println(flexValue5);
  delay(1000);
}
