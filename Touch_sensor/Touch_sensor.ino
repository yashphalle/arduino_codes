int sensor=2;
int led=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val=digitalRead(sensor);
  if(val==1)
  {
    Serial.println(val);
    
    digitalWrite(led,HIGH);
  }
  else
  {
    Serial.println(val);
    
    digitalWrite(led,LOW);
  }

}
