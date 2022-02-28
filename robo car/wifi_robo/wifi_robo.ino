
#include <ESP8266WiFi.h>
#include<WiFiClient.h>
#include<WiFiServer.h>

WiFiServer server(80);
const char*ssid="vivo V3";
const char*password="";

int m11= 0;
int m12= 1;
int m21=2 ;
int m22=3 ;
int en1= 5;
int en2=6 ;
int speed=200;

String res="";
void setup() {
  // put your setup code here, to run once:
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
WiFi.begin(ssid,password);
while(WiFi.status()!= WL_CONNECTED){
  Serial.print(".");
  delay(300);
  
}
Serial.println("WiFi Connected....");
Serial.println("IP Address: ");
Serial.println(WiFi.localIP());
  server.begin();
}

void loop() {
  // put your main code here, to run repeatedly:


 // String Operations



 //loops
if(res=="f")
  {
    Serial.print(res);
    analogWrite(en1,speed);
    analogWrite(en2,speed);

    
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
    
    
    
    
  }
  else if(res=="b")
  {
    Serial.print(res);
    analogWrite(en1,speed);
    analogWrite(en2,speed);
   
    digitalWrite(m11,LOW);
    digitalWrite(m12,HIGH);
    digitalWrite(m21,LOW);
    digitalWrite(m22,HIGH);
  
  
    
    
  }
  else if(res=="l")
  {
    Serial.print(res);
    analogWrite(en1,speed);
    analogWrite(en2,speed);
    
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,LOW);
    digitalWrite(m22,HIGH);
    
    
    
  }
    else if(res=="r")
  {
    Serial.print(res);
   analogWrite(en1,speed);
    analogWrite(en2,speed);
    
    digitalWrite(m11,LOW);
    digitalWrite(m12,HIGH);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
    
    
  }
      else if(res=="s")
  {
    Serial.print(res);
    analogWrite(en1,speed);
    analogWrite(en2,speed);
    
    digitalWrite(m11,LOW);
    digitalWrite(m12,LOW);
    digitalWrite(m21,LOW);
    digitalWrite(m22,LOW);
    
    
    
  }
  
    
  }
