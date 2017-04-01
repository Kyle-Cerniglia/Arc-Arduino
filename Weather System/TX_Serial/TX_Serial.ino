

float humidf = 0;
int humid = 0;
int mod = 0;
int bit0 = 0;
int bit1 = 0;
int bit2 = 0;
int bit3 = 0;
int bit4 = 0;
int bit5 = 0;
int bit6 = 0;
int bit7 = 0;
int bit8 = 0;
int bit9 = 0;
int bit10 = 0;
int bit11 = 0;
int bit12 = 0;
int bit13 = 0;
int bit14 = 0;
int bit15 = 0;
float tempf = 0;
int temp = 0;
int celcius = 0;
int fahrenheiti = 0;
int timewait = 25;

//4 = RF out
//3 = Humid sensor
//2 = Temperature sensor

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {

  //Resets
  humid = 0;
  humidf = 0;
  mod = 0;
  bit0 = 0;
  bit1 = 0;
  bit2 = 0;
  bit3 = 0;
  bit4 = 0;
  bit5 = 0;
  bit6 = 0;
  bit7 = 0;
  bit8 = 0;
  bit9 = 0;
  bit10 = 0;
  bit11 = 0;
  bit12 = 0;
  bit13 = 0;
  bit14 = 0;
  bit15 = 0;
  digitalWrite(4, LOW);

  //humid = 35;

  //Reading
  humidf = analogRead(3);
  humidf = (((humidf / 1023) * 5.0) - 0.958) / 0.0307;
  humid = humidf;
//humid = 20;

  //temp
  temp = analogRead(A0);
  temp *= 100;
  temp = map(temp, 0, 1023, 0, 5);
  tempf = temp / 100.0;
  tempf -= 0.5;
  tempf *= 100;
  celcius = tempf;
  fahrenheiti = tempf * 2.0 + 32.0;

//fahrenheiti = 50;
  //Decimal to Binary conversion
  if(humid >= 1){//1 LSB
        mod = humid % 2;
        if(mod > 0){
            bit0 = 1;
        }
        humid = humid / 2;
    }

    if(humid >= 1){//2
        mod = humid % 2;
        if(mod > 0){
            bit1 = 1;
        }
        humid = humid / 2;
    }

    if(humid >= 1){//3
        mod = humid % 2;
        if(mod > 0){
            bit2 = 1;
        }
        humid = humid / 2;
    }

    if(humid >= 1){//4
        mod = humid % 2;
        if(mod > 0){
            bit3 = 1;
        }
        humid = humid / 2;
    }

    if(humid >= 1){//5
        mod = humid % 2;
        if(mod > 0){
            bit4 = 1;
        }
        humid = humid / 2;
    }

    if(humid >= 1){//6
        mod = humid % 2;
        if(mod > 0){
            bit5 = 1;
        }
        humid = humid / 2;
    }

    if(humid >= 1){//7
        mod = humid % 2;
        if(mod > 0){
            bit6 = 1;
        }
        humid = humid / 2;
    }

    if(humid >= 1){//8 MSB
        mod = humid % 2;
        if(mod > 0){
            bit7 = 1;
        }
    }



    if(fahrenheiti >= 1){//1 LSB
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit8 = 1;
        }
        fahrenheiti /= 2;
    }

    if(fahrenheiti >= 1){//2
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit9 = 1;
        }
        fahrenheiti /= 2;
    }

    if(fahrenheiti >= 1){//3
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit10 = 1;
        }
        fahrenheiti /= 2;
    }

    if(fahrenheiti >= 1){//4
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit11 = 1;
        }
        fahrenheiti /= 2;
    }

    if(fahrenheiti >= 1){//5
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit12 = 1;
        }
        fahrenheiti /= 2;
    }

    if(fahrenheiti >= 1){//6
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit13 = 1;
        }
        fahrenheiti /= 2;
    }

    if(fahrenheiti >= 1){//7
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit14 = 1;
        }
        fahrenheiti /= 2;
    }

    if(fahrenheiti >= 1){//8 MSB
        mod = fahrenheiti % 2;
        if(mod > 0){
            bit15 = 1;
        }
    }

    //Transmission
    //Initialization byte (170)
    digitalWrite(4, HIGH);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, HIGH);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, HIGH);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, HIGH);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);

    //ID byte (1)
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, LOW);
    delay(timewait);
    digitalWrite(4, HIGH);
    delay(timewait);

    //Data transmission byte 1
    if(bit0 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit1 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit2 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit3 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit4 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit5 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit6 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit7 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);


    //Data transmission byte 2
    if(bit8 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit9 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit10 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit11 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit12 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit13 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit14 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);
    if(bit15 > 0){
      digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
    }
    delay(timewait);

    delay(1);
    
/*
    //Ending byte
    digitalWrite(11, HIGH);
    digitalWrite(13, HIGH);
    delay(2);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    delay(2);
    digitalWrite(11, HIGH);
    digitalWrite(13, HIGH);
    delay(2);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    delay(2);
    digitalWrite(11, HIGH);
    digitalWrite(13, HIGH);
    delay(2);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    delay(2);
    digitalWrite(11, HIGH);
    digitalWrite(13, HIGH);
    delay(2);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    delay(2);
*/
}
