/*
 * Drivers Atmega32 NTI.c
 *
 * Created: 10/20/2023 11:00:30 AM
 * Author : Bolis
 */ 

//#include <avr/io.h>
#define F_CPU 16000000ul
#include <util/delay.h>

#include "HAL/seven_segment/seven_segment.h"
#include "HAL/Push_Button/push_button.h"
#include "MCAL/DIO/dio.h"

int main(void)
{
	HAL_Seven_Segment_Init(COM1);
	
	ECUAL_PUSH_BUTTON_Init(PORT_D,PIN7);
	
	u8_t buttonValue = LOW; 
	EN_BUTTON_STATUS_t BUTTON_ERROR = BUTTON_OK ;	
	
	/* Replace with your application code */
    while (1) 
    {
		BUTTON_ERROR = ECUAL_PUSH_BUTTON_Read(PORT_D,PIN7,&buttonValue);
		if(buttonValue)	{
			while(buttonValue);
			MCAL_DIO_Write_Pin(PORT_A,PIN6,High);
			_delay_ms(1000);
		}
		
    }
}

