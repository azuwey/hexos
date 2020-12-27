#ifndef __STM32L073XX_SYSCFG
#define __STM32L073XX_SYSCFG

#include "common_types.hpp"
#include "comp.hpp"

namespace SYSCFG {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS = ((t_uint32)0x40023000U);
} // namespace ADDRESSES

namespace TYPEDEFS {
typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 MEM_MODE : 0x02U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 UFB : 0x02U;
        t_uint32 /* RESERVED */ : 0x04U;
        __R t_uint32 BOOT_MODE : 0x02U;
        t_uint32 /* RESERVED */ : 0x16U;
    } BIT;
    __RW t_uint32 WORD;
} t_CFG1R;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 FWDIS : 0x02U;
        __RW t_uint32 LCD_CAPA : 0x05U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 I2C_PB6_FMP : 0x01U;
        __RW t_uint32 I2C_PB7_FMP : 0x01U;
        __RW t_uint32 I2C_PB8_FMP : 0x01U;
        __RW t_uint32 I2C_PB6_FMP : 0x01U;
        __RW t_uint32 I2C1_FMP : 0x01U;
        __RW t_uint32 I2C2_FMP : 0x01U;
        __RW t_uint32 I2C3_FMP : 0x01U;
        t_uint32 /* RESERVED */ : 0x11U;
    } BIT;
    __RW t_uint32 WORD;
} t_CFG2R;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EN_VREFINT : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 SEL_VREF_OUT : 0x02U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 ENBUF_VREFINT_ADC : 0x01U;
        __RW t_uint32 ENBUF_SENSOR_ADC : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 ENBUF_VREFINT_COMP2 : 0x01U;
        __RW t_uint32 ENREF_HSI48 : 0x01U;
        t_uint32 /* RESERVED */ : 0x10U;
        __R t_uint32 VREFINT_RDYF : 0x01U;
        __R t_uint32 REF_LOCK : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_CFG3R;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EXTI0 : 0x04U;
        __RW t_uint32 EXTI1 : 0x04U;
        __RW t_uint32 EXTI2 : 0x04U;
        __RW t_uint32 EXTI3 : 0x04U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_EXTIC1R;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EXTI4 : 0x04U;
        __RW t_uint32 EXTI5 : 0x04U;
        __RW t_uint32 EXTI6 : 0x04U;
        __RW t_uint32 EXTI7 : 0x04U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_EXTIC2R;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EXTI8 : 0x04U;
        __RW t_uint32 EXTI9 : 0x04U;
        __RW t_uint32 EXTI10 : 0x04U;
        __RW t_uint32 EXTI11 : 0x04U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_EXTIC3R;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EXTI12 : 0x04U;
        __RW t_uint32 EXTI13 : 0x04U;
        __RW t_uint32 EXTI14 : 0x04U;
        __RW t_uint32 EXTI15 : 0x04U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_EXTIC4R;

typedef struct __attribute__((packed)) {
    t_CFG1R CFG1R;
    t_CFG2R CFG2R;
    t_EXTIC1R EXTIC1R;
    t_EXTIC2R EXTIC2R;
    t_EXTIC3R EXTIC3R;
    t_EXTIC4R EXTIC4R;
    COMP::TYPEDEFS::t_CS1R CS1R;
    COMP::TYPEDEFS::t_CS2R CS2R;
    t_CFG3R CFG3R;
} t_SYSCFG;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace SYSCFG

namespace REGISTERS {
inline SYSCFG::TYPEDEFS::t_SYSCFG &r_SYSCFG = *((SYSCFG::TYPEDEFS::t_SYSCFG *)SYSCFG::ADDRESSES::BASE_ADDRESS);
} // namespace REGISTERS
#endif // __STM32L073XX_SYSCFG