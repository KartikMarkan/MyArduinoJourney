// Traffic Light code. This code will blink three lights.

int LED_RED = 13; 
int LED_GREEN = 11; 
int LED_BLUE = 7; 

void setup() {
 // put your setup code here, to run once:
pinSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_RED, HIGH);
delay(1000); 
digitalWrite(LED_RED, LOW);
delay(1000);
digitalWrite(LED_GREEN, HIGH);
delay(1000); 
digitalWrite(LED_GREEN, LOW);
delay(1000);
digitalWrite(LED_BLUE, HIGH);
delay(1000); 
digitalWrite(LED_BLUE, LOW);
delay(1000);
}

void pinSetup(){
pinMode(LED_RED, OUTPUT);
pinMode(LED_GREEN, OUTPUT);
pinMode(LED_BLUE, OUTPUT);
}
