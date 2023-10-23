/*
 * toggle_led_using_exti.c
 *
 * Created: 10/23/2023 11:39:42 AM
 *  Author: Bolis
 */ 

#include "toggle_led_count_on_lcd_using_exti.h"

// For POLLING
//#include "../../MCAL/Global_INT/global_interrupt_private.h"


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
	
	//POLLING
	/*
	ST_EXTI_Config_t EXTI_CFG;
	EXTI_CFG.EXTI_NAME = INT_1;
	EXTI_CFG.EXTI_MODE = RISING_EDGE_MODE;

	MCAL_EXTI_Init(&EXTI_CFG);
	MCAL_DIO_Init_Pin(PORT_A,PIN5,OUTPUT);
	MCAL_Global_Interrupt_Disable();
	*/
}

void Toggle_LED_Count_Update(){
	//POLLING
	/*if (READ_BIT(GIFR,7)==1)
	{
		MCAL_DIO_Write_Pin(PORT_A,PIN5,High);
		SET_BIT(GIFR,7);
		_delay_ms(800);
		}else{
		MCAL_DIO_Write_Pin(PORT_A,PIN5,LOW);
	}
	*/
}