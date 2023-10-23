/*
 * std_types.h
 *
 * Created: 10/20/2023 11:43:57 AM
 *  Author: Bolis
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_
#define F_CPU 16000000ul
#include <util/delay.h>

#define NULL	((void*)0)

typedef unsigned char		u8_t;
typedef signed char			s8_t;
typedef unsigned short int	u16_t;
typedef signed short int 	s16_t;
typedef unsigned long int	u32_t;
typedef signed long int		s32_t;
typedef unsigned long long	u64_t;
typedef signed long long	s64_t;

#endif /* STD_TYPES_H_ */