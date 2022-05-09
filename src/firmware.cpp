#include "firmware.h"
#include "wifi_credentials.h"

Firmware::Firmware(/* args */){
}

Firmware::~Firmware(){
}

void Firmware::begin(String mqttServer) {
    text.setText("Connecting WiFi");
    this->wifiName = WIFI_NAME;
    this->mqttServer = mqttServer;
    // Connect to WiFi
    WiFi.begin(WIFI_NAME, WIFI_PASS);
    while (WiFi.status() != WL_CONNECTED) {
        delay(100); // 100ms warten...
    }
    text.setText("Connecting to MQTT");
    // Connect to MQTT broker
    while (!mqttClient.connect(CLIENT_ID, "public", "public")) {
        // Serial.print(".");
        delay(1000);
    }
    text.setText("Connection established.");
}