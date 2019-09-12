#include "gpio.h"

 basic led;
int main()
{
 
  led.port = PORTA;
  led.pin  = PIN_1;
  led.mode = OUT;
  startPin(led);
 while(1)
 {
    
   
  }

}