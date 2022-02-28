#include<Servo.h>
#include<SoftwareSerial.h>
SoftwareSerial HC05(2,3);
int servoPin1 = 10;
int servoPin2 = 9;
int servoPin3 = 6;
int servoPin4 = 5;

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
void setup() {
  // put your setup code here, to run once:
  myservo1.attach(servoPin1);
  myservo2.attach(servoPin2);
  myservo3.attach(servoPin3);
  myservo4.attach(servoPin4);
  HC05.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

while(HC05.available()){


  int servoPos= HC05.parseInt();
  
  myservo1.write(servoPos);
  myservo2.write(servoPos);
  myservo3.write(servoPos);
  myservo4.write(servoPos);
}}
