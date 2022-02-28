#include <Servo.h>

Servo myservo;
int angle;


void setup() {
  // put your setup code here, to run once:
myservo.attach(3);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    angle=Serial.parseInt();
    Serial.println(angle);
    myservo.write(angle);
   
  }
   


}
