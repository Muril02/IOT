



void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int potValue = analogRead(A0);        
  int ledValue = map(potValue, 0, 1023, 0, 255); 
  analogWrite(13, ledValue);   


}
