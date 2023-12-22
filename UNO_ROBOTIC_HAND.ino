#include <Servo.h>

#include <Wire.h>
int value11 = 0;
int value22 = 0;
int value33 = 0;
int value44 = 0;
int value55 = 0;
int value1 = 0;
int value2 = 0;
int value3 = 0;
int value4 = 0;
int value5 = 0;
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin(40);
Wire.onReceive(events);
s1. attach(3);
s2. attach(5);
s3. attach(6);
s4. attach(9);
s5. attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void events(){
  value11= Wire.read();
  value22= Wire.read();
  value33= Wire.read();
  value44= Wire.read();
  value55= Wire.read();
  
  
  
  
  value1= Wire.read();
  value2= Wire.read();
  value3= Wire.read();
  value4= Wire.read();
  value5= Wire.read();
  Serial.println("1");
Serial.println(value11);
Serial.println("2");
Serial.println(value22);
Serial.println("3");
Serial.println(value33);
Serial.println("4");
Serial.println(value44);
Serial.println("5");
Serial.println(value55);
  s1.write(value11);
  s2.write(value22);
  s3.write(value33);
  s4.write(value44);
  s5.write(value55);
  delay(50);
}