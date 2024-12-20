// This project will blink an LED


/* This is a preprocessor directive that defines LED_PIN as a constant with the value 13. This makes the code easier to read and modify because you can use LED_PIN instead of the number 13.
Purpose: Assigns digital pin 13 (where the LED is connected) a descriptive name LED_PIN. */

#define LED_PIN 13

void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
