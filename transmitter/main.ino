#include "nrf24.h"

nrf24 nrf;

byte data[5] = {2, 1, 4, 5, 6};

void setup(){
    /* nrf.init(); */
    radio.begin();
    radio.setDataRate(RF24_1MBPS);
    radio.setCRCLength(RF24_CRC_8);
    radio.setPALevel(RF24_PA_MAX);
    radio.setChannel(CHANNEL);
    radio.setAutoAck(false);
    radio.powerUp();
    radio.openWritingPipe(PIPE);
}

void loop(){
    Serial.print("Send\n");
    nrf.send_data(data, sizeof(data));
}

