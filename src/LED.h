//
// Created by Claudius Stern on 03.06.2022.
//

#ifndef ESP32_MQTT_CLIENT_OOP_LED_H
#define ESP32_MQTT_CLIENT_OOP_LED_H

#include <Arduino.h>


class LED {
private:
    int helligkeit = 0;
    uint8_t kanal = 0;

public:
    void setHelligkeit(int parameterHelligkeit);
    void begin(int pin);
};


#endif //ESP32_MQTT_CLIENT_OOP_LED_H
