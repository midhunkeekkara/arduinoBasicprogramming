//Program to print text or whatever written in serial monitor in LCD display
#include<LiquidCrystal.h>
char x;
LiquidCrystal lcd(11,12,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
  Serial.print("Hello World!");
  delay(3000);
 }

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    x=Serial.read();
    // lcd.setCursor(0,0);
    lcd.print(x);
   }
}
