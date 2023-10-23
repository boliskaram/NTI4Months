/*
 * keypad_config.h
 *
 * Created: 10/22/2023 11:51:36 AM
 *  Author: Bolis
 */ 


#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_


//*************** Rows *************************************
#define ROW1PIN		PIN2
#define ROW1PORT	PORT_C 

#define ROW2PIN		PIN3
#define ROW2PORT	PORT_C

#define ROW3PIN		PIN4
#define ROW3PORT	PORT_C

#define ROW4PIN		PIN5
#define ROW4PORT	PORT_C

//*************** Columns *************************************
#define COL1PIN		PIN3
#define COL1PORT	PORT_D
#define COL1Read	PIND 

#define COL2PIN		PIN5
#define COL2PORT	PORT_D
#define COL2Read	PIND

#define COL3PIN		PIN6
#define COL3PORT	PORT_D
#define COL3Read	PIND

#define COL4PIN		PIN7
#define COL4PORT	PORT_D
#define COL4Read	PIND

//*************** Direction *************************************
 
 #define COL_DIR	INPUT
 #define ROW_DIR	OUTPUT

#endif /* KEYPAD_CONFIG_H_ */