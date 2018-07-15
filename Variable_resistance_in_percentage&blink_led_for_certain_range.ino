//Program to print the Variable resistance percent in L.E.D 16X2 DISPLAY
#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,4,5,6,7);
float x;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  }

void loop() 
{
// lcd.scrollDisplayLeft();
// put your main code here, to run repeatedly:
  cd.setCursor(0,0);
  digitalWrite(13,0);
  lcd.print("Var. Resistance");
  delay(100);
  lcd.setCursor(5,1);
  x=analogRead(A0);
  x=x/10.23;   
  lcd.print(x);
  Serial.println(x);
  if(x>30&&x<60)
  {
    digitalWrite(13,1);
    delay(x);
    digitalWrite(13,0);
    delay(x);  
  }
}
