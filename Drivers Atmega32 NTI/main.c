/*
 * Drivers Atmega32 NTI.c
 *
 * Created: 10/20/2023 11:00:30 AM
 * Author : Bolis
 */ 

//#include <avr/io.h>

//#include "LIB/std_types.h"
//#include "LIB/bit_math.h"
//#include "HAL/seven_segment/seven_segment.h"
//#include "HAL/Push_Button/push_button.h"

//#include "MCAL/DIO/dio.h"
//#include "MCAL/EXTI/exti.h"
//#include "MCAL/Global_INT/global_interrupt.h"
//#include "HAL/LCD/LCD.h"
//#include "HAL/KeyPad/keypad.h"
#include "LIB/bit_math.h"
#include "LIB/std_types.h"

#include "App/Display_Num_Binary_On_LEDs_and_Decimal_On_7SEG/display_num_binary_on_LEDs_and_decimal_on_7SEG.h"
#include "App/Traffic_Lights_LEDs/traffic_lights_LEDs.h"
#include "App/Two_7SEG_Counting_0TO99_Two_7SEG_Counting_99TO0/two_7SEG_counting_0to99_two_7SEG_counting_99to0.h"
#include "App/Sinusoidal_Animation_Of_Character_On_LCD/sinusoidal_animation_of_character_on_LCD.h"
#include "App/Turn_On_LED_Using_Button/turn_on_LED_using_button.h"
#include "APP/Calculator/calculator.h"
#include "App/Write_Name_On_LCD_Using_Button/write_name_on_LCD_using_button.h"
#include "App/Toggle_LED_Count_LCD_Using_EXTI/toggle_led_count_on_lcd_using_exti.h"

int main(void)
{
	
	//Task 1
	//Display_Number_Init();
	
	//Task 2
	//Traffic_Light_Init();	
	
	//Task3
	//Counting_on_4_7SEG_Init();
	
	//Task 4
	//Sinusoidal_Animation_Init();

	//Task 5
	//Button_Init();
	
	//Task 6
	//Calculator_Init();	
	
	//Task 7
	//Display_Name_Init();
	
	//task 8
	//Toggle_LED_Count_Init();

	/* Replace with your application code */
    while (1) 
    {		
			
		//Task 1
		//Display_Number_Update();
		
		//Task 2
		//Traffic_Light_Update();
		
		//Task3
		//Counting_on_4_7SEG_Update();
		
		//Task 4
		//Sinusoidal_Animation_Update();
		
		//Task 5
		//Button_Update();
	
		//Task 6
		//Calculator_Update();
		
		//Task 7
		//Display_Name_Update();
		
		//task 8
		//Toggle_LED_Count_Update();
    }
}

