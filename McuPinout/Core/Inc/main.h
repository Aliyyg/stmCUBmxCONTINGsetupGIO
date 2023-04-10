/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define general_i_o_Pin GPIO_PIN_13
#define general_i_o_GPIO_Port GPIOC
#define I2C3_SCL_PRESIRsensor_Pin GPIO_PIN_0
#define I2C3_SCL_PRESIRsensor_GPIO_Port GPIOC
#define I2C3_SDA_PRESIRsensor_Pin GPIO_PIN_1
#define I2C3_SDA_PRESIRsensor_GPIO_Port GPIOC
#define ADC_IN3_FEADBACKgasscontrol_Pin GPIO_PIN_2
#define ADC_IN3_FEADBACKgasscontrol_GPIO_Port GPIOC
#define adc1IN4general_adc1_Pin GPIO_PIN_3
#define adc1IN4general_adc1_GPIO_Port GPIOC
#define adc1IN5general_adc2_Pin GPIO_PIN_0
#define adc1IN5general_adc2_GPIO_Port GPIOA
#define ADC_0_10_FEAD_BACK_Pin GPIO_PIN_1
#define ADC_0_10_FEAD_BACK_GPIO_Port GPIOA
#define USART2_TX_USB_Pin GPIO_PIN_2
#define USART2_TX_USB_GPIO_Port GPIOA
#define USATR2_RX_USB_Pin GPIO_PIN_3
#define USATR2_RX_USB_GPIO_Port GPIOA
#define DAC_0_10_Pin GPIO_PIN_4
#define DAC_0_10_GPIO_Port GPIOA
#define CS_Pin GPIO_PIN_4
#define CS_GPIO_Port GPIOC
#define adc_IN14GENERALpwmFEADBACK_Pin GPIO_PIN_5
#define adc_IN14GENERALpwmFEADBACK_GPIO_Port GPIOC
#define DE_MULTI_CH2_485_Pin GPIO_PIN_0
#define DE_MULTI_CH2_485_GPIO_Port GPIOB
#define DE_GPIO_Pin GPIO_PIN_2
#define DE_GPIO_GPIO_Port GPIOB
#define TIME15_CH2_PWM_0_10_Pin GPIO_PIN_15
#define TIME15_CH2_PWM_0_10_GPIO_Port GPIOB
#define mosfet_feadback_2_Pin GPIO_PIN_8
#define mosfet_feadback_2_GPIO_Port GPIOC
#define TIM1_CH1_mosfet_gate2_Pin GPIO_PIN_8
#define TIM1_CH1_mosfet_gate2_GPIO_Port GPIOA
#define adm485txCH2__rs232_Pin GPIO_PIN_9
#define adm485txCH2__rs232_GPIO_Port GPIOA
#define adm485RXCH2__rs232_Pin GPIO_PIN_10
#define adm485RXCH2__rs232_GPIO_Port GPIOA
#define TIME1_CH4mosfet_gate1_Pin GPIO_PIN_11
#define TIME1_CH4mosfet_gate1_GPIO_Port GPIOA
#define mosfet_feadback_1_Pin GPIO_PIN_12
#define mosfet_feadback_1_GPIO_Port GPIOA
#define usart3_txDS18B20_Pin GPIO_PIN_10
#define usart3_txDS18B20_GPIO_Port GPIOC
#define TIME2_CH2GeneralPWM_Pin GPIO_PIN_3
#define TIME2_CH2GeneralPWM_GPIO_Port GPIOB
#define powerCNTROL3v3_Pin GPIO_PIN_5
#define powerCNTROL3v3_GPIO_Port GPIOB
#define I2C1_SCL_SHT20_Pin GPIO_PIN_6
#define I2C1_SCL_SHT20_GPIO_Port GPIOB
#define I2C1_SDA_SHT20_Pin GPIO_PIN_7
#define I2C1_SDA_SHT20_GPIO_Port GPIOB
#define TIM16_CH1_GAScontrol_Pin GPIO_PIN_8
#define TIM16_CH1_GAScontrol_GPIO_Port GPIOB
#define powerCNTROL5v_Pin GPIO_PIN_9
#define powerCNTROL5v_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
