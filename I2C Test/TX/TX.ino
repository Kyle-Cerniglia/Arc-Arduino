//TX
#include <Wire.h>
int x = 1;

void setup() {
  Wire.begin(1);
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(2, 1);
  Serial.println(Wire.read());
  /*
  Wire.beginTransmission(2);
  Wire.write(x);
  x++;
  Wire.endTransmission();
  digitalWrite(13, HIGH);
  delay(900);
  digitalWrite(13, LOW);
  delay(100);
  if(x >= 8){
    x = 1;
  }
  */
}
