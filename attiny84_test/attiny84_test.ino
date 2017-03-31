#include <SoftwareSerial.h>

SoftwareSerial transmission(20, 2);

int rxid = 0;

void setup() {
  transmission.begin(10);
  pinMode(2, OUTPUT);
}

void loop() {
  transmission.write(rxid);
  transmission.end();
  rxid++;
  
  delay(50);

  if(rxid == 255){
    rxid = 0;
  }
  
}
