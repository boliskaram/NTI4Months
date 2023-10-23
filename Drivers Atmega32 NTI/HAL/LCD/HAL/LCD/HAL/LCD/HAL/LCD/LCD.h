/*
 * LCD.h
 *
 * Created: 10/21/2023 11:33:07 AM
 *  Author: Bolis
 */ 


#ifndef LCD_H_
#define LCD_H_

#include <stdio.h>
#include "../../LIB/std_types.h"
#include "../../MCAL/DIO/dio.h"

//#define EIGHT_BIT_MODE
#define FOUR_BIT_MODE

#define EN_Pin		PIN2
#define RS_Pin		PIN3

#define Control_Port	PORT_D
#define Data_Port		PORT_C


#define LCD_CLEAR_SCREEN			(0x01)
#define LCD_BEGIN_AT_FIRST_RAW		(0x80)
#define LCD_BEGIN_AT_SECOND_RAW		(0xC0)
#define LCD_BEGIN_AT_THIRD_RAW		(0x94)
#define LCD_BEGIN_AT_FOURTH_RAW		(0xD4)


void HAL_LCD_Init();
void HAL_LCD_Write_cmd(uint8_t);
void HAL_LCD_Write_char(uint8_t);
void HAL_LCD_Write_string(uint8_t*);
//void HAL_LCD_Write_Number(int Number);
void HAL_LCD_goto(u8_t line ,u8_t position );
void HAL_LCD_clear_screen();


#endif /* LCD_H_ */