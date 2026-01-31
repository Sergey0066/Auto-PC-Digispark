#include <Arduino.h>

void setup() {
  pinMode(0, OUTPUT);
  digitalWrite(0, LOW);
  delay(1500);
  digitalWrite(0, HIGH);
  delay(200);
  digitalWrite(0, LOW);
}

void loop() {}
