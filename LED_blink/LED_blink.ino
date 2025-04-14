int keepOnTime = 2000;
int keepOffTime = 100;
int LEDPin = 13;

void setup() {
  // alernative: can use LED_BUILTIN to detect LED's pin dynamic on different boards
  pinMode(LEDPin, OUTPUT);

}

void loop() {
  digitalWrite(LEDPin, HIGH);
  delay(keepOnTime);

  digitalWrite(LEDPin, LOW);
  delay(keepOffTime);
}