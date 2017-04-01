#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#include <EEPROM.h>

SoftwareSerial transmission(11, 20);
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int txid = EEPROM.read(0);
int temp_read = 0;
int temp_c = 0;
int temp_f = 0;
int humid_read = 0;
int checksum = 0;
int checksum_read = 0;
bool pass = false;

void setup() {
  transmission.begin(300);
  lcd.begin(16, 2);
}

void loop() {
  restart:
  delay(30);
  lcd.clear();
  lcd.print("1");
  //transmission.flush();
  while(!transmission.available()){}
  lcd.print("2");
  lcd.print(transmission.read());
  if(transmission.read() == 63){
    lcd.print("3");
    if(transmission.read() == 127){
      lcd.print("4");
      if(transmission.read() == 255){
        lcd.print("5");
        if(transmission.read() == txid){
          lcd.print("6");
          pass == true;
        }
      }
    }
  }
  
  if(pass == false){
     goto restart;
  }
  pass = false;
  delay(20);
  temp_read = transmission.read();
  delay(20);
  humid_read = transmission.read();
  delay(20);
  checksum_read = transmission.read();

  checksum = temp_read + humid_read;
  lcd.print("End");

}
