



void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
   int redValue = analogRead(A0);   
  int greenValue = analogRead(A1); 
  int blueValue = analogRead(A2);  

  
  redValue = map(redValue, 0, 1023, 0, 255);
  greenValue = map(greenValue, 0, 1023, 0, 255);
  blueValue = map(blueValue, 0, 1023, 0, 255);

  
  analogWrite(13, redValue);
  analogWrite(12, greenValue);
  analogWrite(11, blueValue);

}
