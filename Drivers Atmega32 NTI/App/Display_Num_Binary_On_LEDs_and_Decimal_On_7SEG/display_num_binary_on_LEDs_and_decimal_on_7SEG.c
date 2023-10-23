/*
 * display_num_binary_on_LEDs_and_decimal_on_7SEG.c
 *
 * Created: 10/21/2023 11:37:43 PM
 *  Author: Bolis
 */ 

#include "display_num_binary_on_LEDs_and_decimal_on_7SEG.h"


void Display_Number_Init(){
	HAL_Seven_Segment_Init();
	HAL_LED_Init(PORT_A,PIN4);
	HAL_LED_Init(PORT_A,PIN5);
	HAL_LED_Init(PORT_A,PIN6);
	HAL_LED_Init(PORT_B,PIN7);
}
void Display_Number_Update(){
	
	for (u8_t i = 0 ; i < 10 ; i++){
		HAL_Seven_Segment_Write(i,COM1);
		if (READ_BIT(i,0)==1)
		{
			HAL_LED_ON(PORT_B,PIN7);
		}else{
			HAL_LED_OFF(PORT_B,PIN7);
		}
		if (READ_BIT(i,1)==1)
		{
			HAL_LED_ON(PORT_A,PIN4);
		}else{
			HAL_LED_OFF(PORT_A,PIN4);
		}
		if (READ_BIT(i,2)==1)
		{
			HAL_LED_ON(PORT_A,PIN5);
		}else{
			HAL_LED_OFF(PORT_A,PIN5);
		}
		if (READ_BIT(i,3)==1)
		{
			HAL_LED_ON(PORT_A,PIN6);
		}else{
			HAL_LED_OFF(PORT_A,PIN6);
		}
		_delay_ms(800);
	}
}