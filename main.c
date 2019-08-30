#include "gpio.h"

 basic led;





int main()
{
 
  led.port = PORTA;
  led.pin  = PIN_1;
  led.speed= MHz_2;

    
 while(1)
 {
    out(led,1);
   
  }

}