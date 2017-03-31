//#include <Servo8Bit.h>
#include <Servo.h>

//Servo8Bit myservo;  // create servo object to control a servo
Servo myservo;  // create servo object to control a servo

int val;    // variable to read the value from the analog pin

void setup() {
  //pinMode(3, INPUT);
  //pinMode(0, OUTPUT);
  //myservo.attach(0);  // attaches the servo on pin 0 to the servo object

  pinMode(9, OUTPUT);
  myservo.attach(9);  // attaches the servo on pin 0 to the servo object
}

void loop() {
  //val = analogRead(3);            // reads the value of the potentiometer (value between 0 and 1023)
  //val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  //myservo.write(val);                  // sets the servo position according to the scaled value
  myservo.write(90);
  delay(15);                           // waits for the servo to get there
}
