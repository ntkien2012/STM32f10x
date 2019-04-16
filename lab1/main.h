#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f10x.h"

//set delay time between on/off LED
#define DELAY_VAL 500000

/* Set LED */
#define LED1_ON() GPIOA->BSRR |= GPIO_BSRR_BS0
#define LED1_OFF() GPIOA->BSRR |= GPIO_BSRR_BR0

#define LED2_ON() GPIOA->BSRR |= GPIO_BSRR_BS1
#define LED2_OFF() GPIOA->BSRR |= GPIO_BSRR_BR1

#define LED3_ON() GPIOA->BSRR |= GPIO_BSRR_BS3
#define LED3_OFF() GPIOA->BSRR |= GPIO_BSRR_BR3

#define LED4_ON() GPIOA->BSRR |= GPIO_BSRR_BS4
#define LED4_OFF() GPIOA->BSRR |= GPIO_BSRR_BR4

//fuction
void delay(uint32_t takts);

#endif

