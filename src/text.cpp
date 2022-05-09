#include <text.h>
#include <heltec.h>

Text::Text(/* args */) {
    Heltec.display->clear();
}

Text::~Text() {
}

void Text::setText(String eingabe){
    Heltec.display->clear();
    this->eingabe = eingabe;
    Heltec.display->drawString(0,0,eingabe);
}

String Text::getText(){

    return this->eingabe;
}