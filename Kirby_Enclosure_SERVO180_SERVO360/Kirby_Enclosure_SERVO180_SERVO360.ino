#include <Servo.h>
Servo myservo;
Servo servo1_180;
Servo servo2_360;  //Servo 360 name
Servo servo3_180;
Servo servo4_360;
Servo servo5_360;
const int buttonPin1 = 13;
const int buttonPin2 = 12;
const int buttonPin3 = 8;
const int buttonPin4 = 7;
const int buttonPin5 = 4;
void setup() {
  // put your setup code here, to run once:
servo1_180.attach(10);   //Pin numbers
servo2_360.attach(9);
servo3_180.attach(3);
servo4_360.attach(4);
servo5_360.attach(5);
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
pinMode(buttonPin3,INPUT);
pinMode(buttonPin4,INPUT);
pinMode(buttonPin5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(buttonPin1) == HIGH){
  servo2_360.write(130); // speed of 360 spin
}else{
  servo2_360.write(90);
}

if (digitalRead(buttonPin2) == HIGH){
  servo1_180.write(180); // degree value of 180 turn
}else{
  servo1_180.write(0);
}

if (digitalRead(buttonPin3) == HIGH){
  servo3_180.write(180); // degree value of 180 turn
}else{
  servo3_180.write(0);
}

if (digitalRead(buttonPin4) == HIGH){
  servo4_360.write(130); // speed of 360 spin
}else{
  servo4_360.write(90);
}

if (digitalRead(buttonPin5) == HIGH){
  servo5_360.write(130); // speed of 360 spin
}else{
  servo5_360.write(90);
}
}
