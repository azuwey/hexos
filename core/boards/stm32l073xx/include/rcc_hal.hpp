#ifndef __STM32L073XX_RCC_HAL
#define __STM32L073XX_RCC_HAL

#include "common_types.hpp"
#include "rcc.hpp"

namespace RCC {
namespace HAL {
namespace CONSTS {
#ifdef EXTERNAL_OSCILLATOR_FREQUENCY
constexpr unsigned int externalOscillatorFrequency = EXTERNAL_OSCILLATOR_FREQUENCY;
#else
#error "Missing EXTERNAL_OSCILLATOR_FREQUENCY defintion"
#endif

constexpr unsigned int internalOscillatorFrequency = 0xF42400U;
} // namespace CONSTS

unsigned int ui_AHBPrescaler(void);
unsigned int ui_PLLMultiplicationFactor(void);
unsigned int ui_PLLPrescaler(void);
unsigned int ui_HSIPrescaler(void);
unsigned int ui_MSIOscillatorFrequency(void);
unsigned int ui_CalculatePWRClockFrequency(void);
unsigned int ui_CalculateMainCPUClockFrequency(void);

} // namespace HAL
} // namespace RCC
#endif // __STM32L073XX_RCC_HAL