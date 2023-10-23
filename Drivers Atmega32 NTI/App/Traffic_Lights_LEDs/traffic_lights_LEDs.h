/*
 * traffic_lights_LEDs.h
 *
 * Created: 10/22/2023 1:32:01 AM
 *  Author: Bolis
 */ 


#ifndef TRAFFIC_LIGHTS_LEDS_H_
#define TRAFFIC_LIGHTS_LEDS_H_

#include "../../LIB/std_types.h"
#include "../../LIB/bit_math.h"
#include "../../HAL/seven_segment/seven_segment.h"
#include "../../HAL/LED/led.h"
#include "../../HAL/LCD/LCD.h"
#include "../../MCAL/DIO/dio.h"

void Traffic_Light_Init();
void Traffic_Light_Update();

#endif /* TRAFFIC_LIGHTS_LEDS_H_ */