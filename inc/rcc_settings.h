#define RCC_INIT_CONFIG                         \
						&(RCC_OscInitTypeDef){  					 	\
						RCC_OSCILLATORTYPE_HSE,            	\
						RCC_HSE_BYPASS,                    	\
						RCC_LSE_OFF,                       	\
						RCC_HSI_OFF,                       	\
						RCC_HSICALIBRATION_DEFAULT,        	\
						RCC_HSI14_OFF,                     	\
						RCC_HSI14CALIBRATION_DEFAULT,      	\
						RCC_LSI_OFF,                       	\
						RCC_HSI48_OFF,                     	\
						(RCC_PLLInitTypeDef) {             	\
							RCC_PLL_ON,                     	\
							RCC_PLLSOURCE_HSE,              	\
							RCC_PLL_MUL6,                   	\
							RCC_PREDIV_DIV1                 	\
						}                                 	\
					}

					
#define TIM_1_PORT_CLK_ENABLE __HAL_RCC_GPIOA_CLK_ENABLE();

 					