void setup() {
  pinMode(10, OUTPUT);
  pinMode(A0, INPUT);
  
  
}
int conduct = 0;
void loop() {
  conduct = analogRead(A0);
  
  if(conduct < 290){
    digitalWrite(10, HIGH);
  }
  else{
    digitalWrite(10, LOW);
  }
}
