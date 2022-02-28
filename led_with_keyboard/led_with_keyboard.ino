void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    while(Serial.available()>0)
    {
       int val=Serial.read(); //storing the value in val variable coming from user input
       if(val=='1')
       {
        digitalWrite(12,HIGH);
        
        Serial.println("LED is ON now");
        
       }
        else if(val=='0'){
          digitalWrite(12,LOW);
          
          Serial.println("LED is OFF now");
        }
    }
  }

}
