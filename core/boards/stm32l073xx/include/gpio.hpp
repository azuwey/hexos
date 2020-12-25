#ifndef __STM32L073XX_GPIO
#define __STM32L073XX_GPIO

#include "common_types.hpp"

namespace GPIO {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS_A = ((t_uint32)0x50000000U);
const inline t_uint32 BASE_ADDRESS_B = ((t_uint32)0x50000400U);
const inline t_uint32 BASE_ADDRESS_C = ((t_uint32)0x50000800U);
const inline t_uint32 BASE_ADDRESS_D = ((t_uint32)0x50000C00U);
const inline t_uint32 BASE_ADDRESS_E = ((t_uint32)0x50001000U);
const inline t_uint32 BASE_ADDRESS_H = ((t_uint32)0x50001C00U);
} // namespace ADDRESSES

namespace TYPEDEFS {
typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 MODE0 : 0x02U;
        __RW t_uint32 MODE1 : 0x02U;
        __RW t_uint32 MODE2 : 0x02U;
        __RW t_uint32 MODE3 : 0x02U;
        __RW t_uint32 MODE4 : 0x02U;
        __RW t_uint32 MODE5 : 0x02U;
        __RW t_uint32 MODE6 : 0x02U;
        __RW t_uint32 MODE7 : 0x02U;
        __RW t_uint32 MODE8 : 0x02U;
        __RW t_uint32 MODE9 : 0x02U;
        __RW t_uint32 MODE10 : 0x02U;
        __RW t_uint32 MODE11 : 0x02U;
        __RW t_uint32 MODE12 : 0x02U;
        __RW t_uint32 MODE13 : 0x02U;
        __RW t_uint32 MODE14 : 0x02U;
        __RW t_uint32 MODE15 : 0x02U;
    } BIT;
    __RW t_uint32 WORD;
} t_MODER;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 OT0 : 0x01U;
        __RW t_uint32 OT1 : 0x01U;
        __RW t_uint32 OT2 : 0x01U;
        __RW t_uint32 OT3 : 0x01U;
        __RW t_uint32 OT4 : 0x01U;
        __RW t_uint32 OT5 : 0x01U;
        __RW t_uint32 OT6 : 0x01U;
        __RW t_uint32 OT7 : 0x01U;
        __RW t_uint32 OT8 : 0x01U;
        __RW t_uint32 OT9 : 0x01U;
        __RW t_uint32 OT10 : 0x01U;
        __RW t_uint32 OT11 : 0x01U;
        __RW t_uint32 OT12 : 0x01U;
        __RW t_uint32 OT13 : 0x01U;
        __RW t_uint32 OT14 : 0x01U;
        __RW t_uint32 OT15 : 0x01U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_OTYPER;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 OSPEED0 : 0x02U;
        __RW t_uint32 OSPEED1 : 0x02U;
        __RW t_uint32 OSPEED2 : 0x02U;
        __RW t_uint32 OSPEED3 : 0x02U;
        __RW t_uint32 OSPEED4 : 0x02U;
        __RW t_uint32 OSPEED5 : 0x02U;
        __RW t_uint32 OSPEED6 : 0x02U;
        __RW t_uint32 OSPEED7 : 0x02U;
        __RW t_uint32 OSPEED8 : 0x02U;
        __RW t_uint32 OSPEED9 : 0x02U;
        __RW t_uint32 OSPEED10 : 0x02U;
        __RW t_uint32 OSPEED11 : 0x02U;
        __RW t_uint32 OSPEED12 : 0x02U;
        __RW t_uint32 OSPEED13 : 0x02U;
        __RW t_uint32 OSPEED14 : 0x02U;
        __RW t_uint32 OSPEED15 : 0x02U;
    } BIT;
    __RW t_uint32 WORD;
} t_OSPEEDR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 PUPD0 : 0x02U;
        __RW t_uint32 PUPD1 : 0x02U;
        __RW t_uint32 PUPD2 : 0x02U;
        __RW t_uint32 PUPD3 : 0x02U;
        __RW t_uint32 PUPD4 : 0x02U;
        __RW t_uint32 PUPD5 : 0x02U;
        __RW t_uint32 PUPD6 : 0x02U;
        __RW t_uint32 PUPD7 : 0x02U;
        __RW t_uint32 PUPD8 : 0x02U;
        __RW t_uint32 PUPD9 : 0x02U;
        __RW t_uint32 PUPD10 : 0x02U;
        __RW t_uint32 PUPD11 : 0x02U;
        __RW t_uint32 PUPD12 : 0x02U;
        __RW t_uint32 PUPD13 : 0x02U;
        __RW t_uint32 PUPD14 : 0x02U;
        __RW t_uint32 PUPD15 : 0x02U;
    } BIT;
    __RW t_uint32 WORD;
} t_PUPDR;

