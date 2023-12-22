#include <Wire.h>
int flex1=14;
int flex2=15;
int flex3=16;
int flex4=17;
int flex5=20;
int value1 = 0;
int value2 = 0;
int value3 = 0;
int value4 = 0;
int value5 = 0;
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value1 = map(analogRead(flex1),15,15,0,180);
  Serial.println(analogRead(flex1));
    value2 = map(analogRead(flex2),15,6,0,180);
  Serial.println(analogRead(flex2));
    value3 = map(analogRead(flex3),15,6,0,180);
Serial.println(analogRead(flex3));
    value4 = map(analogRead(flex4),15,6,0,180);
 Serial.println(analogRead(flex4));
    value5 = map(analogRead(flex5),15,6,0,180);
  Serial.println(analogRead(flex5));
    Wire.beginTransmission(34);
    Wire.write(value1);
    Wire.write(value2);
    Wire.write(value3);
    Wire.write(value4);
    Wire.write(value5);
      Wire.endTransmission();
  delay(50);
}
