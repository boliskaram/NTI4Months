/*
 * write_name_on_LCD_using_button.c
 *
 * Created: 10/22/2023 9:43:09 PM
 *  Author: Bolis
 */ 

#include "write_name_on_LCD_using_button.h"

void Display_Name_Init(){
	HAL_LCD_Init();
	HAL_PUSH_BUTTON_Init(PORT_D,PIN3);
	HAL_PUSH_BUTTON_Init(PORT_D,PIN5);
	HAL_PUSH_BUTTON_Init(PORT_D,PIN6);
	HAL_PUSH_BUTTON_Init(PORT_D,PIN7);
}
void Display_Name_Update(){
	u8_t buttonval1 = High ;
	u8_t buttonval2 = High ;
	u8_t buttonval3 = High ;
	u8_t buttonval4 = High ;
	
	HAL_PUSH_BUTTON_Read(PORT_D,PIN3,&buttonval1);
	HAL_PUSH_BUTTON_Read(PORT_D,PIN5,&buttonval2);
	HAL_PUSH_BUTTON_Read(PORT_D,PIN6,&buttonval3);
	HAL_PUSH_BUTTON_Read(PORT_D,PIN7,&buttonval4);
	
	if (buttonval1 == LOW){
		while (buttonval1 == LOW){
			HAL_PUSH_BUTTON_Read(PORT_D,PIN3,&buttonval1);
		}
		HAL_LCD_Write_string("BOLIS");
		HAL_LCD_goto(2,0);
	}else if (buttonval2 == LOW){
		while (buttonval2 == LOW){
			HAL_PUSH_BUTTON_Read(PORT_D,PIN5,&buttonval2);
		}
		HAL_LCD_Write_string(" KARAM");
		HAL_LCD_goto(3,0);
		
	}else if (buttonval3 == LOW){
		while (buttonval3 == LOW){
			HAL_PUSH_BUTTON_Read(PORT_D,PIN6,&buttonval3);
		}
		HAL_LCD_Write_string(" SOLIMAN");
		
	}else if (buttonval4 == LOW){
		while (buttonval4 == LOW){
			HAL_PUSH_BUTTON_Read(PORT_D,PIN7,&buttonval4);
		}
		HAL_LCD_clear_screen();
	}
}
