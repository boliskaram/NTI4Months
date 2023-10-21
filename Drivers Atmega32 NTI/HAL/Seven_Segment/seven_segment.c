/*
 * _7seg.c
 *
 * Created: 10/20/2023 6:56:04 PM
 *  Author: Bolis
 */ 

#include "seven_segment.h"

void HAL_Seven_Segment_Init(EN_7Seg_Com_t Com){
	
		MCAL_DIO_Init_Pin(PORT_B,PIN5,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_B,PIN6,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_A,PIN2,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_A,PIN3,OUTPUT);
		switch (Com)
		{
		case ALL_COM:
			
			MCAL_DIO_Write_Pin(PORT_B,PIN5,LOW);
			MCAL_DIO_Write_Pin(PORT_B,PIN6,LOW);
			MCAL_DIO_Write_Pin(PORT_A,PIN2,LOW);
			MCAL_DIO_Write_Pin(PORT_A,PIN3,LOW);
			
			break;
		case COM3:
			MCAL_DIO_Write_Pin(PORT_B,PIN5,LOW);
			MCAL_DIO_Write_Pin(PORT_B,PIN6,High);
			MCAL_DIO_Write_Pin(PORT_A,PIN2,High);
			MCAL_DIO_Write_Pin(PORT_A,PIN3,High);
			break;
		case COM4:
			MCAL_DIO_Write_Pin(PORT_B,PIN5,High);
			MCAL_DIO_Write_Pin(PORT_B,PIN6,LOW);
			MCAL_DIO_Write_Pin(PORT_A,PIN2,High);
			MCAL_DIO_Write_Pin(PORT_A,PIN3,High);
			break;
		case COM2:
			MCAL_DIO_Write_Pin(PORT_B,PIN5,High);
			MCAL_DIO_Write_Pin(PORT_B,PIN6,High);
			MCAL_DIO_Write_Pin(PORT_A,PIN2,LOW);
			MCAL_DIO_Write_Pin(PORT_A,PIN3,High);
			break;
		case COM1:
			MCAL_DIO_Write_Pin(PORT_B,PIN5,High);
			MCAL_DIO_Write_Pin(PORT_B,PIN6,High);
			MCAL_DIO_Write_Pin(PORT_A,PIN2,High);
			MCAL_DIO_Write_Pin(PORT_A,PIN3,LOW);
			break;
		default:
			break;
		}
		MCAL_DIO_Init_Pin(PORT_B,PIN5,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_B,PIN6,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_A,PIN2,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_A,PIN3,OUTPUT);
		
		MCAL_DIO_Init_Pin(PORT_B,PIN0,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_B,PIN1,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_B,PIN2,OUTPUT);
		MCAL_DIO_Init_Pin(PORT_B,PIN4,OUTPUT);
}

void HAL_Seven_Segment_Write(u8_t Number){
	

	switch (Number)
	{
	case 0:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 1:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 2:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 3:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 4:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 5:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 6:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 7:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,LOW);
		break;
	case 8:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,High);
	break;
	case 9:
		MCAL_DIO_Write_Pin(PORT_B,PIN0,High);
		MCAL_DIO_Write_Pin(PORT_B,PIN1,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN2,LOW);
		MCAL_DIO_Write_Pin(PORT_B,PIN4,High);
	break;
	}
}