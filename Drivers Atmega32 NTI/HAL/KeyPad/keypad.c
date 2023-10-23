/*
 * keypad.c
 *
 * Created: 10/22/2023 11:40:29 AM
 *  Author: Bolis
 */ 

#include "keypad.h"
#include "keypad_config.h"
							
const u8_t keypadValues[] = {'+','=','0','C','-','3','2','1','*','6','5','4','/','9','8','7'};
//{'7','8','9','/','4','5','6','*','1','2','3','-','C','0','=','+'};
u8_t keyRead = High ;
void HAL_KEYPAD_Init(){
	
	MCAL_DIO_Init_Pin(COL1PORT,COL1PIN,COL_DIR);
	MCAL_DIO_Init_Pin(COL2PORT,COL2PIN,COL_DIR);
	MCAL_DIO_Init_Pin(COL3PORT,COL3PIN,COL_DIR);
	MCAL_DIO_Init_Pin(COL4PORT,COL4PIN,COL_DIR);
	
	MCAL_DIO_Write_Pin(COL1PORT,COL1PIN,High);
	MCAL_DIO_Write_Pin(COL2PORT,COL2PIN,High);
	MCAL_DIO_Write_Pin(COL3PORT,COL3PIN,High);
	MCAL_DIO_Write_Pin(COL4PORT,COL4PIN,High);
	
	
	MCAL_DIO_Init_Pin(ROW1PORT,ROW1PIN,ROW_DIR);
	MCAL_DIO_Init_Pin(ROW2PORT,ROW2PIN,ROW_DIR);
	MCAL_DIO_Init_Pin(ROW3PORT,ROW3PIN,ROW_DIR);
	MCAL_DIO_Init_Pin(ROW4PORT,ROW4PIN,ROW_DIR);
}


u8_t HAL_KEYPAD_READ(){
	u8_t value = 255 ;
	for(int i=0 ; i < 4 ; i++){
		switch(i){
			case 0:
				MCAL_DIO_Write_Pin(ROW1PORT,ROW1PIN,LOW);
				MCAL_DIO_Write_Pin(ROW2PORT,ROW2PIN,High);
				MCAL_DIO_Write_Pin(ROW3PORT,ROW3PIN,High);
				MCAL_DIO_Write_Pin(ROW4PORT,ROW4PIN,High);
				break;
			case 1:
				MCAL_DIO_Write_Pin(ROW1PORT,ROW1PIN,High);
				MCAL_DIO_Write_Pin(ROW2PORT,ROW2PIN,LOW);
				MCAL_DIO_Write_Pin(ROW3PORT,ROW3PIN,High);
				MCAL_DIO_Write_Pin(ROW4PORT,ROW4PIN,High);
				break;
			case 2:
				MCAL_DIO_Write_Pin(ROW1PORT,ROW1PIN,High);
				MCAL_DIO_Write_Pin(ROW2PORT,ROW2PIN,High);
				MCAL_DIO_Write_Pin(ROW3PORT,ROW3PIN,LOW);
				MCAL_DIO_Write_Pin(ROW4PORT,ROW4PIN,High);
				break;
			case 3:
				MCAL_DIO_Write_Pin(ROW1PORT,ROW1PIN,High);
				MCAL_DIO_Write_Pin(ROW2PORT,ROW2PIN,High);
				MCAL_DIO_Write_Pin(ROW3PORT,ROW3PIN,High);
				MCAL_DIO_Write_Pin(ROW4PORT,ROW4PIN,LOW);
				break;
		}
		if ( READ_BIT(COL1Read,COL1PIN) == LOW ){
			value = keypadValues[0+4*i];
			break;
			//return value;
		}
		else if (READ_BIT(COL2Read,COL2PIN) == LOW ){
			value = keypadValues[1+4*i];
			break;
			//return value;
		}
		else if (READ_BIT(COL3Read,COL3PIN) == LOW ){
			value = keypadValues[2+4*i];
			break;
			//return value;
		}
		else if (READ_BIT(COL4Read,COL4PIN) == LOW ){
			value = keypadValues[3+4*i];
			break;
			//return value;
		}
	}
	return value ;
}