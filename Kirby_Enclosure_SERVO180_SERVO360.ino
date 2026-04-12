#include <Servo.h>
Servo myservo;     //Servo's 1-5
Servo servo1_180;  //Servo 180 name
Servo servo2_360;  //Servo 360 name
Servo servo3_180;
Servo servo4_360;
Servo servo5_360;
const int buttonPin1 = 13; //Int button pin 1-5 copper wires
const int buttonPin2 = 12;
const int buttonPin3 = 8;
const int buttonPin4 = 7;
const int buttonPin5 = 4;

void setup() {
  // put your setup code here, to run once:
servo1_180.attach(10);   //Pin numbers for servos 1-5
servo2_360.attach(9);
servo3_180.attach(3);
servo4_360.attach(5);
servo5_360.attach(6);
pinMode(buttonPin1,INPUT);  //Button inputs for each servo 1-5
pinMode(buttonPin2,INPUT);
pinMode(buttonPin3,INPUT);
pinMode(buttonPin4,INPUT);
pinMode(buttonPin5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(buttonPin1) == HIGH){                    //Servo 1
  servo2_360.write(130); // speed of 360 spin
}else{
  servo2_360.write(90); //Continue spinning
}

if (digitalRead(buttonPin2) == HIGH){                   //Servo 2
  servo1_180.write(180); // degree value of 180 turn
}else{
  servo1_180.write(0);   //Stop spinning
}

if (digitalRead(buttonPin3) == HIGH){                   //Servo 3
  servo3_180.write(180); // degree value of 180 turn
}else{
  servo3_180.write(0);   //Stop spinning
}

if (digitalRead(buttonPin4) == HIGH){                   //Servo 4     
  servo4_360.write(130); // speed of 360 spin
}else{
  servo4_360.write(90); //Continue spinning
}

if (digitalRead(buttonPin5) == HIGH){                   //Servo 5
  servo5_360.write(130); // speed of 360 spin
}else{
  servo5_360.write(90); //Continue spinning
}
}
