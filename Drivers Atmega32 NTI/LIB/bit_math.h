/*
 * bit_math.h
 *
 * Created: 10/20/2023 11:25:59 AM
 *  Author: Bolis
 */ 

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(ADDRESS, BIT)		(ADDRESS |= (1<<BIT))
#define RESET_BIT(ADDRESS, BIT)		(ADDRESS &= ~(1<<BIT))
#define TOGGLE_BIT(ADDRESS, BIT)	(ADDRESS ^= (1<<BIT))
#define READ_BIT(ADDRESS, BIT)		((ADDRESS & (1<<BIT)) >> BIT)
#define SET_BYTE(ADDRESS,Value)		(ADDRESS = BYTE)

#endif /* BIT_MATH_H_ */