/*
 * _7seg.h
 *
 * Created: 10/20/2023 6:56:18 PM
 *  Author: Bolis
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include "../../MCAL/DIO/dio.h"

typedef enum EN_7Seg_Number_t{
	ZERO = 0,
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE
}EN_7Seg_Number_t;

typedef enum EN_7Seg_Com_t{
	ALL_COM = 0,
	COM1,
	COM2,
	COM3,
	COM4
}EN_7Seg_Com_t;

void HAL_Seven_Segment_Init(EN_7Seg_Com_t Com);
void HAL_Seven_Segment_Write(u8_t Number);



#endif /* SEVEN_SEGMENT_H_ */