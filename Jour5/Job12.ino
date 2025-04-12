#include <LiquidCrystal.h>
//initialiser la biblio avec les num des broches de l'interface
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
void setup() {
  
  //configle nbr de col et de ligne de l'écran LCD
  lcd.begin(16,2);
  //imprime un message sur l'écran
  lcd.print("hello, world");
}

void loop() {
  

}
