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
    void abfrage(double_t wert);
};

#endif
