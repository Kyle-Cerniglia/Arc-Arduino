int pin = A5;

void setup() {
  pinMode(pin, OUTPUT);
  //analogWrite(pin, 64);
}

void loop() {
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}
