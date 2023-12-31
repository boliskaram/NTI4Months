/*
 * rcc_private.h
 *
 *  Created on: Nov 1, 2023
 *      Author: Bolis
 */

#ifndef RCC_DRIVER_RCC_PRIVATE_H_
#define RCC_DRIVER_RCC_PRIVATE_H_

#include "stdlib.h"
#include "stdint.h"


//RCC Address
#define RCC_BASE 								0x40021000

//RCC Registers
typedef struct{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
}RCC_Typedef;


//RCC Instant
#define RCC			((RCC_Typedef *) RCC_BASE)

/*******************  Bit definition for RCC_APB2ENR register  ********************/
#define RCC_APB2ENR_AFIO_POS    (0U)
#define RCC_APB2ENR_AFIO_MASK   (0x1UL << RCC_APB2ENR_AFIO_POS)
#define RCC_APB2ENR_AFIO		RCC_APB2ENR_AFIO_MASK

#define	RCC_APB2ENR_IOPA_POS    (2U)
#define RCC_APB2ENR_IOPA_MASK   (0x1UL << RCC_APB2ENR_IOPA_POS)
#define RCC_APB2ENR_IOPA		RCC_APB2ENR_IOPA_MASK

#define	RCC_APB2ENR_IOPB_POS 	(3U)
#define RCC_APB2ENR_IOPB_MASK   (0x1UL << RCC_APB2ENR_IOPB_POS)
#define RCC_APB2ENR_IOPB		RCC_APB2ENR_IOPB_MASK

#define	RCC_APB2ENR_IOPC_POS   	(4U)
#define RCC_APB2ENR_IOPC_MASK   (0x1UL << RCC_APB2ENR_IOPC_POS)
#define RCC_APB2ENR_IOPC		RCC_APB2ENR_IOPC_MASK

#define	RCC_APB2ENR_IOPD_POS  	(5U)
#define RCC_APB2ENR_IOPD_MASK   (0x1UL << RCC_APB2ENR_IOPD_POS)
#define RCC_APB2ENR_IOPD		RCC_APB2ENR_IOPD_MASK

#define	RCC_APB2ENR_IOPE_POS 	(6U)
#define RCC_APB2ENR_IOPE_MASK   (0x1UL << RCC_APB2ENR_IOPE_POS)
#define RCC_APB2ENR_IOPE		RCC_APB2ENR_IOPE_MASK

#define	RCC_APB2ENR_IOPF_POS 	(7U)
#define RCC_APB2ENR_IOPF_MASK   (0x1UL << RCC_APB2ENR_IOPF_POS)
#define RCC_APB2ENR_IOPF		RCC_APB2ENR_IOPF_MASK

#define	RCC_APB2ENR_IOPG_POS 	(8U)
#define RCC_APB2ENR_IOPG_MASK   (0x1UL << RCC_APB2ENR_IOPG_POS)
#define RCC_APB2ENR_IOPG		RCC_APB2ENR_IOPG_MASK

#define	RCC_APB2ENR_ADC1_POS 	(9U)
#define RCC_APB2ENR_ADC1_MASK   (0x1UL << RCC_APB2ENR_ADC1_POS)
#define RCC_APB2ENR_ADC1		RCC_APB2ENR_ADC1_MASK

#define	RCC_APB2ENR_ADC2_POS 	(10U)
#define RCC_APB2ENR_ADC2_MASK   (0x1UL << RCC_APB2ENR_ADC2_POS)
#define RCC_APB2ENR_ADC2		RCC_APB2ENR_ADC2_MASK

#define	RCC_APB2ENR_TIM1_POS 	(11U)
#define RCC_APB2ENR_TIM1_MASK   (0x1UL << RCC_APB2ENR_TIM1_POS)
#define RCC_APB2ENR_TIM1		RCC_APB2ENR_TIM1_MASK

#define	RCC_APB2ENR_SPI1_POS 	(12U)
#define RCC_APB2ENR_SPI1_MASK   (0x1UL << RCC_APB2ENR_SPI1_POS)
#define RCC_APB2ENR_SPI1		RCC_APB2ENR_SPI1_MASK

#define	RCC_APB2ENR_TIM8_POS 	(13U)
#define RCC_APB2ENR_TIM8_MASK   (0x1UL << RCC_APB2ENR_TIM8_POS)
#define RCC_APB2ENR_TIM8		RCC_APB2ENR_TIM8_MASK

#define	RCC_APB2ENR_USART1_POS 	(14U)
#define RCC_APB2ENR_USART1_MASK (0x1UL << RCC_APB2ENR_USART1_POS)
#define RCC_APB2ENR_USART1		RCC_APB2ENR_USART1_MASK

#define	RCC_APB2ENR_ADC3_POS 	(15U)
#define RCC_APB2ENR_ADC3_MASK   (0x1UL << RCC_APB2ENR_ADC3_POS)
#define RCC_APB2ENR_ADC3		RCC_APB2ENR_ADC3_MASK

#define	RCC_APB2ENR_TIM9_POS  	(19U)
#define RCC_APB2ENR_TIM9_MASK   (0x1UL << RCC_APB2ENR_TIM9_POS)
#define RCC_APB2ENR_TIM9		RCC_APB2ENR_TIM9_MASK

