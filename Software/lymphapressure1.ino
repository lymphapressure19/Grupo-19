#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensor=A2; //sensor 

void setup() {
 
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(sensor,INPUT);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Tiene");
  delay(1000);
  
  int entradaA=analogRead(sensor); 
  
  if(entradaA >=0 && entradaA <=60) //pasara solo si ent es menor a 60 y mayor a 0
   {

    lcd.setCursor(3,4);
    lcd.print("Presion:");
    lcd.print(entradaA);
    delay(1000);
    
    lcd. clear();
    
    lcd.print("Tiene");
    lcd.setCursor(3,4);
    lcd.print("mmHg");
    delay(1000);
    Serial.println(entradaA);
   }
  
  if(entradaA >=60 && entradaA <=120) //pasara solo si ent es menor a 120 y mayor a 60
     {

    lcd.setCursor(3,4);
    lcd.print("Presion:");
    lcd.print(entradaA);
    delay(1000);
    
    lcd. clear();
    
    lcd.print("Tiene");
    lcd.setCursor(3,4);
    lcd.print("mmHg");
    delay(1000);
    Serial.println(entradaA);
   }
          
  if(entradaA>=120 && entradaA<=256)//pasara solo si ent es menor a 256 y mayor a 120
   {

    lcd.setCursor(3,4);
    lcd.print("Presion:");
    lcd.print(entradaA);
    delay(1000);
    
    lcd. clear();
    
    lcd.print("Tiene");
    lcd.setCursor(3,4);
    lcd.print("mmHg");
    delay(1000);
    Serial.println(entradaA);
   }
 
  lcd.clear();
} 
