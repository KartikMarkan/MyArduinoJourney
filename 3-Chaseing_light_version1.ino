// This chasing lights turn one light on and off 
void setup() {
  // put your setup code here, to run once:
  for (int i = 13; i >= 6; i--) {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 13; i >= 6; i--) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }

}
