/*
 * write_name_on_LCD_using_button.h
 *
 * Created: 10/22/2023 9:43:23 PM
 *  Author: Bolis
 */ 


#ifndef WRITE_NAME_ON_LCD_USING_BUTTON_H_
#define WRITE_NAME_ON_LCD_USING_BUTTON_H_

#include "../../LIB/std_types.h"
#include "../../LIB/bit_math.h"
#include "../../HAL/LCD/LCD.h"
#include "../../HAL/Push_Button/push_button.h"
#include "../../MCAL/DIO/dio.h"


void Display_Name_Init();
void Display_Name_Update();


#endif /* WRITE_NAME_ON_LCD_USING_BUTTON_H_ */