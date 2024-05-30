//#include <SoftwareSerial.h>
//SoftwareSerial BTserial(2, 3); // Using Pin 2 and  3 as tx for arduino nano
char bt='S';
const int IN1=9;
const int IN2=8;


const int IN3=7;
const int IN4=6;

const int ENA=10;
const int ENB=11;
const int IN5=4;

int fast=255;
void setup() {
    Serial.begin(9600);
    //BTserial.begin(9600);
    
    
     pinMode(IN1, OUTPUT);
     pinMode(IN2, OUTPUT);
     pinMode(ENA, OUTPUT);
     pinMode(IN4, OUTPUT);
     pinMode(IN3, OUTPUT);
     pinMode(ENB, OUTPUT);
     pinMode(IN5, OUTPUT);
}
void loop() {
  
  bt=Serial.read();
  //BACKWAED 
  if(bt=='0')
    fast=5;
  if(bt=='1')
    fast=25;
   if(bt=='2')
    fast=50;
   if(bt=='3')
    fast=75;
   if(bt=='4')
    fast=100;
   if(bt=='5')
    fast=125;
   if(bt=='6')
    fast=150;
   if(bt=='7')
    fast=175;
   if(bt=='8')
    fast=200;
   if(bt=='9')
    fast=230;
   if(bt=='q')
    fast=255;
    
  
  //FORWARD
  if(bt=='F'){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
   //Back
  if(bt=='B'){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
  //LEFT
  if(bt=='L'){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
  //RIGHT
  if(bt=='R'){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
  //BACKWARD LEFT
  if(bt=='H'){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
  //FORWARD LEFT
  if(bt=='G'){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
  //BACKWARD RIGHT
   if(bt=='J'){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
  //FORWARD RIGHT
   if(bt=='I'){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,fast);
  analogWrite(ENB,fast);
  }
  
  if(bt=='S'){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  
  }
  //SHOOTER
   if(bt=='V'){
  digitalWrite(IN5,HIGH); 
  delay(5000);
  digitalWrite(IN5,LOW); 
  }
}
