 #include "i2c.h" //include the declaration for this class
i2c::i2c()
              {
                  Wire.begin(); // join i2c bus (address optional for master)
              }
i2c::~i2c()
              {
              }
int i2c::sent(int address)
                  {
                          Wire.begin();
                        Wire.beginTransmission(address); // transmit to device #8
                        for(int i=0;i<packet_size;i++)
                            {
                                 Wire.write(sent_packet[i]);
                            }
                        Wire.endTransmission();    // stop transmitting  
                  }
int i2c::receive(int address)
                  {
                             Wire.begin();
                       Wire.begin(address);                
                       Wire.onReceive(i2c::receiveEvent);
                       Serial.print("");
                       while (Wire.available()>packet_size-1) 
                              { 
                                     for(int i=0;i<packet_size;i++)
                                        {
                                            receive_packet[i]=Wire.read();
                                            //Serial.println(receive_packet[i]);
                                        }
                                    if(receive_packet[0]!=0xa)
                                    return receive(address);
                                    else
                                    return 1;
                               }
                      return receive(address);
                  }
int i2c::show()
    {
         /*for(int i=0;i<packet_size;i++)
                                    {
                                       Serial.print( receive_packet_BACK_UP[i]);Serial.print(" ");
                                    }
         Serial.println(" ");*/
    }
void static i2c::receiveEvent(int howMany) 
     {
     }
