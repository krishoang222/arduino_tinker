int count = 0;

void setup() {
  // press RESET physical button on board will re-run setup()
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("----- ");
  Serial.print(count);
  Serial.print(" shout -----");
  Serial.println();
  Serial.println("Hello world 👋");
  Serial.println("This is Arduino project.");
  Serial.println();
  count++;
  delay(1000);
}
