#include <SoftwareSerial.h>

SoftwareSerial input(8, 9);

int timeout = 0;
int checksum = 1;
int checksum_r = 0;
bool mode = true;
bool valid = false;

int value1 = 0;

void setup() {
  input.begin(9600);
}

void loop() {
  beginning:
  //Connection initiation
  if(input.available()){
    if(input.read() == 32){
      input.write(64);
      while(input.available() == false){
        input.write(64);
        timeout++;
        if(timeout > 100){
          timeout = 0;
          goto beginning;
        }
      }
      //Value reception
      value1 = input.read();
      input.write(64);
      while(input.available() == false){
        input.write(64);
        timeout++;
        if(timeout > 100){
          timeout = 0;
          goto beginning;
        }
      }
      
      //Checksum reception
      checksum_r = input.read();
      input.write(64);
      delay(10);
    }

    //Checksum Calculation
    checksum = value1 + value2 + value3;
    while(checksum > 255){
      checksum -= 255;
    }
  }

  //Checksum validity
  if(checksum == checksum_r && checksum != 0){
    valid = true;
  }
  else{
    valid = false;
  }


  if(valid == true){
    /*
    Serial.print(value1);
    Serial.print(" ");
    Serial.print(value2);
    Serial.print(" ");
    Serial.print(value3);
    Serial.print(" ");
    Serial.println(checksum);
    */
  }

  checksum = 1;
  checksum_r = 0;
  value1 = 0;
  value2 = 0;
  value3 = 0;
}
