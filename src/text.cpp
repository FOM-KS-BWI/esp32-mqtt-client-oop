#include <text.h>
#include <heltec.h>

Text::Text(/* args */) {
}

Text::~Text() {
}

void Text::setText(String eingabe){
    Heltec.display->clear();
    this->eingabe = eingabe;
    Heltec.display->drawString(0,0,eingabe);
    Heltec.display->display();
}

String Text::getText(){

    return this->eingabe;
}