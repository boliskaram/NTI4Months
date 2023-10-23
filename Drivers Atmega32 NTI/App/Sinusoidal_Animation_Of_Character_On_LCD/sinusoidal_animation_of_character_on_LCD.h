/*
 * sinusoidal_animation_of_character_on_LCD.h
 *
 * Created: 10/21/2023 11:11:45 PM
 *  Author: Bolis
 */ 


#ifndef SINUSOIDAL_ANIMATION_OF_CHARACTER_ON_LCD_H_
#define SINUSOIDAL_ANIMATION_OF_CHARACTER_ON_LCD_H_

#include "../../LIB/std_types.h"
#include "../../LIB/bit_math.h"
#include "../../HAL/LCD/LCD.h"
#include "../../MCAL/DIO/dio.h"

void Sinusoidal_Animation_Init();
void Sinusoidal_Animation_Update();


#endif /* SINUSOIDAL_ANIMATION_OF_CHARACTER_ON_LCD_H_ */