//0 RX1
//1 TX1
//2 RX2
//3 TX2
//4 RX3/SCK
//5 TX3/MISO
//6 D1/A1/ADC1/MOSI
//7 D2/A2/ADC1
//8 D3/A3
//9 D4

#include <SoftwareSerial.h>

SoftwareSerial in1(4, 5);

int array[4];
int sum = 0;

void setup() {
  in1.begin(9600);
  pinMode(6, OUTPUT);
}

void loop() {
  if(in1.available() == 4){
    array[0] = in1.read();
    array[1] = in1.read();
    array[2] = in1.read();
    array[3] = in1.read();
    in1.flush();
  }
  else if(in1.available() > 4){
    digitalWrite(6, LOW);
    //digitalWrite(6, HIGH);
    in1.flush();
  }
  else{
    digitalWrite(6, LOW);
    //digitalWrite(6, HIGH);
  }
  sum = array[0] + array[1] + array[2];
  while(sum > 255){
    sum -= 255;
  }
  if(array[3] == sum){
    digitalWrite(6, HIGH);
    //digitalWrite(6, LOW);
  }
  else{
    digitalWrite(6, LOW);
    //digitalWrite(6, HIGH);
  }
  array[0] = 0;
  array[1] = 0;
  array[2] = 0;
  array[3] = 0;
  sum = 0;
}
