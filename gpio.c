#include "gpio.h"

void startPin(basic gelen)
{
   GPIO_InitTypeDef GPIO_InitStruct;
   RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
  
   GPIO_InitStruct.GPIO_Pin = gelen.pin;
   GPIO_InitStruct.GPIO_Speed=GPIO_Speed_2MHz;
   GPIO_InitStruct.GPIO_Mode = gelen.mode;
   
   GPIO_Init(gelen.port, &GPIO_InitStruct); 
  
}
