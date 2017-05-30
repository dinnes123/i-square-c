#include <i2c.h>
i2c i2c_1;

void setup() 
      {
        Serial.begin(9600);           // start serial for output
      }

void loop() 
      {
      
  i2c_1.packet_size=31;   //設定要接收的封包大小，32是最大的封包大小，需扣掉標頭
          if(i2c_1.receive(9))   //若有接收到則開始顯示
          for(int i=0;i<i2c_1.packet_size;i++)
                        {
                            Serial.print(" ");Serial.print(i2c_1.receive_packet[i]);
                        }
          Serial.println();

        
      }

