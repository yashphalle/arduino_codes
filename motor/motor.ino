int speed=3;
int pot=A1;

void setup() {
  // put your setup code here, to run once:
pinMode(pot,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int val=analogRead(pot);
int val2=map(val,0,1023,0,255);

analogWrite(speed,val2);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(100);

}
