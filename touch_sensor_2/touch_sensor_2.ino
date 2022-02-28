int led=2;
int touch=4;
int lastStatus=0;
void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(2,OUTPUT);

} 

void loop() {
  // put your main code here, to run repeatedly:
  int val=digitalRead(4);
  
  if(val==1){
    if(lastStatus==0){
      digitalWrite(led,HIGH);
      lastStatus=1;
    }
    else{
      digitalWrite(led,LOW);
      lastStatus=0;
      
    }
  }

}
