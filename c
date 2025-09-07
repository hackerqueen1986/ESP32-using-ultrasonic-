#include <LiquidCrystal.h>
const int rs=26;
const int en=25;
const int d4=33;
const int d5=32;
const int d6=21;
const int d7=22;
const int trigpin=18;
const int echopin=19;
LiquidCrystal lcd(26,25,33,32,21,22);
void setup(){
lcd.begin(16,2);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
lcd.print("Distance:");
}
void loop(){
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIHG);
delayMicrosecond(10);

long duration=pulseIn(echopin,HIGH);
int distance=duration*0.034/2;

lcd.setCursor(0,1);
lcd.print(distance);
lcd.print("cm");

}
