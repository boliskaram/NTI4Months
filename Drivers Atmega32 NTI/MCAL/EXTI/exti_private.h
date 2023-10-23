/*
 * exti_private.h
 *
 * Created: 10/23/2023 10:57:33 AM
 *  Author: Bolis
 */ 


#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

#define MCUCR_ISC00		PIN0
#define MCUCR_ISC01		PIN1
#define MCUCR_ISC10		PIN2
#define MCUCR_ISC11		PIN3
#define MCUCR_ISC2		PIN6

#define INT0_Enable_BIT		PIN6
#define INT1_Enable_BIT		PIN7
#define INT2_Enable_BIT		PIN5

/*---------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------*/
/*----------------------------- EXTI Registers ------------------------------------*/
/*---------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------*/

#define MCUCR	*((volatile uint8_t*)0x55)
#define MCUCSR	*((volatile uint8_t*)0x54)
#define GICR	*((volatile uint8_t*)0x5B)
#define GIFR	*((volatile uint8_t*)0x5A)


#endif /* EXTI_PRIVATE_H_ */