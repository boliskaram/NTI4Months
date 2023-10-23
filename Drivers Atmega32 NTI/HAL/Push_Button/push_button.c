/*
 * push_button.c
 *
 * Created: 10/21/2023 2:52:54 AM
 *  Author: Bolis
 */ 

#include "push_button.h"


EN_BUTTON_STATUS_t HAL_PUSH_BUTTON_Init(EN_portName_t buttonPort, EN_pinNumber_t buttonPin){

	EN_BUTTON_STATUS_t buttonStatus = BUTTON_OK;
	EN_DIO_STATUS_t DIO_Error = DIO_OK ;
	
	
	DIO_Error = MCAL_DIO_Init_Pin(buttonPort,buttonPin,INPUT);
	
	if (DIO_Error == PORT_ERROR)
	{
		buttonStatus = BUTTON_PORT_ERROR;
	}
	else if (DIO_Error == PIN_ERROR)
	{
		buttonStatus = BUTTON_PIN_ERROR;
	}
	else{
		buttonStatus = BUTTON_OK;
	}
	
	return buttonStatus;
}

EN_BUTTON_STATUS_t HAL_PUSH_BUTTON_Read(EN_portName_t buttonPort, EN_pinNumber_t buttonPin , u8_t* pinValue ){
	
	EN_BUTTON_STATUS_t buttonStatus = BUTTON_OK;
	EN_DIO_STATUS_t DIO_Error = DIO_OK ;
	
	
	
	
	DIO_Error = MCAL_DIO_Read_Pin(buttonPort, buttonPin, pinValue);
	
	if (DIO_Error == PORT_ERROR)
	{
		buttonStatus = BUTTON_PORT_ERROR;
	}
	else if (DIO_Error == PIN_ERROR)
	{
		buttonStatus = BUTTON_PIN_ERROR;
	}
	else{
		buttonStatus = BUTTON_OK;
		
	}
	return buttonStatus ;
}