#include "nrf24.h"

nrf24 nrf;

byte data[5];

void setup(){
    Serial.begin(9600);
    nrf.init();
}

void loop(){
    if(nrf.get_data(data, sizeof(data))){
        Serial.print(data[0]);
        Serial.print(" ");
        Serial.print(data[1]);
        Serial.print(" ");
        Serial.print(data[2]);
        Serial.print(" ");
        Serial.print(data[3]);
        Serial.print(" ");
        Serial.print(data[4]);
        Serial.print("\n");
    }
}

