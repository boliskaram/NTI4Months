/*
 * turn_on_LED_using_button.c
 *
 * Created: 10/22/2023 10:31:56 AM
 *  Author: Bolis
 */ 


#include "turn_on_LED_using_button.h"


void Button_Init(){
	HAL_LED_Init(PORT_A,PIN5);
	HAL_PUSH_BUTTON_Init(PORT_D,PIN3);
}

void Button_Update(){
	
	u8_t buttonval = High ;
	HAL_PUSH_BUTTON_Read(PORT_D,PIN3,&buttonval);
	
	if (buttonval == LOW){
		HAL_LED_ON(PORT_A,PIN5);
		while (buttonval == LOW){
			HAL_PUSH_BUTTON_Read(PORT_D,PIN3,&buttonval);
		}
	}
	else{
		HAL_LED_OFF(PORT_A,PIN5);
	}
}