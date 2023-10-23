/*
 * calculator.c
 *
 * Created: 10/22/2023 2:53:21 PM
 *  Author: Bolis
 */ 


#include "calculator.h"

u8_t keypadVal = 255 ;
u8_t keyclear = 255 ;
u8_t flag = 0 ;
u8_t op = 0xff;

u8_t arrVal[4] = {0};
void Calculator_Init(){
	
	HAL_KEYPAD_Init();
	HAL_LCD_Init();
}

void Calculator_Update(){
	
	
	keypadVal = 255;
	flag = 0 ;
	arrVal[1] = 0xff;
	
	
	while(flag < 4){
		keypadVal = HAL_KEYPAD_READ();
		if(keypadVal != 255 ){
			while ( HAL_KEYPAD_READ() != 255 );
			HAL_LCD_Write_char(keypadVal);
			arrVal[flag] = keypadVal ;
			flag++;
		}
	}
	
	
	if(arrVal[3] == '='){
		switch (arrVal[1])
		{
			case '*':
			//HAL_LCD_Write_char('=');
			HAL_LCD_Write_Number(((arrVal[0]-'0')*(arrVal[2]-'0')));
			arrVal[1] = 0xff;
			
			break;
			case '/':
			//HAL_LCD_Write_char('=');
			HAL_LCD_Write_Number(((arrVal[0]-'0')/(arrVal[2]-'0')));
			arrVal[1] = 0xff;
			
			break;
			case '-':
			//HAL_LCD_Write_char('=');
			HAL_LCD_Write_Number(((arrVal[0]-'0')-(arrVal[2]-'0')));
			arrVal[1] = 0xff;
			
			break;
			case '+':
			//HAL_LCD_Write_char('=');
			HAL_LCD_Write_Number(((arrVal[0]-'0')+(arrVal[2]-'0')));
			arrVal[1] = 0xff;
			
			break;
		}
	}
	
	
	keyclear = HAL_KEYPAD_READ();
	while( keyclear != 'C' ){
		keyclear = HAL_KEYPAD_READ();
	}
	while( keyclear == 'C' ){
		keyclear = HAL_KEYPAD_READ();
	}
	HAL_LCD_clear_screen();
}