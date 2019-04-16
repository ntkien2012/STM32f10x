#include "main2.h"

int main(void)
{
	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN; //bat dong ho GPIOA
	
	GPIOA->CRL = 0;											//lam sach thanh ghi cau hinh
	GPIOA->CRL |= GPIO_CRL_MODE0_1;			//LD1, output 2MHz
	GPIOA->CRL |= GPIO_CRL_MODE1_1;			//LD2, ouput 2MHz
	GPIOA->CRL |= GPIO_CRL_MODE3_1;			//LD3, output 2MHz
	GPIOA->CRL |= GPIO_CRL_MODE4_1;			//LD4, ouput 2MHz
	
	//Unlimited cycle
	while(1)
	{
		LED1_ON_OFF();
		delay(DELAY_VAL);
		LED2_ON_OFF();
		delay(DELAY_VAL);
		LED3_ON_OFF();
		delay(DELAY_VAL);
		LED4_ON_OFF();
		delay(DELAY_VAL);
	}
}

void delay(uint32_t time)
{
	uint32_t i;
	for(i = 0; i < time; i++)
	{};
}
