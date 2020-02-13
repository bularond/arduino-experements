#include "nrf24.h"

nrf24 nrf;

byte *data;

void setup(){
    Serial.begin(9600);
    nrf.init();
}

void loop(){
    nrf.get_data(data);
    if(data){
        Serial.print(data[0]);
        Serial.print(" ");
        Serial.print(data[1]);
        Serial.print(" ");
        Serial.print(data[2]);
        Serial.print(" ");
        Serial.print("\n");
    }
}

