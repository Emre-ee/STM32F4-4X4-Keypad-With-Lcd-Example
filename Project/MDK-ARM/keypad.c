#include "main.h"
#include "stm32f4xx_hal.h"
#include "keypad.h"
uint8_t KeypadGetKey()

	{

	    // Scan column 0 (column 0 pin is grounded, other column pins

	    // is open drain)

	   HAL_GPIO_WritePin(GPIOE,OUT_0_Pin,GPIO_PIN_RESET); //GPIO_ResetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL0);

	   HAL_GPIO_WritePin(GPIOE,OUT_1_Pin,GPIO_PIN_SET); //  GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL1);

	   HAL_GPIO_WritePin(GPIOE,OUT_2_Pin,GPIO_PIN_SET); //GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL2);

	   HAL_GPIO_WritePin(GPIOE,OUT_3_Pin,GPIO_PIN_SET); //GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL3);

	    HAL_Delay(1);

	    // Read rows

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_0_Pin))           	//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW0)

	        return '1';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_1_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW1)

	        return '4';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_2_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW2)

	        return '7';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_3_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW3)

	        return '*';

	   

	    // Scan column 1 (column 1 pin is grounded, other column pins

	    // is open drain)

	    HAL_GPIO_WritePin(GPIOE,OUT_0_Pin,GPIO_PIN_SET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL0);

	    HAL_GPIO_WritePin(GPIOE,OUT_1_Pin,GPIO_PIN_RESET);//GPIO_ResetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL1);

	    HAL_GPIO_WritePin(GPIOE,OUT_2_Pin,GPIO_PIN_SET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL2);

	    HAL_GPIO_WritePin(GPIOE,OUT_3_Pin,GPIO_PIN_SET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL3);

	   HAL_Delay(1);  // DelayUs(1);

	    // Read rows

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_0_Pin))           	//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW0)

	        return '2';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_1_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW1)

	        return '5';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_2_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW2)

	        return '8';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_3_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW3)

	        return '0';

	   

	    // Scan column 2 (column 2 pin is grounded, other column pins

	    // is open drain)

	    HAL_GPIO_WritePin(GPIOE,OUT_0_Pin,GPIO_PIN_SET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL0);

	    HAL_GPIO_WritePin(GPIOE,OUT_1_Pin,GPIO_PIN_SET);//GPIO_ResetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL1);

	    HAL_GPIO_WritePin(GPIOE,OUT_2_Pin,GPIO_PIN_RESET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL2);

	    HAL_GPIO_WritePin(GPIOE,OUT_3_Pin,GPIO_PIN_SET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL3);

	   HAL_Delay(1);  // DelayUs(1);

	    // Read rows

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_0_Pin))           	//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW0)

	        return '3';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_1_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW1)

	        return '6';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_2_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW2)

	        return '9';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_3_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW3)

	        return '#';

	   

	    // Scan column 3 (column 3 pin is grounded, other column pins

	    // is open drain)

	    HAL_GPIO_WritePin(GPIOE,OUT_0_Pin,GPIO_PIN_SET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL0);

	    HAL_GPIO_WritePin(GPIOE,OUT_1_Pin,GPIO_PIN_SET);//GPIO_ResetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL1);

	    HAL_GPIO_WritePin(GPIOE,OUT_2_Pin,GPIO_PIN_SET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL2);

	    HAL_GPIO_WritePin(GPIOE,OUT_3_Pin,GPIO_PIN_RESET);//GPIO_SetBits(KEYPAD_GPIO_COL, KEYPAD_PIN_COL3);

	    HAL_Delay(1);  // DelayUs(1);

	    // Read rows

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_0_Pin))           	//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW0)

	        return 'A';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_1_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW1)

	        return 'B';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_2_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW2)

	        return 'C';

	    if (!HAL_GPIO_ReadPin(GPIOE,IN_3_Pin))			//GPIO_ReadInputDataBit(KEYPAD_GPIO_ROW, KEYPAD_PIN_ROW3)

	        return 'D';

	 

	    return KEYPAD_NO_PRESSED;

	}