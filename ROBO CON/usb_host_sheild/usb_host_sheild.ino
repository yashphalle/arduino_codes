#include <XBOXUSB.h>

// Satisfy the IDE, which needs to see the include statment in the ino too.
#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>
#include <Servo.h>

Servo myservo;

USB Usb;
XBOXUSB Xbox(&Usb);

int angle=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
#if !defined(__MIPSEL__)
  while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
#endif
  if (Usb.Init() == -1) {
    Serial.print(F("\r\nOSC did not start"));
    while (1); //halt
    
  }
  Serial.print(F("\r\nXBOX USB Library Started"));
  myservo.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
Usb.Task();
Xbox.setRumbleOn(0, 0);
myservo.write(0);
  if (Xbox.Xbox360Connected) {
   

      
//      angle=map(angle,0,255,0,180);
//      myservo.write(angle);
    
     
      
    if (Xbox.getButtonClick(B))
      angle=angle-20;
      myservo.write(angle);
      Serial.println(F("B"));
      Serial.println(angle);
    if (Xbox.getButtonClick(X))
      angle=angle+20;
      myservo.write(angle);
      Serial.println(F("X"));
      Serial.println(angle);
 }
  delay(1);
}
