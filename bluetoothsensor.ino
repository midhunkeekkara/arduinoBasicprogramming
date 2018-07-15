//Program to display text in lcd display from mobile using bluetooth
#include<LiquidCrystal.h>
char x;
String y="";
LiquidCrystal lcd(11,12,4,5,6,7);
void setup() 
{
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
  Serial.print("Hello World!");
  delay(3000);
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    x=Serial.read();
    y=y+x;
    lcd.setCursor(0,0);
    lcd.print(y);
  }
  else{
    delay(1000);
    lcd.clear();
    y="";
    }
   // lcd.setCursor(0,0);
  
}

//download BLUETOOTH TERMINAL HC-05 from google playstore
