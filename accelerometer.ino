//Program to display x,y,z coordinates using accelerometer sensor
#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,4,5,6,7);
float x,y,z;
void setup() 
{
  pinMode(A1,OUTPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,OUTPUT);
  lcd.begin(16,2);
  digitalWrite(A1,HIGH);
  digitalWrite(A5,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(A2);
  y=analogRead(A3);
  z=analogRead(A4);
  lcd.setCursor(1,0);
  lcd.print(x);
  lcd.setCursor(9,0);
  lcd.print(y); 
  lcd.setCursor(5,1);
  lcd.print(z);
  delay(200);
}
