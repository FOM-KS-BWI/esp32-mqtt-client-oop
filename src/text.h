#ifndef TEXT_H
#define TEXT_H

#include <Arduino.h>

class Text{
private:
    /* data */
    String eingabe;

public:
    Text(/* args */);
    ~Text();
    void setText(String eingabe);
};


#endif