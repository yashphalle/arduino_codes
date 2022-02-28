#include<ThingSpeak.h>
#include<ESP8266WiFi.h>
#include<WiFiClient.h>

String ssid="AsianetGiga";
String password="Ajinkya007";
 WiFiClient client;
 unsigned long myChannelNumber= 1643086;
 const char*myWriteAPIKey="R7J9BA14GUS1IKDZ";
 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
WiFi.begin(ssid,password);

while(WiFi.status() != WL_CONNECTED){
  delay(100);
  Serial.print(".");
  
}
Serial.println("Connected Sucessfully");
ThingSpeak.begin(client);
}

void loop() {
  // put your main code here, to run repeatedly:
int val= analogRead(A0);
ThingSpeak.writeField(myChannelNumber,1,val,myWriteAPIKey);
delay(1000);
}
