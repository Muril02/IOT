
//Piscar 

void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  digitalWrite(6, HIGH);
  delay(5000);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  delay(5000);
  digitalWrite(8, LOW);
}
