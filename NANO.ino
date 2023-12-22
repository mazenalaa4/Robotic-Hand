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
int value11 = 0;
int value22 = 0;
int value33 = 0;
int value44 = 0;
int value55 = 0;
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value1 = analogRead(flex1);
value11 = map(value1,20,16,0,180);
Serial.println("1");
Serial.println(value1);
value2 = analogRead(flex2);
value22 = map(value2,25,9,0,180);
Serial.println("2");
Serial.println(value2);
value3 = analogRead(flex3);
value33 = map(value3,27,15,0,180);
Serial.println("3");
Serial.println(value3);
value4 = analogRead(flex4);
value44 = map(value4,13,6,0,180);
Serial.println("4");
Serial.println(value4);
value5 = analogRead(flex5);
value55 = map(value5,30,17,0,180);
Serial.println("5");
Serial.println(value5);

Wire.beginTransmission(40);
Wire.write(value11);
Wire.write(value22);
Wire.write(value33);
Wire.write(value44);
Wire.write(value55);
Wire.write(value1);
Wire.write(value2);
Wire.write(value3);
Wire.write(value4);
Wire.write(value5);
Wire.endTransmission();
delay(100);
}

