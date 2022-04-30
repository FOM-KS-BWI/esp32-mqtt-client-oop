#ifndef FIRMWARE_H
#define FIRMWARE_H

#include <Arduino.h>
#include <MQTT.h>
#include <WiFi.h>
#include "sensoren.h"

class Firmware {
private:
    /* data */
    String mqttServer;
    String wifiName;
    MQTTClient mqttClient;
    Sensoren sensoren;

public:
    Firmware(/* args */);
    ~Firmware();

    void begin(String mqttServer);
};

#endif