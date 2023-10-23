/*
 * two_7SEG_counting_0to99_two_7SEG_counting_99to0.c
 *
 * Created: 10/22/2023 12:56:04 AM
 *  Author: Bolis
 */ 

#include "two_7SEG_counting_0to99_two_7SEG_counting_99to0.h"

u16_t count1s = 0;
u8_t num2RevOnes = 9 ;
u8_t num2RevTens = 9 ;

void Counting_on_4_7SEG_Init(){
	HAL_Seven_Segment_Init();
}

void Counting_on_4_7SEG_Update(){
	for (int i = 9 ; i >= 0 ; i-- ){
		for (int j = 9 ; j >= 0 ; j--){
			for (int k = 0 ; k < 40 ; k++){
				HAL_Seven_Segment_Write(j,COM3);
				_delay_ms(5);
				HAL_Seven_Segment_Write(i,COM4);
				_delay_ms(5);
				HAL_Seven_Segment_Write(num2RevOnes-j,COM1);
				_delay_ms(5);
				HAL_Seven_Segment_Write(num2RevTens-i,COM2);
				_delay_ms(5);
				
			}
		}
	}
}