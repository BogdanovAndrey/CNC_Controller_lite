#ifndef __PINOUT_H__
#define __PINOUT_H__

#define LED_PORT 	GPIOA
#define LED_PIN  	GPIO_PIN_5
#define LED_PIN_CONF 	&(GPIO_InitTypeDef){    \
										GPIO_PIN_5,           \
										GPIO_MODE_OUTPUT_PP,  \
										GPIO_NOPULL,          \
										GPIO_SPEED_FREQ_LOW,  \
										0                     \
										}                     
#define LED_PORT_CLK_ENABLE __HAL_RCC_GPIOA_CLK_ENABLE();


#define UART_PORT 	GPIOA
#define UART_PIN  	GPIO_PIN_5
#define UART_PIN_CONF 	&(GPIO_InitTypeDef){    \
										GPIO_PIN_5,           \
										GPIO_MODE_OUTPUT_PP,  \
										GPIO_NOPULL,          \
										GPIO_SPEED_FREQ_LOW,  \
										0                     \
										}   										
#define UART_PORT_CLK_ENABLE 										
#endif //__PINOUT_H__
										