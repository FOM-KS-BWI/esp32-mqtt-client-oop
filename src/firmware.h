#ifndef FIRMWARE_H
#define FIRMWARE_H

#include <Arduino.h>
#include <MQTT.h>
#include <WiFi.h>

class Firmware {
private:
    /* data */
    String mqttServer;
    String wifiName;
    MQTTClient mqttClient;

public:
    Firmware(/* args */);
    ~Firmware();

    void begin(String mqttServer);
};

Firmware::Firmware(/* args */){
}

Firmware::~Firmware(){
}


#endif