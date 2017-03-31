#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#include <EEPROM.h>

SoftwareSerial transmission(11, 20);
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  transmission.begin(10);
  lcd.begin(16, 2);
}

void loop() {
  if(transmission.available()){
    lcd.clear();
    lcd.print(transmission.read());
    transmission.end();
    //transmission.flush();
  }
}
