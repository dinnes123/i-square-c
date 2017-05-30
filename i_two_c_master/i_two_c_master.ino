#include <i2c.h>
i2c i2c_1;
void setup() 
{}
void loop() 
    {
          
   i2c_1.packet_size=31;  //設定封包大小，32是最大的封包大小，需扣掉標頭
          i2c_1.sent_packet[0]=0xa; //封包檢查碼，第一個位元必須是0xa才會被認定是封包
          for(int i=1;i<i2c_1.packet_size;i++)
                  {
                      i2c_1.sent_packet[i]=i;
                  }
          i2c_1.sent(9);  // i2c address 需與發送端對應
         
    }
