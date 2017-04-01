int timex = 20000;
void setup() {
  pinMode(9, OUTPUT);

}

void loop() {
  digitalWrite(9, HIGH);
  delayMicroseconds(timex);
  digitalWrite(9, LOW);
  delayMicroseconds(20000 - timex);

}
