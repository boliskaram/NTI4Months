/*
 * push_button.h
 *
 * Created: 10/21/2023 2:53:04 AM
 *  Author: Bolis
 */ 


#ifndef PUSH_BUTTON_H_
#define PUSH_BUTTON_H_

#include "../../MCAL/DIO/dio.h"

typedef enum EN_BUTTON_STATUS_t{
	BUTTON_OK = 0 ,
	BUTTON_PIN_ERROR,
	BUTTON_PORT_ERROR
}EN_BUTTON_STATUS_t;


typedef struct ST_BUTTON_Config_t{
	EN_pinNumber_t buttonPin;
	EN_portName_t buttonPort;
}ST_BUTTON_Config_t;


EN_BUTTON_STATUS_t ECUAL_PUSH_BUTTON_Init(EN_portName_t buttonPort, EN_pinNumber_t buttonPin);
EN_BUTTON_STATUS_t ECUAL_PUSH_BUTTON_Read(EN_portName_t buttonPort, EN_pinNumber_t buttonPin , u8_t* pinValue );


#endif /* PUSH_BUTTON_H_ */