typedef union {
    struct __attribute__((packed)) {
        __R t_uint32 ID0 : 0x01U;
        __R t_uint32 ID1 : 0x01U;
        __R t_uint32 ID2 : 0x01U;
        __R t_uint32 ID3 : 0x01U;
        __R t_uint32 ID4 : 0x01U;
        __R t_uint32 ID5 : 0x01U;
        __R t_uint32 ID6 : 0x01U;
        __R t_uint32 ID7 : 0x01U;
        __R t_uint32 ID8 : 0x01U;
        __R t_uint32 ID9 : 0x01U;
        __R t_uint32 ID10 : 0x01U;
        __R t_uint32 ID11 : 0x01U;
        __R t_uint32 ID12 : 0x01U;
        __R t_uint32 ID13 : 0x01U;
        __R t_uint32 ID14 : 0x01U;
        __R t_uint32 ID15 : 0x01U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __R t_uint32 WORD;
} t_IDR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 OD0 : 0x01U;
        __RW t_uint32 OD1 : 0x01U;
        __RW t_uint32 OD2 : 0x01U;
        __RW t_uint32 OD3 : 0x01U;
        __RW t_uint32 OD4 : 0x01U;
        __RW t_uint32 OD5 : 0x01U;
        __RW t_uint32 OD6 : 0x01U;
        __RW t_uint32 OD7 : 0x01U;
        __RW t_uint32 OD8 : 0x01U;
        __RW t_uint32 OD9 : 0x01U;
        __RW t_uint32 OD10 : 0x01U;
        __RW t_uint32 OD11 : 0x01U;
        __RW t_uint32 OD12 : 0x01U;
        __RW t_uint32 OD13 : 0x01U;
        __RW t_uint32 OD14 : 0x01U;
        __RW t_uint32 OD15 : 0x01U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_ODR;

typedef union {
    struct __attribute__((packed)) {
        __W t_uint32 BS0 : 0x01U;
        __W t_uint32 BS1 : 0x01U;
        __W t_uint32 BS2 : 0x01U;
        __W t_uint32 BS3 : 0x01U;
        __W t_uint32 BS4 : 0x01U;
        __W t_uint32 BS5 : 0x01U;
        __W t_uint32 BS6 : 0x01U;
        __W t_uint32 BS7 : 0x01U;
        __W t_uint32 BS8 : 0x01U;
        __W t_uint32 BS9 : 0x01U;
        __W t_uint32 BS10 : 0x01U;
        __W t_uint32 BS11 : 0x01U;
        __W t_uint32 BS12 : 0x01U;
        __W t_uint32 BS13 : 0x01U;
        __W t_uint32 BS14 : 0x01U;
        __W t_uint32 BS15 : 0x01U;
        __W t_uint32 BR0 : 0x01U;
        __W t_uint32 BR1 : 0x01U;
        __W t_uint32 BR2 : 0x01U;
        __W t_uint32 BR3 : 0x01U;
        __W t_uint32 BR4 : 0x01U;
        __W t_uint32 BR5 : 0x01U;
        __W t_uint32 BR6 : 0x01U;
        __W t_uint32 BR7 : 0x01U;
        __W t_uint32 BR8 : 0x01U;
        __W t_uint32 BR9 : 0x01U;
        __W t_uint32 BR10 : 0x01U;
        __W t_uint32 BR11 : 0x01U;
        __W t_uint32 BR12 : 0x01U;
        __W t_uint32 BR13 : 0x01U;
        __W t_uint32 BR14 : 0x01U;
        __W t_uint32 BR15 : 0x01U;
    } BIT;
    __W t_uint32 WORD;
} t_BSRR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 LCK0 : 0x01U;
        __RW t_uint32 LCK1 : 0x01U;
        __RW t_uint32 LCK2 : 0x01U;
        __RW t_uint32 LCK3 : 0x01U;
        __RW t_uint32 LCK4 : 0x01U;
        __RW t_uint32 LCK5 : 0x01U;
        __RW t_uint32 LCK6 : 0x01U;
        __RW t_uint32 LCK7 : 0x01U;
        __RW t_uint32 LCK8 : 0x01U;
        __RW t_uint32 LCK9 : 0x01U;
        __RW t_uint32 LCK10 : 0x01U;
        __RW t_uint32 LCK11 : 0x01U;
        __RW t_uint32 LCK12 : 0x01U;
        __RW t_uint32 LCK13 : 0x01U;
        __RW t_uint32 LCK14 : 0x01U;
        __RW t_uint32 LCK15 : 0x01U;
        __RW t_uint32 LCKK : 0x01U;
        t_uint32 /* RESERVED */ : 0x0FU;
    } BIT;
    __RW t_uint32 WORD;
} t_LCKR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 AFSEL0 : 0x04U;
        __RW t_uint32 AFSEL1 : 0x04U;
        __RW t_uint32 AFSEL2 : 0x04U;
        __RW t_uint32 AFSEL3 : 0x04U;
        __RW t_uint32 AFSEL4 : 0x04U;
        __RW t_uint32 AFSEL5 : 0x04U;
        __RW t_uint32 AFSEL6 : 0x04U;
        __RW t_uint32 AFSEL7 : 0x04U;
    } BIT;
    __RW t_uint32 WORD;
} t_AFRL;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 AFSEL8 : 0x04U;
        __RW t_uint32 AFSEL9 : 0x04U;
        __RW t_uint32 AFSEL10 : 0x04U;
        __RW t_uint32 AFSEL11 : 0x04U;
        __RW t_uint32 AFSEL12 : 0x04U;
        __RW t_uint32 AFSEL13 : 0x04U;
        __RW t_uint32 AFSEL14 : 0x04U;
        __RW t_uint32 AFSEL15 : 0x04U;
    } BIT;
    __RW t_uint32 WORD;
} t_AFRH;

