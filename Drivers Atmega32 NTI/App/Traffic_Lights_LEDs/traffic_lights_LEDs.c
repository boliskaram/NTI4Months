/*
 * traffic_lights_LEDs.c
 *
 * Created: 10/22/2023 1:32:27 AM
 *  Author: Bolis
 */ 

#include "traffic_lights_LEDs.h"

void Traffic_Light_Init(){
	HAL_Seven_Segment_Init();
	HAL_LED_Init(PORT_A,PIN4);
	HAL_LED_Init(PORT_B,PIN7);
	HAL_LED_Init(PORT_A,PIN6);
}
void Traffic_Light_Update(){
	
	for(u8_t i = 10 ;i > 0 ; i--){
		HAL_LED_ON(PORT_B,PIN7);
		HAL_Seven_Segment_Write((i-1),COM1);
		HAL_LCD_Write_Number(i-1);	
		_delay_ms(800);
		HAL_LCD_clear_screen();
	}
	HAL_LED_OFF(PORT_B,PIN7);
	
	for(u8_t i = 4 ;i > 0 ; i--){
		HAL_LED_ON(PORT_A,PIN6);
		HAL_Seven_Segment_Write((i-1),COM1);	
		HAL_LCD_Write_Number(i-1);
		_delay_ms(800);
		HAL_LCD_clear_screen();
	}
	HAL_LED_OFF(PORT_A,PIN6);
	
	for(u8_t i = 8 ;i > 0 ; i--){
		HAL_LED_ON(PORT_A,PIN4);
		HAL_Seven_Segment_Write((i-1),COM1);
		HAL_LCD_Write_Number(i-1);
		_delay_ms(800);
		HAL_LCD_clear_screen();
	}
	HAL_LED_OFF(PORT_A,PIN4);
	
}