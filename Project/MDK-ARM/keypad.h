

#ifndef __KEYPAD_H__
#define __KEYPAD_H__

#ifdef __cplusplus
extern "C" {
#endif

/** Includes ---------------------------------------------------------------- */
#include "stm32f4xx_hal.h"
#define KEYPAD_NO_PRESSED			0
uint8_t KeypadGetKey(void);

#ifdef __cplusplus
}
#endif






#endif