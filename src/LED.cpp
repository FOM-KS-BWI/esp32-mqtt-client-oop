//
// Created by Claudius Stern on 03.06.2022.
//

#include "LED.h"

void LED::setHelligkeit(int parameterHelligkeit) {
    // Ternärer Operator: bedingung ? dann-wert : sonst-wert
    // gibt einen Wert zurück. Beispiel: c = a < b ? a : b
    // c wird immer der kleinere Wert zugewiesen
    // Hier zur Prüfung verwendet:
    // ist der parameter < 0 (negativ), dann weise 0 zu, sonst:
    //   ist der parameter > 255, dann weise 255 zu, sonst:
    //     behalte den Wert (weise den gleichen Wert zu)
    parameterHelligkeit = parameterHelligkeit < 0 ? 0 : (parameterHelligkeit > 255 ? 255 : parameterHelligkeit);
    helligkeit = parameterHelligkeit;
    ledcWrite(this->kanal, helligkeit);
}

void LED::begin(int pin) {
    pinMode(pin, OUTPUT);
    ledcSetup(kanal, 1000, 8);
    ledcAttachPin(pin, kanal);
    setHelligkeit(0);
}
