int softPot0 = 0;
int softPot1 = 0;
int softPot2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  softPot0 = analogRead(A0);
  softPot0 = analogRead(A1);
  softPot0 = analogRead(A2);
  
  Serial.print(softPot0);
  Serial.print("");
  Serial.print(softPot1);
  Serial.print("");
  Serial.println(softPot2);

  delay(5);

}
