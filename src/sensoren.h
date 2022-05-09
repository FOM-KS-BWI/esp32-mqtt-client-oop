#ifndef SENSOREN_H
#define SENSOREN_H

#include <Arduino.h>


class Sensoren{
private:
    /* data */
    String bezeichnung;
    int port;
    double_t wert;

public:
    Sensoren(/* args */);
    ~Sensoren();

    void begin(String bezeichnung, int port);
    // Starten des Sensors mit korrekten Daten (Portzuweisung, Bezeichnung des Sensors)
    void abfrage(double_t wert);
    // Abfrage des Sensors für seinen Wert
    // Bereitstellen der Daten aus dem Sensor für die Übertragung an MQTT
};

#endif
