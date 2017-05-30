#ifndef I2C_H
#define I2C_H
#include "Arduino.h"
#include <Wire.h>

class i2c 
          { 
            public:      
            ~i2c();
            i2c(); 
            int sent_packet[50];
            int packet_size=4;
            int sent(int address);
            int receive(int address);
            unsigned char Re_buf[5];
            int receive_packet[4];
            int receive_packet_BACK_UP[4];
            int show();
            int count=0;
            void static receiveEvent(int howMany);
               
          };
#endif
