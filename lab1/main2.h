#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f10x.h"

//set delay time between on/off LED
#define DELAY_VAL 500000

/* Set LED */
#define LED1_ON_OFF() GPIOA->ODR ^= GPIO_ODR_ODR0

#define LED2_ON_OFF() GPIOA->ODR ^= GPIO_ODR_ODR1

#define LED3_ON_OFF() GPIOA->ODR ^= GPIO_ODR_ODR3

#define LED4_ON_OFF() GPIOA->ODR ^= GPIO_ODR_ODR4

//fuction
void delay(uint32_t time);

#endif
