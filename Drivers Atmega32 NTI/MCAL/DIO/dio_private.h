/*
 * dio_private.h
 *
 * Created: 10/20/2023 11:04:56 AM
 *  Author: Bolis
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_



/*---------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------*/
/*-------------------------------DIO Registers-------------------------------------*/
/*---------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------*/

#define PORTA	*((volatile u8_t*)0x3B)
#define DDRA	*((volatile u8_t*)0x3A)
#define PINA	*((volatile u8_t*)0x39)

#define PORTB	*((volatile u8_t*)0x38)
#define DDRB	*((volatile u8_t*)0x37)
#define PINB	*((volatile u8_t*)0x36)

#define PORTC	*((volatile u8_t*)0x35)
#define DDRC	*((volatile u8_t*)0x34)
#define PINC	*((volatile u8_t*)0x33)

#define PORTD	*((volatile u8_t*)0x32)
#define DDRD	*((volatile u8_t*)0x31)
#define PIND	*((volatile u8_t*)0x30)




#endif /* DIO_PRIVATE_H_ */