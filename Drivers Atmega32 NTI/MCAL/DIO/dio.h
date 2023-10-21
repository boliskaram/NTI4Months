/*
 * dio.h
 *
 * Created: 10/20/2023 11:04:40 AM
 *  Author: Bolis
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "dio_private.h"
#include "../../LIB/bit_math.h"
#include "../../LIB/std_types.h"

#define PORT_INTPUT 0x00
#define PORT_OUTPUT 0xFF

#define PORT_LOW 0x00
#define PORT_HIGH 0xFF

typedef enum EN_pinValue_t{
	LOW = 0,
	High
}EN_pinValue_t;

typedef enum EN_directionStatus_t{
	INPUT =	0,
	OUTPUT
}EN_directionStatus_t;

typedef enum EN_portName_t{
	PORT_A = 0,
	PORT_B,
	PORT_C,
	PORT_D
}EN_portName_t;

typedef enum EN_pinNumber_t{
	PIN0 = 0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
}EN_pinNumber_t;

typedef enum EN_DIO_STATUS_t{
	DIO_OK = 0,
	PIN_ERROR,
	DIRECTION_ERROR,
	PORT_ERROR,
	VALUE_ERROR
}EN_DIO_STATUS_t;


EN_DIO_STATUS_t MCAL_DIO_Init_Port(EN_portName_t portName, EN_directionStatus_t direction);
EN_DIO_STATUS_t MCAL_DIO_Init_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber, EN_directionStatus_t direction);

EN_DIO_STATUS_t MCAL_DIO_Write_Port(EN_portName_t portName, u8_t portValue);
EN_DIO_STATUS_t MCAL_DIO_Write_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber, EN_pinValue_t pinValue);


EN_DIO_STATUS_t MCAL_DIO_Read_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber,u8_t* pinValue);

EN_DIO_STATUS_t MCAL_DIO_Toggle_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber);


#endif /* DIO_H_ */