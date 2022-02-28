#include<BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>
#include<DHT.h>
#include<SimpleTimer.h>

#define DHTTYPE DHT11
#define dht_dpin 4
DHT dht(dht_dpin,DHTTYPE);
SimpleTimer timer;
char auth[] = "Hmqqb7ylYHmOxg9eOSgHbSfuIDPll5Cq";
char ssid[] = "AsianetGiga";
char pass[] = "Ajinkya007";
float t;
float h;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Blynk.begin(auth,ssid,pass);
dht.begin();
timer.setInterval(2000,aplafunction);
}


void aplafunction(){
  h= dht.readHumidity();
  t= dht.readTemperature();


 Blynk.virtualWrite(V0,t);
  Blynk.virtualWrite(V1,h);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
timer.run();
}
