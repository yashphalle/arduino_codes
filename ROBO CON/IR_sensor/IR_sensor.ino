
int receiver=8;


void setup() {
  // put your setup code here, to run once:
pinMode(receiver,INPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:



int state=digitalRead(receiver);

if(state==0)
{
  Serial.println("object detected");
  
}
else
{
  Serial.println("object not detected");
  
}
delay(1000);
}
