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

#endif
>>>>>>> 71e590e4866e4203e0999e7be58049b7277e0d15