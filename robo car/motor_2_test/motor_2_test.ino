int m11=4;
int m12=5;

void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);

    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
}
