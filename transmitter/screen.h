// screen.h
#pragma once
#include "UTFT.h"
// Screen init class


UTFT LCD(TFT32MEGA_2, 38, 39, 40, 41);

class Screen {
    public:
        void init() {
            LCD.InitLCD();
            LCD.clrScr();
        }
        // Дальше здесь можно досписать систему вывода разной информации и т д, чтобы не засорять main.ino
};