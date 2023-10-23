/*
 * exti.h
 *
 * Created: 10/23/2023 10:08:38 AM
 *  Author: Bolis
 */ 

#ifndef EXTI_H_
#define EXTI_H_

#include "../DIO/dio.h"
#include "../../HAL/LED/led.h"
#include "../../HAL/LCD/LCD.h"
#include "../../LIB/bit_math.h"
#include "../../LIB/std_types.h"
#include "../Global_INT/global_interrupt.h"




typedef enum EN_EXTI_STATUS_t{
	EXTI_OK			= 0	,
	EXTI_NAME_ERROR		,
	EXTI_MODE_ERROR		,
}EN_EXTI_STATUS_t;

typedef enum EN_EXTI_NAME_t{
	INT_0    =0	,
	INT_1		,
	INT_2
}EN_EXTI_NAME_t;

typedef enum EN_EXTI_Mode_t{
	LOW_LEVEL_MODE		= 0,
	LOGICAL_CHANGE_MODE	   ,
	FALLING_EDGE_MODE	   ,
	RISING_EDGE_MODE
}EN_EXTI_Mode_t;

typedef struct ST_EXTI_Config_t{
	EN_EXTI_NAME_t EXTI_NAME;
	EN_EXTI_Mode_t EXTI_MODE;
	void (*P_IRQ_CallBack) (void);
}ST_EXTI_Config_t;

EN_EXTI_STATUS_t MCAL_EXTI_Init(ST_EXTI_Config_t* EXTI_config);

#endif /* EXTI_H_ */