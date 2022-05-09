#ifndef FIRMWARE_H
<<<<<<< HEAD
#define FIRMWARE_H 

#include <Arduino.h>
#include <mqtt.h>
#include <WiFi.h>

class Firmware{
    private:
    ..../*data */
    public: 
    Firmware(/* args */);
    ~Firmware(); 
};

Firmware::FIRMWARE(/* args */){
}
Firmware::FIRMWARE(){
}

=======
#define FIRMWARE_H

#include <Arduino.h>
#include <MQTT.h>
#include <WiFi.h>
#include "sensoren.h"
#include "text.h"

class Firmware {
private:
    /* data */
    String mqttServer;
    String wifiName;
    MQTTClient *mqttClient;
    WiFiClient net;
    Sensoren sensoren;
    Text text;

    void messageReceived(String &topic, String &payload);

public:
    Firmware(/* args */);
    ~Firmware();

    void begin(String mqttServer);
    void loop();
};

#endif
>>>>>>> 71e590e4866e4203e0999e7be58049b7277e0d15