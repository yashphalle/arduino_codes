char s;

int sp=200;
int en1=9;
int en2=10;
int m11=4;
int m12=5;
int m21=6;
int m22=7;


void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //while(Serial.available()){
    Serial.println("Press F B R L S\n");
  
char s= Serial.read();
Serial.write(s);
if(s=='F')
  {
    Serial.print(s);
    analogWrite(en1,sp);
    analogWrite(en2,sp);

    
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
    delay(50);
    s = 'S';
    
    
  }
  else if(s=='B')
  {
    Serial.print(s);
    analogWrite(en1,sp);
    analogWrite(en2,sp);
   
    digitalWrite(m11,LOW);
    digitalWrite(m12,HIGH);
    digitalWrite(m21,LOW);
    digitalWrite(m22,HIGH);
    delay(50);
   s = 'S';
    
    
  }
  else if(s=='L')
  {
    Serial.print(s);
    analogWrite(en1,sp);
    analogWrite(en2,sp);
    
    digitalWrite(m11,HIGH);
    digitalWrite(m12,LOW);
    digitalWrite(m21,LOW);
    digitalWrite(m22,HIGH);
    delay(50);
    s = 'S';
    
  }
    else if(s=='R')
  {
    Serial.print(s);
    analogWrite(en1,sp);
    analogWrite(en2,sp);
    
    digitalWrite(m11,LOW);
    digitalWrite(m12,HIGH);
    digitalWrite(m21,HIGH);
    digitalWrite(m22,LOW);
    delay(50);
    s = 'S';
    
  }
      else if(s=='S')
  {
    Serial.print(s);
    analogWrite(en1,sp);
    analogWrite(en2,sp);
    
    digitalWrite(m11,LOW);
    digitalWrite(m12,LOW);
    digitalWrite(m21,LOW);
    digitalWrite(m22,LOW);
    delay(50);
    s = 'S';
    
  }
  delay(1000);
    
  }

//}
