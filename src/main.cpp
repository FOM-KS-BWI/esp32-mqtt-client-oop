#include <Arduino.h>
#include <heltec.h>

#define BUTTON_PIN 0
#define BUTTON_AKTIV (!digitalRead(BUTTON_PIN))

void setup() {
  Heltec.begin(true, false, true);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}