#define	RCC_APB2ENR_TIM10_POS 	(20U)
#define RCC_APB2ENR_TIM10_MASK  (0x1UL << RCC_APB2ENR_TIM10_POS)
#define RCC_APB2ENR_TIM10		RCC_APB2ENR_TIM10_MASK

#define	RCC_APB2ENR_TIM11_POS	(21U)
#define RCC_APB2ENR_TIM11_MASK  (0x1UL << RCC_APB2ENR_TIM11_POS)
#define RCC_APB2ENR_TIM11		RCC_APB2ENR_TIM11_MASK

/*******************  Bit definition for RCC_AHBENR register  ********************/
#define	RCC_AHBENR_DMA1_POS		(0U)
#define RCC_AHBENR_DMA1_MASK  	(0x1UL << RCC_AHBENR_DMA1_POS)
#define RCC_AHBENR_DMA1			RCC_AHBENR_DMA1_MASK

#define	RCC_AHBENR_DMA2_POS		(1U)
#define RCC_AHBENR_DMA2_MASK  	(0x1UL << RCC_AHBENR_DMA2_POS)
#define RCC_AHBENR_DMA2			RCC_AHBENR_DMA2_MASK

#define	RCC_AHBENR_SRAM_POS		(2U)
#define RCC_AHBENR_SRAM_MASK  	(0x1UL << RCC_AHBENR_SRAM_POS)
#define RCC_AHBENR_SRAM			RCC_AHBENR_SRAM_MASK

#define	RCC_AHBENR_FLITF_POS	(4U)
#define RCC_AHBENR_FLITF_MASK  	(0x1UL << RCC_AHBENR_FLITF_POS)
#define RCC_AHBENR_FLITF		RCC_AHBENR_FLITF_MASK

#define	RCC_AHBENR_CRC_POS		(6U)
#define RCC_AHBENR_CRC_MASK  	(0x1UL << RCC_AHBENR_CRC_POS)
#define RCC_AHBENR_CRC			RCC_AHBENR_CRC_MASK

#define	RCC_AHBENR_FSMC_POS		(8U)
#define RCC_AHBENR_FSMC_MASK  	(0x1UL << RCC_AHBENR_FSMC_POS)
#define RCC_AHBENR_FSMC			RCC_AHBENR_FSMC_MASK

#define	RCC_AHBENR_SDIO_POS		(10U)
#define RCC_AHBENR_SDIO_MASK  	(0x1UL << RCC_AHBENR_SDIO_POS)
#define RCC_AHBENR_SDIO			RCC_AHBENR_SDIO_MASK

/*******************  Bit definition for RCC_APB1ENR register  ********************/
#define RCC_APB1ENR_TIM2_POS    (0U)
#define RCC_APB1ENR_TIM2_MASK   (0x1UL << RCC_APB1ENR_TIM2_POS)
#define RCC_APB1ENR_TIM2		RCC_APB1ENR_TIM2_MASK

#define RCC_APB1ENR_TIM3_POS    (1U)
#define RCC_APB1ENR_TIM3_MASK   (0x1UL << RCC_APB1ENR_TIM3_POS)
#define RCC_APB1ENR_TIM3		RCC_APB1ENR_TIM3_MASK

#define RCC_APB1ENR_TIM4_POS    (2U)
#define RCC_APB1ENR_TIM4_MASK   (0x1UL << RCC_APB1ENR_TIM4_POS)
#define RCC_APB1ENR_TIM4		RCC_APB1ENR_TIM4_MASK

#define RCC_APB1ENR_TIM5_POS    (3U)
#define RCC_APB1ENR_TIM5_MASK   (0x1UL << RCC_APB1ENR_TIM5_POS)
#define RCC_APB1ENR_TIM5		RCC_APB1ENR_TIM5_MASK

#define RCC_APB1ENR_TIM6_POS    (4U)
#define RCC_APB1ENR_TIM6_MASK   (0x1UL << RCC_APB1ENR_TIM6_POS)
#define RCC_APB1ENR_TIM6		RCC_APB1ENR_TIM6_MASK

#define RCC_APB1ENR_TIM7_POS    (5U)
#define RCC_APB1ENR_TIM7_MASK   (0x1UL << RCC_APB1ENR_TIM7_POS)
#define RCC_APB1ENR_TIM7		RCC_APB1ENR_TIM7_MASK

#define RCC_APB1ENR_TIM12_POS   (6U)
#define RCC_APB1ENR_TIM12_MASK  (0x1UL << RCC_APB1ENR_TIM12_POS)
#define RCC_APB1ENR_TIM12		RCC_APB1ENR_TIM12_MASK

#define RCC_APB1ENR_TIM13_POS   (7U)
#define RCC_APB1ENR_TIM13_MASK  (0x1UL << RCC_APB1ENR_TIM13_POS)
#define RCC_APB1ENR_TIM13		RCC_APB1ENR_TIM13_MASK

