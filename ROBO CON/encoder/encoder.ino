volatile long temp=0, counter = 0; //This variable will increase or decrease depending on the rotation of encoder
int dir=5;
int pwm=6;    
void setup() {
  Serial.begin (9600);

  pinMode(2, INPUT_PULLUP); // internal pullup input pin 2 
  
  pinMode(3, INPUT_PULLUP); // internalเป็น pullup input pin 3
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
   //Setting up interrupt
//  //A rising pulse from encodenren activated ai0(). AttachInterrupt 0 is DigitalPin nr 2 on moust Arduino.
  attachInterrupt(0, ai0, RISING);
   
  //B rising pulse from encodenren activated ai1(). AttachInterrupt 1 is DigitalPin nr 3 on moust Arduino.
  attachInterrupt(1, ai1, RISING);
  }
   
  void loop() {

    analogWrite(pwm,200);
    digitalWrite(dir,LOW);

    
    
  // Send the value of counter
  
  if( counter != temp ){
  Serial.println(counter);
//  if(counter<100){
////    Serial.println("ON");
////    analogWrite(pwm,255);
////    digitalWrite(dir,LOW);
//    
//  }
//  else{
////    Serial.println("OFF");
//    analogWrite(pwm,0);
//  
//  }
temp = counter;
  
  }
 }
//   
  void ai0() {
  // ai0 is activated if DigitalPin nr 2 is going from LOW to HIGH
  // Check pin 3 to determine the direction
  if(digitalRead(3)==LOW) {
  counter++;
  }else{
  counter--;
  }
  }
//   
  void ai1() {
  // ai0 is activated if DigitalPin nr 3 is going from LOW to HIGH
  // Check with pin 2 to determine the direction
  if(digitalRead(2)==LOW) {
  counter--;
  }else{
  counter++;
  }
  }
