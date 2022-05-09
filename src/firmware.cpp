#include "firmware.h"
#include "wifi_credentials.h"

<<<<<<< HEAD
void Firmware::begin(String wifiName, String mqttServer) {
this->wifiName

=======
Firmware::Firmware(/* args */){
}

Firmware::~Firmware(){
}

void Firmware::begin(String mqttServer) {
    this->wifiName = WIFI_NAME;
    this->mqttServer = mqttServer;
    // Connect to WiFi
    // Connect to MQTT broker
>>>>>>> 71e590e4866e4203e0999e7be58049b7277e0d15
}