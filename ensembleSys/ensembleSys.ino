void setup() {
  
  Serial.begin(9600);
  
}

void loop() {

  int softPot0 = analogRead(0);
  int softPot1 = analogRead(1);
  int softPot2 = analogRead(2);
  
  Serial.print(softPot0);
  Serial.print(" ");
  Serial.print(softPot1);
  Serial.print(" ");
  Serial.println(softPot2);

  delay(5);

}
