#include <SoftwareSerial.h>

SoftwareSerial transmission(20, 2);

int rxid = 5;
int temp_read = 0;
int humid_read = 0;
float temp_f = 0;
float humid_f = 0;
int temp_trans = 0;
int humid_trans = 0;
int checksum = 0;

void setup() {
  transmission.begin(300);
  pinMode(2, OUTPUT);
}

void loop() {

  //Reading
  humid_read = analogRead(1);
  //humid_trans = (((humid_read / 1023) * 5.0) - 0.958) / 0.0307;
  humid_f = map(humid_read,  0,  1023, 0, 5);
  humid_f -= 0.958;
  humid_f /= 0.0307;
  humid_trans = humid_f * 100;
  humid_trans = map(humid_trans, 0, 500, 0, 255);
  humid_trans /= 100;

  //temp
  temp_read = analogRead(0);
  temp_f = map(temp_read, 0, 1023, 0, 5);
  temp_f -= 0.5;
  temp_trans = 100 * temp_f;
  temp_trans = map(temp_trans, 0, 500, 0, 255);
  temp_trans /= 100;

  checksum = temp_trans + humid_trans;

  //transmission.write(63);
  //delay(10);
  //transmission.write(127);
  //delay(10);
  //transmission.write(255);
  //delay(10);
  transmission.write(rxid);
  //delay(10);
  //transmission.write(temp_trans);
  //delay(10);
  //transmission.write(humid_trans);
  //delay(10);
  //transmission.write(checksum);
  //transmission.end();

  //digitalWrite(2, LOW);

  temp_read = 0;
  humid_read = 0;
  temp_f = 0;
  humid_f = 0;
  temp_trans = 0;
  humid_trans = 0;
  checksum = 0;
  
  delay(50);
  
}
