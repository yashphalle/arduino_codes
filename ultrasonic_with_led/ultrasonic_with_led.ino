int trig=3;
int echo=2;
int green=5;
int yellow=6;
int red=7;
float t;
float dist;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);  
  pinMode(red,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(100);
digitalWrite(trig,HIGH);
delayMicroseconds(100);
digitalWrite(trig,LOW);
t=pulseIn(echo,HIGH);
dist=t/58;
//dist=t/2*299792458*100/1000000;
Serial.print("distance=");
Serial.println(dist);
if (dist>=15){
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(green,LOW);
}
if (dist>=10 && dist<15){
  digitalWrite(yellow,HIGH);
    delay(500);
  digitalWrite(yellow,LOW);
  
}
if(dist<10){
  digitalWrite(red,HIGH);
    delay(500);
  digitalWrite(red,LOW);
}
delay(1000);
}
