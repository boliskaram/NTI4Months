/*
 * toggle_led_using_exti.c
 *
 * Created: 10/23/2023 11:39:42 AM
 *  Author: Bolis
 */ 

#include "toggle_led_count_on_lcd_using_exti.h"

void toggle_led_callback(){
	_delay_ms(200);
	static int counterINT = 1 ;
	static int flag = 0;
	HAL_LCD_clear_screen();
	HAL_LED_Toggle(PORT_A,PIN4);
	
	if(flag == 0){
		HAL_LCD_Write_Number(counterINT);
		counterINT++;
	}else{
		HAL_LCD_Write_Number(counterINT);
		counterINT--;
	}
	
	if(counterINT==10){
		flag = 1 ;
		
	}
	else if(counterINT == 1){
		flag = 0;
	}
}

void Toggle_LED_Count_Init(){
	
	HAL_LED_Init(PORT_A,PIN4);
	HAL_LCD_Init();
	
	ST_EXTI_Config_t EXTI_CFG ;
	EXTI_CFG.EXTI_NAME = INT_1;
	EXTI_CFG.EXTI_MODE = RISING_EDGE_MODE ;
	EXTI_CFG.P_IRQ_CallBack = toggle_led_callback ;
	MCAL_EXTI_Init(&EXTI_CFG);
	
}

void Toggle_LED_Count_Update(){
	
}