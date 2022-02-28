#include<SoftwareSerial.h>
SoftwareSerial HC05(2,3);
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position


void setup() {
  // put your setup code here, to run once:

HC05.begin(9600);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
myservo.attach(11);

}

void loop() {
  // put your main code here, to run repeatedly:
while(HC05.available())
{
  int val=HC05.read();
  if(val=='1'){
    analogWrite(9,255);
    analogWrite(10,0);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    delay(1000);
  }
    if(val=='2'){
      analogWrite(10,255);
      analogWrite(9,0);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);   
   digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    delay(1000);
    }
    if(val=='3'){
        for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    }

}
}
