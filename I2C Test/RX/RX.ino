//RX
#include <Wire.h>
int x = 0;
void setup() {
  Wire.begin(2);
  Serial.begin(9600);
}

void loop() {
  Wire.onRequest(ping);
  //Wire.onReceive(input);
  //digitalWrite(13, LOW);
}

void input(int bytes){
  digitalWrite(13, HIGH);
  x = Wire.read();
  Serial.println(x);
}

void ping(){
  Wire.write(254);
}

