#include "screen.h"
// Инклудим класс


extern uint8_t BigFont[];

void setup() {
    Screen screen;
    screen.init();
    // выбираем большой шрифт
    LCD.setFont(BigFont);
    // устанавливаем красный цвет «чернил» для печати и рисования
    LCD.setColor(VGA_RED);
    // печатаем строку в указанной строке позиции
    LCD.print("Hello, World!", CENTER, 0);
}
void loop() {
}