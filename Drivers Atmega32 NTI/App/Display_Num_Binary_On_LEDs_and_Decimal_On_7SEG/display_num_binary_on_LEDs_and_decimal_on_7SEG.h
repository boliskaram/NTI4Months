/*
 * display_num_binary_on_LEDs_and_decimal_on_7SEG.h
 *
 * Created: 10/21/2023 11:38:22 PM
 *  Author: Bolis
 */ 


#ifndef DISPLAY_NUM_BINARY_ON_LEDS_AND_DECIMAL_ON_7SEG_H_
#define DISPLAY_NUM_BINARY_ON_LEDS_AND_DECIMAL_ON_7SEG_H_

#include "../../LIB/std_types.h"
#include "../../LIB/bit_math.h"
#include "../../HAL/seven_segment/seven_segment.h"
#include "../../HAL/LED/led.h"
#include "../../MCAL/DIO/dio.h"


void Display_Number_Init();
void Display_Number_Update();


#endif /* DISPLAY_NUM_BINARY_ON_LEDS_AND_DECIMAL_ON_7SEG_H_ */