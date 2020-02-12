// screen.h
#include "UTFT.h"
// Screen init class


UTFT LCD(CTE32HR, 38, 39, 40, 41);

class Screen {
    public:
        void init() {
            LCD.InitLCD();
            LCD.clrScr();
        }
        // Дальше здесь можно досписать систему вывода разной информации и т д, чтобы не засорять main.ino
};