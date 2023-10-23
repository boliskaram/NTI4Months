/*
 * led.h
 *
 * Created: 10/22/2023 1:04:01 AM
 *  Author: Bolis
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/dio.h"


typedef enum EN_LED_STATUS_t{
	LED_OK = 0 ,
	LED_PIN_ERROR,
	LED_PORT_ERROR
}EN_LED_STATUS_t;

EN_LED_STATUS_t HAL_LED_Init(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin);
EN_LED_STATUS_t HAL_LED_ON(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin);
EN_LED_STATUS_t HAL_LED_OFF(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin);
EN_LED_STATUS_t HAL_LED_Toggle(EN_portName_t LED_Port,EN_pinNumber_t LED_Pin);



#endif /* LED_H_ */