#include <SoftwareSerial.h>

SoftwareSerial input(8, 9);

int value = 0;
int value1 = 0;
int value2 = 0;
int value3 = 0;
int checksum = 1;
int checksum_r = 0;
bool mode = true;
bool valid = false;

void setup() {
  input.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  beginning:
  if(input.available()){
    if(input.read() == 32){
      input.write(64);
      while(input.available() == false){
        input.write(64);
        value++;
        if(value > 100){
          value = 0;
          goto beginning;
        }
      }
      value1 = input.read();
      input.write(64);
      while(input.available() == false){
        input.write(64);
        value++;
        if(value > 100){
          value = 0;
          goto beginning;
        }
      }
      value2 = input.read();
      input.write(64);
      while(input.available() == false){
        input.write(64);
        value++;
        if(value > 100){
          value = 0;
          goto beginning;
        }
      }
      value3 = input.read();
      input.write(64);
      while(input.available() == false){
        input.write(64);
        value++;
        if(value > 100){
          value = 0;
          goto beginning;
        }
      }
      checksum_r = input.read();
      input.write(64);
      delay(10);
    }
    
    checksum = value1 + value2 + value3;
    while(checksum > 255){
      checksum -= 255;
    }
  }

  if(checksum == checksum_r && checksum != 0){
    valid = true;
  }
  else{
    valid = false;
  }

  if(valid == true){
    Serial.print(value1);
    Serial.print(" ");
    Serial.print(value2);
    Serial.print(" ");
    Serial.print(value3);
    Serial.print(" ");
    Serial.println(checksum);
  }

  checksum = 1;
  checksum_r = 0;
  value1 = 0;
  value2 = 0;
  value3 = 0;
}
