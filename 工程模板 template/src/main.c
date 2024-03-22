#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"


int main(void)
{
	delay_init(168);
	LED_Init();
	while(1)
	{
		GPIO_SetBits(GPIOF,GPIO_Pin_9);
	}
}

