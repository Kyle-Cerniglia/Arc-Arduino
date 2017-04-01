
int ljoyy = 0000;
int ljoyx = 0000;
int rjoyy = 0000;
int rjoyx = 0000;
int button = 0000; //L Front, R Front, L Back, R Back
bool light = false;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
}

void loop() {
  //Drive motors
  if(ljoyy == 0000){//0
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    analogWrite(18, 255);
    analogWrite(19, 255);
  }
  else if(ljoyy == 0001){//1
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    analogWrite(18, 219);
    analogWrite(19, 219);
  }
  else if(ljoyy == 0010){//2
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    analogWrite(18, 183);
    analogWrite(19, 183);
  }
  else if(ljoyy == 0011){//3
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    analogWrite(18, 147);
    analogWrite(19, 147);
  }
  else if(ljoyy == 0100){//4
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    analogWrite(18, 111);
    analogWrite(19, 111);
  }
  else if(ljoyy == 0101){//5
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    analogWrite(18, 75);
    analogWrite(19, 75);
  }
  else if(ljoyy == 0110){//6
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    analogWrite(18, 39);
    analogWrite(19, 39);
  }
  else if(ljoyy == 1000){//8
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(18, 39);
    analogWrite(19, 39);
  }
  else if(ljoyy == 1001){//9
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(18, 75);
    analogWrite(19, 75);
  }
  else if(ljoyy == 1010){//10
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(18, 111);
    analogWrite(19, 111);
  }
  else if(ljoyy == 1011){//11
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(18, 147);
    analogWrite(19, 147);
  }
  else if(ljoyy == 1100){//12
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(18, 183);
    analogWrite(19, 183);
  }
  else if(ljoyy == 1101){//13
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(18, 219);
    analogWrite(19, 219);
  }
  else if(ljoyy == 1110){//14
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(18, 255);
    analogWrite(19, 255);
  }


  if(ljoyx == 0000){//0
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(18, 255);
    analogWrite(19, 255);
  }
  else if(ljoyx == 0001){//1
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(18, 219);
    analogWrite(19, 219);
  }
  else if(ljoyx == 0010){//2
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(18, 183);
    analogWrite(19, 183);
  }
  else if(ljoyx == 0011){//3
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(18, 147);
    analogWrite(19, 147);
  }
  else if(ljoyx == 0100){//4
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(18, 111);
    analogWrite(19, 111);
  }
  else if(ljoyx == 0101){//5
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(18, 75);
    analogWrite(19, 75);
  }
  else if(ljoyx == 0110){//6
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(18, 39);
    analogWrite(19, 39);
  }
  else if(ljoyx == 1000){//8
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    analogWrite(18, 39);
    analogWrite(19, 39);
  }
  else if(ljoyx == 1001){//9
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    analogWrite(18, 75);
    analogWrite(19, 75);
  }
  else if(ljoyx == 1010){//10
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    analogWrite(18, 111);
    analogWrite(19, 111);
  }
  else if(ljoyx == 1011){//11
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    analogWrite(18, 147);
    analogWrite(19, 147);
  }
  else if(ljoyx == 1100){//12
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    analogWrite(18, 183);
    analogWrite(19, 183);
  }
  else if(ljoyx == 1101){//13
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    analogWrite(18, 219);
    analogWrite(19, 219);
  }
  else if(ljoyx == 1110){//14
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    analogWrite(18, 255);
    analogWrite(19, 255);
  }


  if(rjoyy == 0000){//0
    digitalWrite(7, LOW);
    analogWrite(10, 255);
  }
  else if(rjoyy == 0001){//1
    digitalWrite(7, LOW);
    analogWrite(10, 219);
  }
  else if(rjoyy == 0010){//2
    digitalWrite(7, LOW);
    analogWrite(10, 183);
  }
  else if(rjoyy == 0011){//3
    digitalWrite(7, LOW);
    analogWrite(10, 147);
  }
  else if(rjoyy == 0100){//4
    digitalWrite(7, LOW);
    analogWrite(10, 111);
  }
  else if(rjoyy == 0101){//5
    digitalWrite(7, LOW);
    analogWrite(10, 75);
  }
  else if(rjoyy == 0110){//6
    digitalWrite(7, LOW);
    analogWrite(10, 39);
  }
  else if(rjoyy == 1000){//8
    digitalWrite(7, HIGH);
    analogWrite(10, 39);
  }
  else if(rjoyy == 1001){//9
    digitalWrite(7, HIGH);
    analogWrite(10, 75);
  }
  else if(rjoyy == 1010){//10
    digitalWrite(7, HIGH);
    analogWrite(10, 111);
  }
  else if(rjoyy == 1011){//11
    digitalWrite(7, HIGH);
    analogWrite(10, 147);
  }
  else if(rjoyy == 1100){//12
    digitalWrite(7, HIGH);
    analogWrite(10, 183);
  }
  else if(rjoyy == 1101){//13
    digitalWrite(7, HIGH);
    analogWrite(10, 219);
  }
  else if(rjoyy == 1110){//14
    digitalWrite(7, HIGH);
    analogWrite(10, 255);
  }


  //Lights
  if(button == 0100 && light == false){
    digitalWrite(16, HIGH);
    delay(500);
    light = true;
  }
  else if(button == 0100 && light == true){
    digitalWrite(16, LOW);
    delay(500);
    light = false;
  }
  
}
