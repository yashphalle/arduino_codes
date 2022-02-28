int sensor=A0;
int led=2;
//int threshold= 30;

void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=analogRead(sensor);
  Serial.println(val);
  if(val<30){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

}
