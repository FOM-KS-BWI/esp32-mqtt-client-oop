#include <Arduino.h>
#include <heltec.h>
#include "firmware.h"

#define BUTTON_PIN 0
#define BUTTON_AKTIV (!digitalRead(BUTTON_PIN))

Firmware firmware;

void setup() {
  Heltec.begin(true, false, true);
  // put your setup code here, to run once:
  firmware.begin("broker.hivemq.com");
}

void loop() {
  // put your main code here, to run repeatedly:
  firmware.loop();
}