#include <Wire.h>

int icaddr = 0x00;
int laddr = 0x00;
int haddr = 0x00;
int data = 0x11;

void setup() {

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  delay(100);
  Serial.begin(9600);
  Wire.begin();

  //Write

  Wire.beginTransmission(icaddr);
  Wire.write(haddr);
  Wire.write(laddr);
  Wire.write(data);
  Wire.endTransmission();

  delay(10);

  digitalWrite(8, HIGH);
  
  //Read

  Wire.beginTransmission(icaddr);
  Wire.write(haddr);
  Wire.write(laddr);
  Wire.endTransmission();

  Wire.requestFrom(icaddr, 1);
  while(!Wire.available()){}
digitalWrite(9, HIGH);
  Serial.println(Wire.read());
}

void loop() {

}
