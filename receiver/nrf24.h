#include <SPI.h>
#include <RF24.h>

#define PIPE 123456789
#define CHANNEL 150
#define RADIO_PIN_FIRST 9
#define RADIO_PIN_SECOND 10

RF24 radio(RADIO_PIN_FIRST, RADIO_PIN_SECOND);

class nrf24{
    private:
    public:
        bool init(){
            radio.begin();
            radio.setDataRate(RF24_2MBPS);
            radio.setCRCLength(RF24_CRC_8);
            radio.setPALevel(RF24_PA_MAX);
            radio.setChannel(CHANNEL);
            radio.setAutoAck(false);
            radio.powerUp();
            radio.openWritingPipe(PIPE);

            return true;
        }

        void send_data(byte data[], int len){
            radio.write(data, len);
        }

        bool get_data(byte* data, int len){
            if (radio.available()){
                radio.read(data, len);
                return true;
            }
            else
                return false;
        }
};
