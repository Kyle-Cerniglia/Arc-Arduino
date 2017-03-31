#include <Servo.h>

Servo myservo;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(10, OUTPUT);
  myservo.attach(10);
  digitalWrite(9, LOW);
  
  myservo.write(0);
  delay(210000);
  myservo.write(180);
  delay(100000);
  myservo.write(0);
}

void loop() {
  digitalWrite(9, HIGH);
}
