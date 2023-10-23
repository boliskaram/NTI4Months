/*
 * keypad.h
 *
 * Created: 10/22/2023 11:40:06 AM
 *  Author: Bolis
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "../../MCAL/DIO/dio.h"

void HAL_KEYPAD_Init();
u8_t HAL_KEYPAD_READ();



#endif /* KEYPAD_H_ */