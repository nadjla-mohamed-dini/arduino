#include <LiquidCrystal.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
byte smiley[8] = {  
  B00000,  
  B10001,  
  B00000,  
  B00000,  
  B10001,  
  B01110,  
  B00000,  
 }; 
void setup() {
  // put your setup code here, to run once:
   lcd.createChar(0, smiley);
   lcd.begin(16,2);
   lcd.setCursor(0,0);
   lcd.setCursor(5,0);
   lcd.write(byte(0));
}

void loop() {
  // put your main code here, to run repeatedly:

}
