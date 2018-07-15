//Program to display temperature in LCD display using Arduino

#include<LiquidCrystal.h>
float x;
LiquidCrystal lcd(11,12,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(A1,INPUT);
 }

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1);
  x=analogRead(A1);
  x=x*0.48;
  lcd.print(x);
}
