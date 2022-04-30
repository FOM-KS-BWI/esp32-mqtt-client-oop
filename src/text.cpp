#include <text.h>
#include <Arduino.h>

Text::Text(/* args */) {
}

Text::~Text() {
}

void Text::setText(String eingabe){
    this->eingabe = eingabe;
}

String Text::getText(){

    return this->eingabe;
}