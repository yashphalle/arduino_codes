#include <ESP8266WiFi.h>
String  i;
WiFiServer server(80);

void setup()
{
  i = "";

  Serial.begin(9600);

  pinMode(16, OUTPUT); // GPIO pin16=D0 of NodeMCU 12E 
  pinMode(5, OUTPUT);  // GPIO pin5=D1 of NodeMCU 12E 
  pinMode(4, OUTPUT);  // GPIO pin4=D2 of NodeMCU 12E
  pinMode(0, OUTPUT);  // GPIO pin0=D3 of NodeMCU 12E 
  WiFi.disconnect();
  delay(2000);
  Serial.println("Connecting to WIFI");
  WiFi.begin("Yash","yash@123");
  while ((!(WiFi.status() == WL_CONNECTED)))
  {
    delay(300);
    Serial.print("..");

  }
  
  Serial.println("I am Connected");
  Serial.print("My Local IP is : ");
  Serial.println((WiFi.localIP()));
  server.begin();
}


void loop()
{
    WiFiClient client = server.available();
    if (!client)
    { 
      return; 
    }
    while(!client.available())
    {  
      delay(1);
    }
    i = (client.readStringUntil('\r'));
    Serial.println(i);
    i.remove(0, 5);
    Serial.print("After prefix removal : ");
    Serial.println(i);
    i.remove(i.length()-9,9);
    Serial.print("After postfix removal : ");
    Serial.println(i);
    
    if (i == "f")
    {
      digitalWrite(16,HIGH);
      
    }
    
    if (i == "b")
    {
      
      digitalWrite(5,HIGH);
     
    }
    
    if (i == "r")
    {
     
      digitalWrite(4,HIGH);
      
    }
    
    if (i == "l")
    {
      
      digitalWrite(0,HIGH);
    }
    
    if (i == "s")
    {
      digitalWrite(16,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(0,LOW);
    }
}
