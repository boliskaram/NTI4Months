/*
 * sinusoidal_animation_of_character_on_LCD.c
 *
 * Created: 10/21/2023 11:11:31 PM
 *  Author: Bolis
 */ 

#include "sinusoidal_animation_of_character_on_LCD.h"

u16_t count = 0 ;
void Sinusoidal_Animation_Init(){
	
	//HAL_LCD_Write_char('B');
	//HAL_LCD_Write_string("BOLIS");
	//for (u8_t i = 0 ; i < 80 ; i++){
	//HAL_LCD_Write_char('O');
	//}
	HAL_LCD_Init();
	
}


void Sinusoidal_Animation_Update(){

	for (u16_t i = 1 ; i <= 4 ;i++ ){
		if(count == 20){
			count = 0 ;
		}
		HAL_LCD_goto(i,count);
		HAL_LCD_Write_char('E');
		_delay_ms(300);
		HAL_LCD_clear_screen();
		_delay_ms(300);
		count++;
	}
	for (u16_t i = 3 ; i >= 2 ;i-- ){
		if(count == 20){
			count = 0 ;
		}
		HAL_LCD_goto(i,count);
		HAL_LCD_Write_char('E');
		_delay_ms(300);
		HAL_LCD_clear_screen();
		_delay_ms(300);
		count++;
	}

}

