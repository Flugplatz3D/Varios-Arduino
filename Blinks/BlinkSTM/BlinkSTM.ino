#define LED PC13

void setup() {
  pinMode(LED, OUTPUT);
}
void loop() {
  digitalWrite(LED, bitRead(millis(), 8));
}
