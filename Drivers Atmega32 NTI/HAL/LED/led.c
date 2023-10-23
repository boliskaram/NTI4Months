/*
 * led.c
 *
 * Created: 10/22/2023 1:03:51 AM
 *  Author: Bolis
 */ 
#include "led.h"
EN_LED_STATUS_t HAL_LED_Init(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin){
	EN_LED_STATUS_t errorStatus = LED_OK ;
	EN_DIO_STATUS_t DIO_Error = DIO_OK ;
	
	DIO_Error = MCAL_DIO_Init_Pin(LED_Port,LED_Pin,OUTPUT);
	
	if(DIO_Error == PIN_ERROR)
	{
		errorStatus = LED_PIN_ERROR ;
	}
	else if(DIO_Error == PORT_ERROR)
	{
		errorStatus = LED_PORT_ERROR ;
	}
	else
	{
		errorStatus = LED_OK ;
	}
	
	return errorStatus ;
}


EN_LED_STATUS_t HAL_LED_ON(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin){
	
	EN_LED_STATUS_t errorStatus = LED_OK ;
	EN_DIO_STATUS_t DIO_Error = DIO_OK ;
	
	DIO_Error = MCAL_DIO_Write_Pin(LED_Port,LED_Pin,High);
	
	if(DIO_Error == PIN_ERROR){
		errorStatus = LED_PIN_ERROR ;
		}else if(DIO_Error == PORT_ERROR){
		errorStatus = LED_PORT_ERROR ;
		}else{
		errorStatus = LED_OK ;
	}
	return errorStatus ;
}


EN_LED_STATUS_t HAL_LED_OFF(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin){
	
	EN_LED_STATUS_t errorStatus = LED_OK ;
	EN_DIO_STATUS_t DIO_Error = DIO_OK ;

	DIO_Error = MCAL_DIO_Write_Pin(LED_Port,LED_Pin,LOW);

	if(DIO_Error == PIN_ERROR){
		errorStatus = LED_PIN_ERROR ;
		}else if(DIO_Error == PORT_ERROR){
		errorStatus = LED_PORT_ERROR ;
		}else{
		errorStatus = LED_OK ;
	}
	return errorStatus ;
}


EN_LED_STATUS_t HAL_LED_Toggle(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin){
	
	EN_LED_STATUS_t errorStatus = LED_OK ;
	EN_DIO_STATUS_t DIO_Error = DIO_OK ;
	
	DIO_Error = MCAL_DIO_Toggle_Pin(LED_Port,LED_Pin);

	if(DIO_Error == PIN_ERROR){
		errorStatus = LED_PIN_ERROR ;
		}else if(DIO_Error == PORT_ERROR){
		errorStatus = LED_PORT_ERROR ;
		}else{
		errorStatus = LED_OK ;
	}
	return errorStatus ;
}