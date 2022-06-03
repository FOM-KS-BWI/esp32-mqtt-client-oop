#ifndef FIRMWARE_H
#define FIRMWARE_H

#include <Arduino.h>
#include <MQTT.h>
#include <WiFi.h>
#include "sensoren.h"
#include "text.h"
#include "LED.h"

class Firmware {
private:
    /* data */
    String mqttServer;
    String wifiName;
    MQTTClient *mqttClient;
    WiFiClient net;
    Sensoren sensoren;
    Text text;
    class LED led;

    void messageReceived(String &topic, String &payload);

public:
    Firmware();

    void begin(String parameterMqttServer);
    void loop();
};

#endif