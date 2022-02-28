int trigger=3;
int echo=4;
long duration;
float distance;

void setup() {
  // put your setup code here, to run once:
pinMode(trigger,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
Serial.println("UltraSonic Interfacing");

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigger,LOW);
delayMicroseconds(10);
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
digitalWrite(trigger,LOW);

duration=pulseIn(echo,HIGH);
distance=duration*0.034/2;

Serial.print("Distance=");
Serial.println(distance);
delay(500);

}
