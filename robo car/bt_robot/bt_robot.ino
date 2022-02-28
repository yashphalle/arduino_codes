#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);

int in1 = 7;
int in2 = 10;
int in3 = 11;
int in4 = 12;

int EN1 = 5;
int EN2 = 6;

void setup() 
{
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT); 
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);      
mySerial.begin(9600);                                                
}

void loop() {
  // put your main code here, to run repeatedly:
int val;
  if (mySerial.available())
  {
    while(mySerial.available()>0)
   {
    val=mySerial.read();
    
    if (val=='8')
    {
      analogWrite(5,255);
      analogWrite(6,255);
      digitalWrite(7,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
     
      //Serial.println("Robot is moving Forward");
      }

      else if (val=='2')
      {
        analogWrite(5,255);
        analogWrite(6,255);
        digitalWrite(7,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
        }

        else if (val=='4')
        {
          analogWrite(5,0);
          analogWrite(6,255);
          digitalWrite(7,LOW);
          digitalWrite(10,LOW);
          digitalWrite(11,LOW);
          digitalWrite(12,HIGH);
          }

          else if (val=='6')
          {
            analogWrite(5,255);
            analogWrite(6,0);
            digitalWrite(7,LOW);
            digitalWrite(10,HIGH);
            digitalWrite(11,LOW);
            digitalWrite(12,LOW);
            }

            else if (val=='5')
            {
              analogWrite(5,0);
              analogWrite(6,0);
              digitalWrite(7,LOW);
              digitalWrite(10,LOW);
              digitalWrite(11,LOW);
              digitalWrite(12,LOW);
              }
          }
   }

}
