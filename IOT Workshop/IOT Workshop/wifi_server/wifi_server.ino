#include<ESP8266WiFi.h>
#include<WiFiClient.h>
#include<ESP8266WebServer.h>
 const char*ssid= "AsianetGiga";
 const char*password="Ajinkya007";
 ESP8266WebServer server(80);
 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Connecting to:");
Serial.println(ssid);
WiFi.begin(ssid,password);
while(WiFi.status() != WL_CONNECTED)
{
  delay(1000);
  Serial.print(".");
  
}
Serial.println(WiFi.localIP());
server.begin();

server.on("/",aplaserver);
Serial.println("Server Started...");
}

void loop() {
  // put your main code here, to run repeatedly:
server.handleClient();
}
void aplaserver(){
  server.send(200,"text/html","<h1><marquee>hiii... I am Yash!</marquee></h1>");
}
