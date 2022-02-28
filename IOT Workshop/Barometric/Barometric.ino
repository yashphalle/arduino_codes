#include<Wire.h>
#include<Adafruit_Sensor.h>
#include<Adafruit_BMP280.h>

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BMP280 bmp;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  if(!bmp.begin(0x76)){
    Serial.println("Could not find a valid bmp280 sensor ,check wiring!");
    while(1);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
{
  Serial.print("Temprature =");
  Serial.print(bmp.readTemperature());
  Serial.println("*c");
  
  Serial.print("Pressure =");
  Serial.print(bmp.readPressure()/100.0F);
  Serial.println("hPa");
  
  Serial.print("Altitude =");
  Serial.print(bmp.readAltitude(SEALEVELPRESSURE_HPA));
  Serial.println("m");
  delay(1000);
}
}
