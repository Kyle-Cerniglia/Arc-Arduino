#include <SoftwareSerial.h>

SoftwareSerial output(8, 9);

int timeout = 0;
int checksum = 0;

int value1 = 14;
  
void setup() {
  output.begin(9600);
}

void loop() {
  beginning:
  //Connection initiation
  output.write(32);
  while(output.available() == false){
    output.write(32);
    timeout++;
    if(timeout > 100){
      timeout = 0;
      goto beginning;
    }
  }
  if(output.read() != 64){
    goto beginning;
  }
  
  //Value transmission
  output.write(value1);
  while(output.available() == false){
    output.write(value1);
    timeout++;
    if(timeout > 100){
      timeout = 0;
      goto beginning;
    }
  }
  if(output.read() != 64){
    goto beginning;
  }

  //Checksum calculation
  checksum = value1 + value2 + value3;
  while(checksum > 255){
    checksum -= 255;
  }
  
  //Checksum transmission
  output.write(checksum);
  while(output.available() == false){
    output.write(checksum);
    timeout++;
    if(timeout > 100){
      timeout = 0;
      goto beginning;
    }
  }
  if(output.read() != 64){
    goto beginning;
  }
}
