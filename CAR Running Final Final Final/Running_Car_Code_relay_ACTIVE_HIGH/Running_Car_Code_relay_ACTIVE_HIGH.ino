#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); // Using Pin 2 and  3 as tx for arduino nano
char bt='S';
const int IN1=6;
const int IN2=7;
const int IN3=8;
const int IN4=9;
const int IN5=10;
void setup() {
    Serial.begin(9600);
    BTserial.begin(9600);
    
     pinMode(IN1, OUTPUT);
     pinMode(IN2, OUTPUT);
     pinMode(IN4, OUTPUT);
     pinMode(IN3, OUTPUT);
 
     digitalWrite(IN1,LOW);
     digitalWrite(IN2,LOW);
     digitalWrite(IN3,LOW);
     digitalWrite(IN4,LOW);
}
void loop() {
  
  bt=BTserial.read();
  
  //FORWARD
  if(bt=='F')
  {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  }
   //BACKWAED
  if(bt=='B')
  {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  }
  //LEFT
  if(bt=='R')
  {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  }
  //RIGHT
  if(bt=='L')
  {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  }
  //BACKWARD LEFT
  if(bt=='J')
  {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  }
  //FORWARD LEFT
  if(bt=='I')
  {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  }
  //BACKWARD RIGHT
   if(bt=='H')
  {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  }
  //FORWARD RIGHT
   if(bt=='G')
  {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  }
  if(bt=='S'){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  
  }
  if(bt=='V')
  {
  digitalWrite(IN5,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(5000);
  digitalWrite(IN5,LOW);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  
  }
}
