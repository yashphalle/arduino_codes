#include <XBOXUSB.h>
#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

#include<Servo.h>
USB Usb;
XBOXUSB Xbox(&Usb);
Servo myservo;
int angle=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myservo.attach(3);
#if !defined(__MIPSEL__)
  while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
#endif
  if (Usb.Init() == -1) {
    Serial.print(F("\r\nOSC did not start"));
    while (1); //halt
  }
  Serial.print(F("\r\nXBOX USB Library Started"));
    

}

void loop() {
  // put your main code here, to run repeatedly:
  Usb.Task();
  myservo.write(0);
  if (Xbox.Xbox360Connected) {
  if (Xbox.getButtonClick(Y)){
   
    angle=angle+20;
    myservo.write(angle);
     Serial.println(F("Y"));
  }
  if (Xbox.getButtonClick(A)){
    
    angle=angle-20;
    myservo.write(angle);
    Serial.println(F("A"));
  }
  
  }  
}
