#ifndef __STM32L073XX_MODULES
#define __STM32L073XX_MODULES

#define ADC_MODULE_SUPPORT
#define AES_MODULE_SUPPORT
#define COMP_MODULE_SUPPORT
#define CORTEX_MODULE_SUPPORT
#define CRS_MODULE_SUPPORT
#define DAC_MODULE_SUPPORT
#define DMA_MODULE_SUPPORT
#define FLASH_MODULE_SUPPORT
#define GPIO_MODULE_SUPPORT
#define I2C_MODULE_SUPPORT
#define IWDG_MODULE_SUPPORT
#define LCD_MODULE_SUPPORT
#define PWR_MODULE_SUPPORT
#define RCC_MODULE_SUPPORT
#define RNG_MODULE_SUPPORT
#define RTC_MODULE_SUPPORT
#define SPI_MODULE_SUPPORT
#define SYSCFG_MODULE_SUPPORT
#define TIM_MODULE_SUPPORT
#define TSC_MODULE_SUPPORT
#define USART_MODULE_SUPPORT
#define USB_MODULE_SUPPORT

#include "crc.hpp"
#include "crs.hpp"
#include "dma.hpp"
#include "flash.hpp"
#include "gpio.hpp"
#include "pwr.hpp"
#include "rcc.hpp"
#include "syscfg.hpp" // This contains access for the comp registers

#endif // __STM32L073XX_MODULES