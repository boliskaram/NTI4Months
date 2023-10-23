/*
 * global_interrupt.h
 *
 * Created: 10/23/2023 11:24:22 AM
 *  Author: Bolis
 */ 


#ifndef GLOBAL_INTERRUPT_H_
#define GLOBAL_INTERRUPT_H_


#include "../../LIB/bit_math.h"
#include "../../LIB/std_types.h"

#define Global_Interrupt_BIT	7

void MCAL_Global_Interrupt_Enable();
void MCAL_Global_Interrupt_Disable();



#endif /* GLOBAL_INTERRUPT_H_ */