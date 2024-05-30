const int IN1=6;
const int IN2=7;
const int ENA=10;

const int IN3=8;
const int IN4=9;
const int ENB=11;


char bt='S';
void setup() {
  Serial.begin(9600);
     pinMode(IN1, OUTPUT);
     pinMode(IN2, OUTPUT);
     pinMode(ENA, OUTPUT);

     pinMode(IN4, OUTPUT);
     pinMode(IN3, OUTPUT);
     pinMode(ENB, OUTPUT);
}



void Motor1_Forward()
{
     digitalWrite(IN1,HIGH);
     digitalWrite(IN2,LOW);
}

void Motor1_Backward()
{
     digitalWrite(IN1,LOW);
     digitalWrite(IN2,HIGH);
}
void Motor1_Brake()
{
     digitalWrite(IN1,LOW);
     digitalWrite(IN2,LOW);
}
void Motor2_Forward()
{
     digitalWrite(IN3,HIGH);
     digitalWrite(IN4,LOW);
}

void Motor2_Backward()
{
     digitalWrite(IN3,LOW);
     digitalWrite(IN4,HIGH);
     analogWrite(ENB,HIGH);
}
void Motor2_Brake()
{
     digitalWrite(IN3,LOW);
     digitalWrite(IN4,LOW);
}
void Stop()
{
  Motor1_Brake();
  Motor2_Brake();
}
void forward()
{
 Motor1_Forward();
 Motor2_Forward();
}
void backward()
{
 Motor1_Backward();
 Motor2_Backward();
}
void forwardleft()
{
  Stop();
  Motor2_Forward();
}
void forwardright()
{
  Stop();
  Motor1_Forward();
}
void backleft()
{
  Stop();
  Motor2_Backward();
}
void backright()
{
  Stop();
 Motor1_Backward();
}
void left()
{
  Motor2_Forward();
  Motor1_Backward();
}
void right()
{
  Motor1_Forward();
  Motor2_Backward();
}
void loop() {
  bt=Serial.read();

if(bt=='F')
{
 forward();
}
if(bt=='B')
{
 backward();
 } 
if(bt=='L')
{
 left(); 
 }
if(bt=='R')
{
 right(); 
 }
if(bt=='G')
{
 forwardleft();
 }
if(bt=='I')
{
 forwardright();
 }
if(bt=='H')
{
 backleft();
 } 
if(bt=='J')
{
 backright();
 } 
if(bt=='S')
{
 Stop();
}
}
