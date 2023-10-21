/*
 * dio.c
 *
 * Created: 10/20/2023 11:03:41 AM
 *  Author: Bolis
 */ 


#include "dio.h"


EN_DIO_STATUS_t MCAL_DIO_Init_Port(EN_portName_t portName, EN_directionStatus_t direction){
	
	EN_DIO_STATUS_t errorStatus = DIO_OK;
	
	switch(portName){
		
		case PORT_A:
			if(direction == OUTPUT){
				DDRA = PORT_OUTPUT ; 
				
			}else if(direction == INPUT){		
				DDRA = PORT_INTPUT ;
		
			}else{
				errorStatus = DIRECTION_ERROR ;
			}
			break;
		
		case PORT_B:
			if(direction == OUTPUT){
				DDRB = PORT_OUTPUT ;
			
			}else if(direction == INPUT){
		
				DDRB = PORT_INTPUT ;
		
			}else{
				errorStatus = DIRECTION_ERROR ;
			}
			break;
		
		case PORT_C:
			if(direction == OUTPUT){
				DDRC = PORT_OUTPUT ;
			
			}else if(direction == INPUT){
				DDRC = PORT_INTPUT ;
				
			}else{
				errorStatus = DIRECTION_ERROR ;
			}
			break;
		
		case PORT_D:
			if(direction == OUTPUT){
				DDRD = PORT_OUTPUT ;
						
			}else if(direction == INPUT){
				DDRD = PORT_INTPUT ;		
			}else{
				errorStatus = DIRECTION_ERROR ;
			}
			break;
		default:
			errorStatus = PORT_ERROR ;
			break;
	}
	return errorStatus ;
}



EN_DIO_STATUS_t MCAL_DIO_Init_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber, EN_directionStatus_t direction){	
	EN_DIO_STATUS_t errorStatus = DIO_OK;
	
	switch(portName){
		
		case PORT_A:
		if(direction == OUTPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				SET_BIT(DDRA,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else if(direction == INPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				RESET_BIT(DDRA,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else{
			errorStatus = DIRECTION_ERROR ;
		}
		break;
		
		case PORT_B:
		if(direction == OUTPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				SET_BIT(DDRB,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else if(direction == INPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				RESET_BIT(DDRB,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else{
			errorStatus = DIRECTION_ERROR ;
		}
		break;
		
		case PORT_C:
		if(direction == OUTPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				SET_BIT(DDRC,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else if(direction == INPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				RESET_BIT(DDRC,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else{
			errorStatus = DIRECTION_ERROR ;
		}
		break;
		
		case PORT_D:
		if(direction == OUTPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				SET_BIT(DDRD,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else if(direction == INPUT){
			if(pinNumber >=0 && pinNumber <=7 ){
				RESET_BIT(DDRD,pinNumber);
				}else{
				errorStatus = PIN_ERROR;
			}
			}else{
			errorStatus = DIRECTION_ERROR ;
		}
		break;
		default:
		errorStatus = PORT_ERROR ;
		break;
	}
	return errorStatus ;
}


EN_DIO_STATUS_t MCAL_DIO_Write_Port(EN_portName_t portName, u8_t portValue){
	
	EN_DIO_STATUS_t errorStatus = DIO_OK;
	
	switch(portName){
		
		case PORT_A:
			PORTA = 0xFF;
			PORTA &= portValue ;
			break;
		
		case PORT_B:
			PORTB = 0xFF;
			PORTB &= portValue ;
			break;
		
		case PORT_C:
			PORTC = 0xFF;
			PORTC &= portValue ;
			break;
		
		case PORT_D:
			PORTD = 0xFF;
			PORTD &= portValue ;
			break;
		
		default:
			errorStatus = PORT_ERROR;
			break;
	}
	return errorStatus;
	
}

EN_DIO_STATUS_t MCAL_DIO_Write_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber, EN_pinValue_t pinValue){

	
	EN_DIO_STATUS_t errorStatus = DIO_OK;
	
	switch(portName){
		case PORT_A:
		if(pinNumber >=0 && pinNumber <=7 ){
			if(pinValue==High){
				SET_BIT(PORTA,pinNumber);
				}else if(pinValue==LOW){
				RESET_BIT(PORTA,pinNumber);
				}else{
				errorStatus = VALUE_ERROR;
			}
			
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_B:
		if(pinNumber >=0 && pinNumber <=7 ){
			if(pinValue==High){
				SET_BIT(PORTB,pinNumber);
				}else if(pinValue==LOW){
				RESET_BIT(PORTB,pinNumber);
				}else{
				errorStatus = VALUE_ERROR;
			}
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_C:
		if(pinNumber >=0 && pinNumber <=7 ){
			if(pinValue==High){
				SET_BIT(PORTC,pinNumber);
				}else if(pinValue==LOW){
				RESET_BIT(PORTC,pinNumber);
				}else{
				errorStatus = VALUE_ERROR;
			}
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_D:
		if(pinNumber >=0 && pinNumber <=7 ){
			if(pinValue==High){
				SET_BIT(PORTD,pinNumber);
				}else if(pinValue==LOW){
				RESET_BIT(PORTD,pinNumber);
				}else{
				errorStatus = VALUE_ERROR;
			}
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		default:
		errorStatus =PORT_ERROR;
		break;
	}
	return errorStatus;
}

EN_DIO_STATUS_t MCAL_DIO_Read_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber,u8_t* pinValue){
	
	EN_DIO_STATUS_t errorStatus = DIO_OK;
	
	switch(portName){

		case PORT_A:
		if(pinNumber >=0 && pinNumber <=7 ){
			*pinValue = READ_BIT(PINA,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_B:
		if(pinNumber >=0 && pinNumber <=7 ){
			*pinValue = READ_BIT(PINB,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_C:
		if(pinNumber >=0 && pinNumber <=7 ){
			*pinValue = READ_BIT(PINC,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_D:
		if(pinNumber >=0 && pinNumber <=7 ){
			*pinValue = READ_BIT(PIND,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		default:
		errorStatus =PORT_ERROR;
		break;
	}
	return errorStatus;
}

EN_DIO_STATUS_t MCAL_DIO_Toggle_Pin(EN_portName_t portName, EN_pinNumber_t pinNumber){

	
	EN_DIO_STATUS_t errorStatus = DIO_OK;
	
	switch(portName){
		case PORT_A:
		if(pinNumber >=0 && pinNumber <=7 ){
			TOGGLE_BIT(PORTA,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_B:
		if(pinNumber >=0 && pinNumber <=7 ){
			TOGGLE_BIT(PORTB,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_C:
		if(pinNumber >=0 && pinNumber <=7 ){
			TOGGLE_BIT(PORTC,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		case PORT_D:
		if(pinNumber >=0 && pinNumber <=7 ){
			TOGGLE_BIT(PORTD,pinNumber);
			}else{
			errorStatus = PIN_ERROR;
		}
		break;
		
		default:
		errorStatus =PORT_ERROR;
		break;
	}
	return errorStatus;
	
}