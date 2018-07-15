//Program to blink LED when a switch in Arduino is pressed
int x;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  x=digitalRead(2);
  if(x==1){
    digitalWrite(13,1);
    delay(200);
    digitalWrite(13,0);
    delay(200);
    }
  
}
