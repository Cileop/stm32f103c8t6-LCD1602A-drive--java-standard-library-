#include "stm32f10x.h"                  // Device header

void FengMingQi_Init(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIOA_FMQInitStruct;
	GPIOA_FMQInitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIOA_FMQInitStruct.GPIO_Pin=GPIO_Pin_0;
	GPIOA_FMQInitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init (GPIOA,&GPIOA_FMQInitStruct);

}

void FengMingQi_KaiGuan(uint8_t Var)
{
  if(Var ==0)
 {
    GPIO_ResetBits(GPIOA,GPIO_Pin_0);
 }
 else
 {
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
 }
}





