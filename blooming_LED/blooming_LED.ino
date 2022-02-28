

int led=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led,0);        // 0%
  delay(1000);
  analogWrite(led,64);        //25%
  delay(1000);
  analogWrite(led,128);       //50%
  delay(1000);
  analogWrite(led,191);       //75%
  delay(1000);
  analogWrite(led,255);       //100%
  delay(1000);
  analogWrite(led,191);        //75%
  delay(1000);
  analogWrite(led,128);        //50%
  delay(1000);
  analogWrite(led,64);         //25%
  delay(1000);
  analogWrite(led,0);          //0%
  delay(1000);
  

}
