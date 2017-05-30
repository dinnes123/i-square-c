#ifndef KEYBOARD_H
#define KEYBOARD_H
#include "Arduino.h"
#include <Keypad.h>


class keyboards 
          { 
            public:      
            ~keyboards();
            keyboards(); 
            
            char key_get_value();
               
          };
#endif
