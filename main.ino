#include <Servo.h> 

pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(0,OUTPUT); 
pinMode(1,OUTPUT); 
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
Servo servo1;

void setup()
{
servo1.attach(6);
}
   
void loop()
{
int l1=digitalRead(9); 
int r1=digitalRead(10); 
if((l1==LOW)&&(r1==LOW))
{
moveStop();
turnLeft();
delay(2000);
moveForward();
}
else if((l1==HIGH)&&(r1==LOW))
{
moveStop();
turnLeft();
delay(2000);
moveForward();
}
else if((l1==HIGH)&&(r1==HIGH))
{
moveForward();
}
}

void moveStop()
{
digitalWrite(0,LOW); 
digitalWrite(1,LOW); 
digitalWrite(2,LOW); 
digitalWrite(3,LOW);
}

void moveForward()
{
digitalWrite(0,HIGH); 
digitalWrite(1,LOW); 
digitalWrite(2,HIGH); 
digitalWrite(3,LOW);
}

void turnLeft()
{
servo1.attach(6);
servo1.write(45); 
    delay(500);
    servo1.write(90); 
}
