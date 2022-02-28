#include <XBOXUSB.h>
#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

USB Usb;
XBOXUSB Xbox(&Usb);


int pwm=3;
int dir=4;


void setup() {
  // put your setup code here, to run once:
pinMode(pwm,OUTPUT);
pinMode(dir,OUTPUT);
  Serial.begin(115200);
#if !defined(__MIPSEL__)
  while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
#endif
  if (Usb.Init() == -1) {
    Serial.println(F("\r\nOSC did not start"));
    while (1); //halt
  }
  Serial.println(F("\r\nXBOX USB Library Started"));
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pwm,0);
 Usb.Task();
 if (Xbox.Xbox360Connected) {
  if (Xbox.getButtonClick(Y)){ 
      Serial.println(F("Y"));
      analogWrite(pwm,250);
      digitalWrite(dir,1);
  }
  if(Xbox.getButtonClick(A)){
      Serial.println(F("A"));
      analogWrite(pwm,250);
      digitalWrite(dir,0);
   }
 }



}
