#include <DHT.h>
#define pin 2
#define DHT_type DHT11
DHT yash (pin,DHT_type);


void setup() {
  // put your setup code here, to run once:
yash.begin();
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float t=yash.readTemperature();
  float h=yash.readHumidity();
  Serial.println("Temperature = "+String(t)+"\t Humidity = "+String(h)+"");
  delay(500);  
}
