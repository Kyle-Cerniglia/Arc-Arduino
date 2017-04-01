#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);


void setup() {\
  lcd.begin(2,16);
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("Hello");
}
  
void loop() {

  
}
