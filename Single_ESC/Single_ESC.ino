void setup() {
  pinMode(9, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(14, INPUT);

}

void loop() {


int timex;

timex = pulseIn(14, HIGH);

if (timex > 1325 || timex < 100){
  digitalWrite(9, LOW);
  digitalWrite(13, LOW);
}
else{
  digitalWrite(9, HIGH);
  digitalWrite(13, HIGH);
}

if ((timex >= 1335 && timex < 1370) || (timex <= 1305 && timex > 1280)){
  digitalWrite(A0, HIGH);
  delay(1);
  digitalWrite(A0, LOW);
  delay(9);
}
else if ((timex >= 1420 && timex < 1470) || (timex <= 1280 && timex > 1235)){
  digitalWrite(A0, HIGH);
  delay(2);
  digitalWrite(A0, LOW);
  delay(8);
}
else if ((timex >= 1470 && timex < 1520) || (timex <= 1235 && timex > 1190)){
  digitalWrite(A0, HIGH);
  delay(3);
  digitalWrite(A0, LOW);
  delay(7);
}
else if ((timex >= 1520 && timex < 1570) || (timex <= 1190 && timex > 1145)){
  digitalWrite(A0, HIGH);
  delay(4);
  digitalWrite(A0, LOW);
  delay(6);
}
else if ((timex >= 1570 && timex < 1620) || (timex <= 1145 && timex > 1100)){
  digitalWrite(A0, HIGH);
  delay(5);
  digitalWrite(A0, LOW);
  delay(5);
}
else if ((timex >= 1620 && timex < 1670) || (timex <= 1100 && timex > 1055)){
  digitalWrite(A0, HIGH);
  delay(6);
  digitalWrite(A0, LOW);
  delay(4);
}
else if ((timex >= 1670 && timex < 1720) || (timex <= 1055 && timex > 1010)){
  digitalWrite(A0, HIGH);
  delay(7);
  digitalWrite(A0, LOW);
  delay(3);
}
else if ((timex >= 1720 && timex < 1770) || (timex <= 1010 && timex > 964)){
  digitalWrite(A0, HIGH);
  delay(8);
  digitalWrite(A0, LOW);
  delay(2);
}
else if ((timex >= 1770 && timex < 1810) || (timex <= 964 && timex > 930)){
  digitalWrite(A0, HIGH);
  delay(9);
  digitalWrite(A0, LOW);
  delay(1);
}
else if (timex >= 1810 || (timex < 930 && timex > 100)){
  digitalWrite(A0, HIGH);
  delay(10);
}
else if (timex <= 100){
  digitalWrite(A0, LOW);
}
else{
  digitalWrite(A0, LOW);
}



}
