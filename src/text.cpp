#include <text.h>
#include <heltec.h>

Text::Text(/* args */) {
    Heltec.display->clear();
}

Text::~Text() {
}

void Text::setText(String eingabe){
    this->eingabe = eingabe;
}

String Text::getText(){

    return this->eingabe;
}