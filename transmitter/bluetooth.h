#pragma once

Serial1.begin(38400);
int pin = 1234;
String receiver_addr = "18:91:d72d55";
class Bluetooth {
    public:
        void setup_receiver() {
            Serial1.println("AT+DISC");
            Serial1.println("AT+ORGL");
            Serial1.println("AT+RMAAD");
            Serial1.println("AT+NAME=LORA_ONE_LOVE_R");
            Serial1.println("AT+PSWD=" + String(pin));
            Serial1.println("AT+ROLE=0");
            Serial1.println("AT+UART=38400,0,0");
            Serial1.println("AT+RESET");
        }
        void setup_transmitter() {
            Serial1.println("AT+DISC");
            Serial1.println("AT+ORGL");
            Serial1.println("AT+RMAAD");
            Serial1.println("AT+BIND=" + receiver_addr);
            Serial1.println("AT+CMODE=0");
            Serial1.println("AT+ROLE=1");
            Serial1.println("AT+PSWD=" + String(pin));
            Serial1.println("AT+INQM=0,5,5");
            Serial1.println("AT+INIT");
            Serial1.println("AT+INQ");
            delay(5000);
            Serial1.println("AT+PAIR=" + receiver_addr + ",5");
            delay(5000);
            Serial1.println("AT+BIND=" + receiver_addr);
            Serial1.println("AT+RESET");
        }
};