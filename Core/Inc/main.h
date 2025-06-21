/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define usb_uart_tx_Pin GPIO_PIN_2
#define usb_uart_tx_GPIO_Port GPIOA
#define usb_uart_rx_Pin GPIO_PIN_3
#define usb_uart_rx_GPIO_Port GPIOA
#define radio_aux_Pin GPIO_PIN_8
#define radio_aux_GPIO_Port GPIOA
#define radio_aux_EXTI_IRQn EXTI9_5_IRQn
#define radio_uart_tx_Pin GPIO_PIN_9
#define radio_uart_tx_GPIO_Port GPIOA
#define radio_uart_rx_Pin GPIO_PIN_10
#define radio_uart_rx_GPIO_Port GPIOA
#define radio_m1_Pin GPIO_PIN_11
#define radio_m1_GPIO_Port GPIOA
#define radio_m0_Pin GPIO_PIN_12
#define radio_m0_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
