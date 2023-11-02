/*
 * rcc.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Bolis
 */

#include "rcc.h"
#include "rcc_private.h"
#include  "rcc_config.h"


void MCAL_RCC_SysType_Init(){

	switch (RCC_CLK_Type_CFG) {

	case RCC_HSI_CLK:
		RCC->CR = 0x00000000 ;
		RCC->CR |= RCC_CR_HSION ;
		RCC->CR |= (0x1UL << (7));		//Trimming
		break;

	case RCC_HSE_CRYSTAL_CLK:
		RCC->CR = 0x00000000 ;
		RCC->CR = RCC_CR_HSEON ;
		break;

	case RCC_HSE_RC_CLK:
		RCC->CR = 0x00000000 ;
		RCC->CR |= RCC_CR_HSEON ;
		RCC->CR |= RCC_CR_HSEBYP ;
		break;

	case RCC_PLL_CRYSTAL_CLK:
		RCC->CR = 0x00000000 ;
		RCC->CR |= RCC_CR_HSEON ;
		RCC->CR |= RCC_CR_PLLON ;
		break;

	case RCC_PLL_RC_CLK:
		RCC->CR = 0x00000000 ;
		RCC->CR |= RCC_CR_HSEON ;
		RCC->CR |= RCC_CR_HSEBYP ;
		RCC->CR |= RCC_CR_PLLON ;
		break;

	default:
		break;
	}

}
void MCAL_RCC_Enable_Clock(EN_Peripheral_t peripheral,uint8_t Bus){

	if(Bus == APB2ENR_BUS){
		switch (peripheral) {

		case AFIO_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_AFIO ;
			break;

		case IOPA_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_IOPA ;
			break;

		case IOPB_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_IOPB ;
			break;

		case IOPC_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_IOPC ;
			break;

		case IOPD_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_IOPD ;
			break;

		case IOPE_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_IOPE ;
			break;

		case IOPF_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_IOPF ;
			break;

		case IOPG_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_IOPG ;
			break;

		case ADC1_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_ADC1 ;
			break;

		case ADC2_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_ADC2 ;
			break;

		case TIM1_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_TIM1 ;
			break;

		case SPI1_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_SPI1 ;
			break;

		case TIM8_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_TIM8 ;
			break;

		case USART1_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_USART1 ;
			break;

		case ADC3_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_ADC3 ;
			break;

		case TIM9_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_TIM9 ;
			break;

		case TIM10_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_TIM10 ;
			break;

		case TIM11_EN_CLK:
			RCC->APB2ENR |= RCC_APB2ENR_TIM11 ;
			break;
		default:
			break;
		}
	}



	if(Bus == AHBENR_BUS){
		switch (peripheral) {
		case DMA1_EN_CLK:
			RCC->AHBENR |= RCC_AHBENR_DMA1 ;
			break;

		case DMA2_EN_CLK:
			RCC->AHBENR |= RCC_AHBENR_DMA2 ;
			break;

		case SRAM_EN_CLK:
			RCC->AHBENR |= RCC_AHBENR_SRAM ;
			break;

		case FLITF_EN_CLK:
			RCC->AHBENR |= RCC_AHBENR_FLITF ;
			break;

		case CRC_EN_CLK:
			RCC->AHBENR |= RCC_AHBENR_CRC ;
			break;

		case FSMC_EN_CLK:
			RCC->AHBENR |= RCC_AHBENR_FSMC ;
			break;

		case SDIO_EN_CLK:
			RCC->AHBENR |= RCC_AHBENR_SDIO ;
			break;
		default:
			break;
		}

	}


	if(Bus == APB1ENR_BUS){
		switch (peripheral) {
		case TIM2_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM2 ;
			break;

		case TIM3_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM3 ;
			break;

		case TIM4_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM4 ;
			break;

		case TIM5_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM5 ;
			break;

		case TIM6_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM6 ;
			break;

		case TIM7_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM7 ;
			break;

		case TIM12_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM12 ;
			break;

		case TIM13_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM13 ;
			break;

		case TIM14_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_TIM14 ;
			break;

		case WWDG_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_WWDG ;
			break;

		case SPI2_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_SPI2 ;
			break;

		case SPI3_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_SPI3 ;
			break;

		case USART2_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_USART2 ;
			break;

		case USART3_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_USART3 ;
			break;

		case UART4_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_UART4 ;
			break;

		case UART5_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_UART5 ;
			break;

		case I2C1_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_I2C1 ;
			break;

		case I2C2_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_I2C2 ;
			break;

		case USB_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_USB ;
			break;

		case CAN_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_CAN ;
			break;

		case BKP_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_BKP ;
			break;

		case PWR_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_PWR ;
			break;

		case DAC_EN_CLK:
			RCC->APB1ENR |= RCC_APB1ENR_DAC ;
			break;

		default:
			break;
		}
	}
}
