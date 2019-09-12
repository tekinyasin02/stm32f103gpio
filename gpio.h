#ifndef GPIO_H
#define GPIO_H
#include "stm32f10x.h"                  // Device header
#include "stm32f10x_gpio.h"             // Keil::Device:StdPeriph Drivers:GPIO
#include "stm32f10x_rcc.h"


#define PIN_1     GPIO_Pin_1
#define PORTA     GPIOA
#define MHz_2     GPIO_Speed_2MHz 
#define OUT       GPIO_Mode_Out_PP

typedef struct{
  uint16_t pin;
  uint16_t port;
  uint16_t mode;
  uint16_t speed;
}basic;

void out(basic pin,int value);
void startPin(basic gelen);
#endif