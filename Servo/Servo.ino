#include <Servo.h>
int spin=9;
int spos=180;
Servo myServo;
void setup() {
  // put your se tup code here, to run once:
Serial.begin(9600);
myServo.attach(spin);

}

void loop() {
  // put your main code here, to run repeatedly:
myServo.write(spos);
}
