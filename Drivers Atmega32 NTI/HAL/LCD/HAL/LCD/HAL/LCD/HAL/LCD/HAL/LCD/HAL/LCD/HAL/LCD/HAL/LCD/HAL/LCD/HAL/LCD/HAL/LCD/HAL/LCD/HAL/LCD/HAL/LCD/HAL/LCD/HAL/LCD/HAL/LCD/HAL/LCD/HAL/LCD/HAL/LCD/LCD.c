/*
 * LCD.c
 *
 * Created: 10/21/2023 11:32:56 AM
 *  Author: Bolis
 */ 

#include "LCD.h"



void LCD_send_pulse_for_update_data_cmd(){
	//EN(1);
	MCAL_DIO_Write_Pin(Control_Port , EN_Pin,High);
	_delay_ms(1);
	//EN(0);
	MCAL_DIO_Write_Pin(Control_Port , EN_Pin,LOW);
	_delay_ms(1);
}

void lcd_write(uint8_t data){

	#ifdef EIGHT_BIT_MODE
	PORTC = data ;
	LCD_send_pulse_for_update_data_cmd();
	#endif
	
	#ifdef FOUR_BIT_MODE
	
	MCAL_DIO_Write_Pin(PORT_B,PIN0,READ_BIT(data,PIN4));
	MCAL_DIO_Write_Pin(PORT_B,PIN1,READ_BIT(data,PIN5));
	MCAL_DIO_Write_Pin(PORT_B,PIN2,READ_BIT(data,PIN6));
	MCAL_DIO_Write_Pin(PORT_B,PIN4,READ_BIT(data,PIN7));
	LCD_send_pulse_for_update_data_cmd();
	MCAL_DIO_Write_Pin(PORT_B,PIN0,READ_BIT(data,PIN0));
	MCAL_DIO_Write_Pin(PORT_B,PIN1,READ_BIT(data,PIN1));
	MCAL_DIO_Write_Pin(PORT_B,PIN2,READ_BIT(data,PIN2));
	MCAL_DIO_Write_Pin(PORT_B,PIN4,READ_BIT(data,PIN3));
	LCD_send_pulse_for_update_data_cmd();
	#endif
}

void HAL_LCD_Init(){
	
	//set control & data pins output
	MCAL_DIO_Init_Pin(Control_Port ,RS_Pin,OUTPUT);
	MCAL_DIO_Init_Pin(Control_Port ,EN_Pin,OUTPUT);
	
	#ifdef EIGHT_BIT_MODE
	MCAL_DIO_Init_Port(Data_Port,OUTPUT);
	_delay_ms(5);
	HAL_LCD_Write_cmd(0x38);	// 8data line
	#endif

	#ifdef FOUR_BIT_MODE
	MCAL_DIO_Init_Pin(Data_Port,PIN0,OUTPUT);
	MCAL_DIO_Init_Pin(Data_Port,PIN1,OUTPUT);
	MCAL_DIO_Init_Pin(Data_Port,PIN2,OUTPUT);
	MCAL_DIO_Init_Pin(Data_Port,PIN4,OUTPUT);
	
	_delay_ms(30);
	HAL_LCD_Write_cmd(0x02);	// 4data line
	HAL_LCD_Write_cmd(0x28);
	#endif
	HAL_LCD_Write_cmd(0x01);	// set courser at the beginning of the first line
	HAL_LCD_Write_cmd(0x0c);	// display on cursor off
	_delay_ms(1);
	HAL_LCD_Write_cmd(0x06);	// increment cursor right
}


void HAL_LCD_clear_screen(){
	HAL_LCD_Write_cmd(LCD_CLEAR_SCREEN); // clear screen
}


void HAL_LCD_goto(u8_t line ,u8_t position ){
	if(line == 1){
		if( 20 > position && position >= 0){
			HAL_LCD_Write_cmd(LCD_BEGIN_AT_FIRST_RAW + position);
		}
	}
	else if(line == 2){
		if( 20 > position && position >= 0){
			HAL_LCD_Write_cmd(LCD_BEGIN_AT_SECOND_RAW + position);
		}
	}
	else if(line == 3){
		if( 20 > position && position >= 0){
			HAL_LCD_Write_cmd(LCD_BEGIN_AT_THIRD_RAW + position);
		}
	}
	else if(line == 4){
		if( 20 > position && position >= 0){
			HAL_LCD_Write_cmd(LCD_BEGIN_AT_FOURTH_RAW + position);
		}
	}
}

/*void HAL_LCD_Write_Number (int Number){
	char str[7];
	sprintf(str,"%d",Number);	// Adjust the formatting to your liking.
	HAL_LCD_Write_string(str) ;

}
*/

void HAL_LCD_Write_cmd(uint8_t cmd){
	MCAL_DIO_Write_Pin(Control_Port , RS_Pin,LOW);
	lcd_write(cmd);
}

void HAL_LCD_Write_char(uint8_t data){
	MCAL_DIO_Write_Pin(Control_Port , RS_Pin,High);
	lcd_write(data);
}

void HAL_LCD_Write_string(uint8_t* x){
	for(int i = 0; x[i] != '\0'; i++)
	HAL_LCD_Write_char(x[i]);
}

