void setup() {
  pinMode(A0, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
int timex;
  
 timex = pulseIn(14, HIGH);

if (timex > 1320){
  digitalWrite(13, LOW);
}
else{
  digitalWrite(13, HIGH);
}

}
