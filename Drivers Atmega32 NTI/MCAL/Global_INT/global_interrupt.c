/*
 * global_interrupt.c
 *
 * Created: 10/23/2023 11:28:28 AM
 *  Author: Bolis
 */ 


#include "global_interrupt_private.h"
#include "global_interrupt_config.h"
#include "global_interrupt.h"


void MCAL_Global_Interrupt_Enable(){
	SET_BIT(SREG,Global_Interrupt_BIT);
}
void MCAL_Global_Interrupt_Disable(){
	RESET_BIT(SREG,Global_Interrupt_BIT);
}