typedef union {
    struct __attribute__((packed)) {
        __W t_uint32 BR0 : 0x01U;
        __W t_uint32 BR1 : 0x01U;
        __W t_uint32 BR2 : 0x01U;
        __W t_uint32 BR3 : 0x01U;
        __W t_uint32 BR4 : 0x01U;
        __W t_uint32 BR5 : 0x01U;
        __W t_uint32 BR6 : 0x01U;
        __W t_uint32 BR7 : 0x01U;
        __W t_uint32 BR8 : 0x01U;
        __W t_uint32 BR9 : 0x01U;
        __W t_uint32 BR10 : 0x01U;
        __W t_uint32 BR11 : 0x01U;
        __W t_uint32 BR12 : 0x01U;
        __W t_uint32 BR13 : 0x01U;
        __W t_uint32 BR14 : 0x01U;
        __W t_uint32 BR15 : 0x01U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __W t_uint32 WORD;
} t_BRR;

typedef struct __attribute__((packed)) {
    t_MODER MODER;
    t_OTYPER OTYPER;
    t_OSPEEDR OSPEEDR;
    t_PUPDR PUPDR;
    t_IDR IDR;
    t_ODR ODR;
    t_BSRR BSRR;
    t_LCKR LCKR;
    t_AFRL AFRL;
    t_AFRH AFRH;
    t_BRR BRR;
} t_GPIOx;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace GPIO

namespace REGISTERS {
inline GPIO::TYPEDEFS::t_GPIOx &GPIOA = *((GPIO::TYPEDEFS::t_GPIOx *)GPIO::ADDRESSES::BASE_ADDRESS_A);
inline GPIO::TYPEDEFS::t_GPIOx &GPIOB = *((GPIO::TYPEDEFS::t_GPIOx *)GPIO::ADDRESSES::BASE_ADDRESS_B);
inline GPIO::TYPEDEFS::t_GPIOx &GPIOC = *((GPIO::TYPEDEFS::t_GPIOx *)GPIO::ADDRESSES::BASE_ADDRESS_C);
inline GPIO::TYPEDEFS::t_GPIOx &GPIOD = *((GPIO::TYPEDEFS::t_GPIOx *)GPIO::ADDRESSES::BASE_ADDRESS_D);
inline GPIO::TYPEDEFS::t_GPIOx &GPIOE = *((GPIO::TYPEDEFS::t_GPIOx *)GPIO::ADDRESSES::BASE_ADDRESS_E);
inline GPIO::TYPEDEFS::t_GPIOx &GPIOH = *((GPIO::TYPEDEFS::t_GPIOx *)GPIO::ADDRESSES::BASE_ADDRESS_H);
} // namespace REGISTERS
#endif // __STM32L073XX_GPIO