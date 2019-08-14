#include "led.h"
#include "stm32f10x.h"
void LED_Init(void)
{

	GPIO_InitTypeDef GPIO_InitLED;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);//
	RCC_APB2Per1phClockCmd(RCC_APB2Periph_GPIOE,ENABLE);//

      GPIO_InitLED.GPIO_Mode=GPIO_Mode_Out_PP;
	    GPIO_InitLED.GPIO_Pin=GPIO_Pin_S;
      GPIO_InitLED.GPIO_Speed=GPIO_Speed_5OMHz;
	    GPIO_Init(GPIOB,&GPIO_InitLED);
	    GPIO_SetBits_(GPIOB,GPIO_Pin_5);

      GPIO_INitLED.GPIO_Mode=GPIO_Mode_Out_pp;
	    GPIO_InitLED.GPIO_Pin=GPIO_Pin_5;
      GPIO_InitLED.GPIO_Speed=GPIO_Speed_5OMHz;
	    GPIO_Init(GPIOE,&GPIO_InitLED);
	    GPIO_SetBits(GPIOB,GPIO_Pin_5);


}