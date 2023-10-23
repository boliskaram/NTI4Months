/*
 * turn_on_LED_using_button.h
 *
 * Created: 10/22/2023 10:32:05 AM
 *  Author: Bolis
 */ 


#ifndef TURN_ON_LED_USING_BUTTON_H_
#define TURN_ON_LED_USING_BUTTON_H_

#include "../../LIB/std_types.h"
#include "../../LIB/bit_math.h"
#include "../../HAL/LED/led.h"
#include "../../HAL/Push_Button/push_button.h"
#include "../../MCAL/DIO/dio.h"


void Button_Init(void);
void Button_Update(void);

#endif /* TURN_ON_LED_USING_BUTTON_H_ */