#define RCC_APB1ENR_TIM14_POS   (8U)
#define RCC_APB1ENR_TIM14_MASK  (0x1UL << RCC_APB1ENR_TIM14_POS)
#define RCC_APB1ENR_TIM14		RCC_APB1ENR_TIM14_MASK

#define RCC_APB1ENR_WWDG_POS   	(11U)
#define RCC_APB1ENR_WWDG_MASK  	(0x1UL << RCC_APB1ENR_WWDG_POS)
#define RCC_APB1ENR_WWDG		RCC_APB1ENR_WWDG_MASK

#define RCC_APB1ENR_SPI2_POS   	(14U)
#define RCC_APB1ENR_SPI2_MASK  	(0x1UL << RCC_APB1ENR_SPI2_POS)
#define RCC_APB1ENR_SPI2		RCC_APB1ENR_SPI2_MASK

#define RCC_APB1ENR_SPI3_POS   	(15U)
#define RCC_APB1ENR_SPI3_MASK  	(0x1UL << RCC_APB1ENR_SPI3_POS)
#define RCC_APB1ENR_SPI3		RCC_APB1ENR_SPI3_MASK

#define RCC_APB1ENR_USART2_POS  (17U)
#define RCC_APB1ENR_USART2_MASK (0x1UL << RCC_APB1ENR_USART2_POS)
#define RCC_APB1ENR_USART2		RCC_APB1ENR_USART2_MASK

#define RCC_APB1ENR_USART3_POS  (18U)
#define RCC_APB1ENR_USART3_MASK (0x1UL << RCC_APB1ENR_USART3_POS)
#define RCC_APB1ENR_USART3		RCC_APB1ENR_USART3_MASK

#define RCC_APB1ENR_UART4_POS   (19U)
#define RCC_APB1ENR_UART4_MASK  (0x1UL << RCC_APB1ENR_UART4_POS)
#define RCC_APB1ENR_UART4		RCC_APB1ENR_UART4_MASK

#define RCC_APB1ENR_UART5_POS   (20U)
#define RCC_APB1ENR_UART5_MASK  (0x1UL << RCC_APB1ENR_UART5_POS)
#define RCC_APB1ENR_UART5		RCC_APB1ENR_UART5_MASK

#define RCC_APB1ENR_I2C1_POS   	(21U)
#define RCC_APB1ENR_I2C1_MASK 	(0x1UL << RCC_APB1ENR_I2C1_POS)
#define RCC_APB1ENR_I2C1		RCC_APB1ENR_I2C1_MASK

#define RCC_APB1ENR_I2C2_POS   	(22U)
#define RCC_APB1ENR_I2C2_MASK  	(0x1UL << RCC_APB1ENR_I2C2_POS)
#define RCC_APB1ENR_I2C2		RCC_APB1ENR_I2C2_MASK

#define RCC_APB1ENR_USB_POS   	(23U)
#define RCC_APB1ENR_USB_MASK  	(0x1UL << RCC_APB1ENR_USB_POS)
#define RCC_APB1ENR_USB			RCC_APB1ENR_USB_MASK

#define RCC_APB1ENR_CAN_POS   	(25U)
#define RCC_APB1ENR_CAN_MASK  	(0x1UL << RCC_APB1ENR_CAN_POS)
#define RCC_APB1ENR_CAN			RCC_APB1ENR_CAN_MASK

#define RCC_APB1ENR_BKP_POS   	(27U)
#define RCC_APB1ENR_BKP_MASK  	(0x1UL << RCC_APB1ENR_BKP_POS)
#define RCC_APB1ENR_BKP			RCC_APB1ENR_BKP_MASK

#define RCC_APB1ENR_PWR_POS   	(28U)
#define RCC_APB1ENR_PWR_MASK  	(0x1UL << RCC_APB1ENR_PWR_POS)
#define RCC_APB1ENR_PWR			RCC_APB1ENR_PWR_MASK

#define RCC_APB1ENR_DAC_POS   	(29U)
#define RCC_APB1ENR_DAC_MASK  	(0x1UL << RCC_APB1ENR_DAC_POS)
#define RCC_APB1ENR_DAC			RCC_APB1ENR_DAC_MASK


/*******************  Bit definition for RCC_CR register  ********************/
#define RCC_CR_HSION_POS   	(0U)
#define RCC_CR_HSION_MASK  	(0x1UL << RCC_CR_HSION_POS)
#define RCC_CR_HSION		RCC_CR_HSION_MASK

#define RCC_CR_HSEON_POS   (16U)
#define RCC_CR_HSEON_MASK  (0x1UL << RCC_CR_HSEON_POS)
#define RCC_CR_HSEON		RCC_CR_HSEON_MASK

#define RCC_CR_HSEBYP_POS   (18U)
#define RCC_CR_HSEBYP_MASK  (0x1UL << RCC_CR_HSEBYP_POS)
#define RCC_CR_HSEBYP		RCC_CR_HSEBYP_MASK

#define RCC_CR_PLLON_POS   (24U)
#define RCC_CR_PLLON_MASK  (0x1UL << RCC_CR_PLLON_POS)
#define RCC_CR_PLLON		RCC_CR_PLLON_MASK



#endif /* RCC_DRIVER_RCC_PRIVATE_H_ */
