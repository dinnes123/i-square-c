 #include "Keyboard_small.h" //include the declaration for this class
keyboards::keyboards()
              {
              
              }
               
keyboards::~keyboards()
              {
                  
              }
char keyboards::key_get_value()
              {
              
              byte ROWS = 4; // 4 Rows
              byte COLS = 3; // 3 Columns
                char keys[ROWS][COLS] = 
                                    {
                                          {'1','2','3'},
                                          {'4','5','6'},
                                          {'7','8','9'},
                                          {'*','0','#'}
                                    };
                                    // 定義 Keypad 連到 Arduino 的接腳
                                  byte rowPins[ROWS] = {9, 8, 7, 6}; // 連到 Keypad 的 4 個 Rows: Row0, Row1, Row2, Row3 
                                  byte colPins[COLS] = {12, 11, 10};   // 連到 Keypad 的 3 個 Columns: Column0, Column1, Column2
                                  // 建立 Keypad 物件              Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
                                  Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );       

                  
                   char key = keypad.getKey();
                  
                    //Serial.print("key=");Serial.println(key);
                  // NO_KEY 代表沒有按鍵被按下
                  if (key != NO_KEY)
                              {
                                 
                                 if(key!=42)
                                            {
                                              // Serial.println(key);
                                               return key-48;
                                             }
                                 //Serial.println(key);
                                 return '*';
                              }
                    else      {
                                   //key=0;
                                   //Serial.print("key2=");Serial.println(key);
                                  return key;
                              }
              }
