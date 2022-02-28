int x= A0;
int y= A1;
int s= 7;
int Xval;
int Yval;
int Sval; 
int green=2;
int red=3;
int yellow=5;
int blue=4;
void setup() {
  // put your setup code here, to run once:
pinMode(x,INPUT);
pinMode(y,INPUT);
pinMode(s,INPUT);
digitalWrite(s,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(x);
  Yval=analogRead(y);
  Sval=digitalRead(s);
  Serial.println("x="+String(Xval)+"\ty="+String(Yval)+"\ts="+String(Sval));
  if(Yval<100)
  {
    digitalWrite(green,HIGH);
    delay(200);
    digitalWrite(green,LOW);
  }
  if (Yval>900)
  {
    digitalWrite(red,HIGH);
    delay(200);
    digitalWrite(red,LOW);
  }
  if(Xval<100)
  {
    digitalWrite(blue,HIGH);
    delay(200);
    digitalWrite(blue,LOW);
  }
  if(Xval>900)
  {
    digitalWrite(yellow,HIGH);
    delay(200);
    digitalWrite(yellow,LOW);
  }
 
}
