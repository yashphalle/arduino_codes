int signal=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(signal,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(signal,HIGH);
  delay(2000);
  digitalWrite(signal,LOW);
  delay(2000);
}
