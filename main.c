#include "main.h"

int main (void){
	InitRCC();
	InitGPIO();
	while (1){
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET);	
	}
}

void InitRCC(void){
		//SysCLK Init (External CLK 8 Mhz from ST-LINK, PLL mul by 6 = 48 Mhz)
		HAL_RCC_OscConfig(RCC_INIT_CONFIG);
		
		LED_PORT_CLK_ENABLE;
		
	
}

void InitGPIO(){
	HAL_GPIO_Init(LED_PORT, LED_PIN_CONF);
	
}
