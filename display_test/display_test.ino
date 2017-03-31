#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

//7->4
//6->6
//5->11
//4->12
//3->13
//2->14
//Gnd->1
//Vcc->2
//2.2k->3
//Gnd->5
//220->15
//Gnd->16
//A0 = Temp
//11 = RX

int humid = 0;
int temp = 0;
double tempf = 0;
double celcius = 0;
int fahrenheiti = 0;

void setup() {
  lcd.begin(16,2);
  pinMode(11, INPUT);
}

void loop() {

  temp = analogRead(A0);
  temp *= 100;
  temp = map(temp, 0, 1023, 0, 5);
  tempf = temp / 100.0;
  tempf -= 0.5;
  tempf *= 100;
  celcius = tempf;
  fahrenheiti = tempf * 2.0 + 32.0;
  
  lcd.clear();
  lcd.print("Temp: ");
  lcd.print(fahrenheiti);
  lcd.print("'F");
  lcd.setCursor(13, 0);
  lcd.print("Out");
  lcd.setCursor(0, 1);
  lcd.print("RH: ");
  lcd.print(humid);
  lcd.print("%");
  delay(500);
}
