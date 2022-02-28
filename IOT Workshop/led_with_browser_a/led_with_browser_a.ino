#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char* ssid="Yash";
const char* password="yash@123";

ESP8266WebServer server(80);

String page="";
 
void setup() 
{
  page="<h1>LED ON OFF</h1><p><a href=\"LEDOn\"><button>ON</button></a><a href=\"LEDOff\"><button>OFF</button></a></p>";
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
  Serial.print("Connecting to :");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while(WiFi.status() !=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.print("Connected to :");
  Serial.println(ssid);
  Serial.print("IP Address :");
  Serial.println(WiFi.localIP());
  server.begin();
  Serial.println("HTTP server started");
  
  server.on("/",[]()
  {
   server.send(200, "text/html" , page);
  });
  
  server.on("/LEDOn",[]()
  {
   server.send(200, "text/html" , page);
   digitalWrite(LED_BUILTIN,LOW);
  });
 
  server.on("/LEDOff",[]()
  {
   server.send(200, "text/html" , page);
   digitalWrite(LED_BUILTIN,HIGH);
  });

}

void loop() {
  server.handleClient();

}
