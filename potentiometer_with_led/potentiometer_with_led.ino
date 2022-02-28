int pot=A0;
int led=3;

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int val=analogRead(A0);
int pwm=map(val,0,1023,255,0);
analogWrite(3,pwm);

}
