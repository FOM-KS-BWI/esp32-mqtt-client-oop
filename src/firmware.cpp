#include "firmware.h"
#include "wifi_credentials.h"

void Firmware::begin(String mqttServer) {
    this->wifiName = WIFI_NAME;
    this->mqttServer = mqttServer;
    // Connect to WiFi
    // Connect to MQTT broker
}