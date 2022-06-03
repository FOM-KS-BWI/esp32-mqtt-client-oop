#include "firmware.h"

#include <utility>
#include "wifi_credentials.h"

Firmware::Firmware(/* args */){
    mqttClient = nullptr;
}

void Firmware::begin(String parameterMqttServer) {
    pinMode(LED_BUILTIN, OUTPUT);

    text.setText("Connecting WiFi");
    this->wifiName = WIFI_NAME;
    this->mqttServer = std::move(parameterMqttServer);
    // Connect to WiFi
    WiFi.begin(WIFI_NAME, WIFI_PASS);
    while (WiFiClass::status() != WL_CONNECTED) {
        delay(100); // 100ms warten...
    }
    text.setText("Connecting to MQTT");
    mqttClient = new MQTTClient();
    mqttClient->begin(this->mqttServer.c_str(), 1883, net);
    // Connect to MQTT broker
    while (!mqttClient->connect(CLIENT_ID, "public", "public")) {
        // Serial.print(".");
        delay(1000);
    }
    text.setText("Connection established.");
    mqttClient->onMessage(std::bind(&Firmware::messageReceived, this, std::placeholders::_1, std::placeholders::_2));
    mqttClient->subscribe("/BWIWS21KS");
}

void Firmware::loop() {
    mqttClient->loop();
}

void Firmware::messageReceived(String &topic, String &payload) {
  Serial.println("incoming: " + topic + " - " + payload);
  text.setText(payload);
  if (payload.startsWith("LED")) {
      // LED command
      if (payload.substring(3).toInt() > 0) {
          digitalWrite(LED_BUILTIN, 1);
      } else {
          digitalWrite(LED_BUILTIN, 0);
      }
  }
}