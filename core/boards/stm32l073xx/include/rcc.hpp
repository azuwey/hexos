#ifndef __STM32L073XX_RCC
#define __STM32L073XX_RCC

#include "common_types.hpp"

namespace RCC {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS = ((t_uint32)0x40021000U);
} // namespace ADDRESSES

namespace TYPEDEFS {
typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 HSI16ON : 0x01U;
        __RW t_uint32 HSI16KERON : 0x01U;
        __R t_uint32 HSI16RDYF : 0x01U;
        __RW t_uint32 HSI16DIVEN : 0x01U;
        __R t_uint32 HSI16DIVF : 0x01U;
        __RW t_uint32 HSI16OUTEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 MSION : 0x01U;
        __R t_uint32 MSIRDY : 0x01U;
        t_uint32 /* RESERVED */ : 0x06U;
        __RW t_uint32 HSEON : 0x01U;
        __R t_uint32 HSERDY : 0x01U;
        __RW t_uint32 HSEBYP : 0x01U;
        __RW t_uint32 CSSHSEON : 0x01U;
        __RW t_uint32 RTCPRE : 0x02U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 PLLON : 0x01U;
        __RW t_uint32 PLLRDY : 0x01U;
        t_uint32 /* RESERVED */ : 0x06U;
    } BIT;
    __RW t_uint32 WORD;
} t_CR;

typedef union __attribute__((packed)) {
    struct {
        __R t_uint32 HSI16CAL : 0x08U;
        __RW t_uint32 HSI16TRIM : 0x05U;
        __RW t_uint32 MSIRANGE : 0x03U;
        __R t_uint32 MSICAL : 0x08U;
        __RW t_uint32 MSITRIM : 0x08U;
    } BIT;
    __RW t_uint32 WORD;
} t_ICSCR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 HSI48ON : 0x01U;
        __R t_uint32 HSI48RDY : 0x01U;
        __RW t_uint32 HSI48DIV6EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x05U;
        __R t_uint32 HSI48CAL : 0x08U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_CRRCR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 SW : 0x02U;
        __R t_uint32 SWS : 0x02U;
        __RW t_uint32 HPRE : 0x04U;
        __RW t_uint32 PPRE1 : 0x03U;
        __RW t_uint32 PPRE2 : 0x03U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 STOPWUCK : 0x01U;
        __RW t_uint32 PLLSRC : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 PLLMUL : 0x04U;
        __RW t_uint32 PLLDIV : 0x02U;
        __RW t_uint32 MCOSEL : 0x04U;
        __RW t_uint32 MCOPRE : 0x03U;
        t_uint32 /* RESERVED */ : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_CFGR;

typedef union __attribute__((packed)) {
    struct {
        __R t_uint32 LSIRDYIE : 0x01U;
        __R t_uint32 LSERDYIE : 0x01U;
        __R t_uint32 HSI16RDYIE : 0x01U;
        __R t_uint32 HSERDYIE : 0x01U;
        __R t_uint32 PLLRDYIE : 0x01U;
        __R t_uint32 MSIRDYIE : 0x01U;
        __R t_uint32 HSI48RDYIE : 0x01U;
        __R t_uint32 CSSLSE : 0x01U;
        t_uint32 /* RESERVED */ : 0x18U;
    } BIT;
    __RW t_uint32 WORD;
} t_CIER;

typedef union __attribute__((packed)) {
    struct {
        __R t_uint32 LSIRDYIEF : 0x01U;
        __R t_uint32 LSERDYIEF : 0x01U;
        __R t_uint32 HSI16RDYIEF : 0x01U;
        __R t_uint32 HSERDYIEF : 0x01U;
        __R t_uint32 PLLRDYIEF : 0x01U;
        __R t_uint32 MSIRDYIEF : 0x01U;
        __R t_uint32 HSI48RDYIEF : 0x01U;
        __R t_uint32 CSSLSEF : 0x01U;
        __R t_uint32 CSSHSEF : 0x01U;
        t_uint32 /* RESERVED */ : 0x17U;
    } BIT;
    __RW t_uint32 WORD;
} t_CIFR;

typedef union __attribute__((packed)) {
    struct {
        __W t_uint32 LSIRDYC : 0x01U;
        __W t_uint32 LSERDYC : 0x01U;
        __W t_uint32 HSI16RDYC : 0x01U;
        __W t_uint32 HSERDYC : 0x01U;
        __W t_uint32 PLLRDYC : 0x01U;
        __W t_uint32 MSIRDYC : 0x01U;
        __W t_uint32 HSI48RDYC : 0x01U;
        __W t_uint32 CSSLSEC : 0x01U;
        __W t_uint32 CSSHSEC : 0x01U;
        t_uint32 /* RESERVED */ : 0x17U;
    } BIT;
    __RW t_uint32 WORD;
} t_CICR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 IOPARST : 0x01U;
        __RW t_uint32 IOPBRST : 0x01U;
        __RW t_uint32 IOPCRST : 0x01U;
        __RW t_uint32 IOPDRST : 0x01U;
        __RW t_uint32 IOPERST : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 IOPHRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x18U;
    } BIT;
    __RW t_uint32 WORD;
} t_IOPRSTR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 DMARST : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __RW t_uint32 MIFRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRCRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 TSCRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 RNGRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRYPRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
    } BIT;
    __RW t_uint32 WORD;
} t_AHBRSTR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 SYSCFGRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 TIM21RST : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 TIM22RST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 ADCRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 SPI1RST : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 USART1RST : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __RW t_uint32 DBGRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x09U;
    } BIT;
    __RW t_uint32 WORD;
} t_APB2RSTR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 TIM2RST : 0x01U;
        __RW t_uint32 TIM3RST : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 TIM6RST : 0x01U;
        __RW t_uint32 TIM7RST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 LCDRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 WWDGRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 SPI2RST : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 USART2RST : 0x01U;
        __RW t_uint32 LPUART1RST : 0x01U;
        __RW t_uint32 USART4RST : 0x01U;
        __RW t_uint32 USART5RST : 0x01U;
        __RW t_uint32 I2C1RST : 0x01U;
        __RW t_uint32 I2C2RST : 0x01U;
        __RW t_uint32 USBRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRSRST : 0x01U;
        __RW t_uint32 PWRRST : 0x01U;
        __RW t_uint32 DACRST : 0x01U;
        __RW t_uint32 I2C3RST : 0x01U;
        __RW t_uint32 LPTIM1RST : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_APB1RSTR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 IOPAEN : 0x01U;
        __RW t_uint32 IOPBEN : 0x01U;
        __RW t_uint32 IOPCEN : 0x01U;
        __RW t_uint32 IOPDEN : 0x01U;
        __RW t_uint32 IOPEEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 IOPHEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x18U;
    } BIT;
    __RW t_uint32 WORD;
} t_IOPENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 DMAEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __RW t_uint32 MIFEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRCEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 TSCEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 RNGEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRYPEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
    } BIT;
    __RW t_uint32 WORD;
} t_AHBENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 SYSCFGEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 TIM21EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 TIM22EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 FWEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 ADCEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 SPI1EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 USART1EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __RW t_uint32 DBGEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x09U;
    } BIT;
    __RW t_uint32 WORD;
} t_APB2ENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 TIM2EN : 0x01U;
        __RW t_uint32 TIM3EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 TIM6EN : 0x01U;
        __RW t_uint32 TIM7EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 LCDEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 WWDGEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 SPI2EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 USART2EN : 0x01U;
        __RW t_uint32 LPUART1EN : 0x01U;
        __RW t_uint32 USART4EN : 0x01U;
        __RW t_uint32 USART5EN : 0x01U;
        __RW t_uint32 I2C1EN : 0x01U;
        __RW t_uint32 I2C2EN : 0x01U;
        __RW t_uint32 USBEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRSEN : 0x01U;
        __RW t_uint32 PWREN : 0x01U;
        __RW t_uint32 DACEN : 0x01U;
        __RW t_uint32 I2C3EN : 0x01U;
        __RW t_uint32 LPTIM1EN : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_APB1ENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 IOPASMEN : 0x01U;
        __RW t_uint32 IOPBSMEN : 0x01U;
        __RW t_uint32 IOPCSMEN : 0x01U;
        __RW t_uint32 IOPDSMEN : 0x01U;
        __RW t_uint32 IOPESMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 IOPHSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x18U;
    } BIT;
    __RW t_uint32 WORD;
} t_IOPSMENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 DMASMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __RW t_uint32 MIFSMEN : 0x01U;
        __RW t_uint32 SRAMSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 CRCSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 TSCSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 RNGSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRYPSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
    } BIT;
    __RW t_uint32 WORD;
} t_AHBSMENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 SYSCFGSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 TIM21SMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 TIM22SMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 ADCSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 SPI1SMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 USART1SMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __RW t_uint32 DBGSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x09U;
    } BIT;
    __RW t_uint32 WORD;
} t_APB2SMENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 TIM2SMEN : 0x01U;
        __RW t_uint32 TIM3SMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 TIM6SMEN : 0x01U;
        __RW t_uint32 TIM7SMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 LCDSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 WWDGSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 SPI2SMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 USART2SMEN : 0x01U;
        __RW t_uint32 LPUART1SMEN : 0x01U;
        __RW t_uint32 USART4SMEN : 0x01U;
        __RW t_uint32 USART5SMEN : 0x01U;
        __RW t_uint32 I2C1SMEN : 0x01U;
        __RW t_uint32 I2C2SMEN : 0x01U;
        __RW t_uint32 USBSMEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 CRSSMEN : 0x01U;
        __RW t_uint32 PWRSMEN : 0x01U;
        __RW t_uint32 DACSMEN : 0x01U;
        __RW t_uint32 I2C3SMEN : 0x01U;
        __RW t_uint32 LPTIM1SMEN : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_APB1SMENR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 SART1SEL0 : 0x01U;
        __RW t_uint32 SART1SEL1 : 0x01U;
        __RW t_uint32 SART2SEL0 : 0x01U;
        __RW t_uint32 SART2SEL1 : 0x01U;
        t_uint32 /* RESERVED */ : 0x06U;
        __RW t_uint32 LPUART1SEL0 : 0x01U;
        __RW t_uint32 LPUART1SEL1 : 0x01U;
        __RW t_uint32 I2C1SEL0 : 0x01U;
        __RW t_uint32 I2C1SEL1 : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 I2C3SEL0 : 0x01U;
        __RW t_uint32 I2C3SEL1 : 0x01U;
        __RW t_uint32 LPTIM1SEL0 : 0x01U;
        __RW t_uint32 LPTIM1SEL1 : 0x01U;
        t_uint32 /* RESERVED */ : 0x06U;
        __RW t_uint32 HSI48SEL : 0x01U;
        t_uint32 /* RESERVED */ : 0x05U;
    } BIT;
    __RW t_uint32 WORD;
} t_CCIPR;

typedef union __attribute__((packed)) {
    struct {
        __RW t_uint32 LSION : 0x01U;
        __R t_uint32 LSIRDY : 0x01U;
        t_uint32 /* RESERVED */ : 0x06U;
        __RW t_uint32 LSEON : 0x01U;
        __R t_uint32 LSERDY : 0x01U;
        __RW t_uint32 LSEBYP : 0x01U;
        __RW t_uint32 LSEDRV : 0x01U;
        __RW t_uint32 CSSLSEON : 0x01U;
        __R t_uint32 CSSLSED : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 RTCSEL : 0x02U;
        __RW t_uint32 RTCEN : 0x01U;
        __RW t_uint32 RTCRST : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 RMVF : 0x01U;
        __R t_uint32 FWRSTF : 0x01U;
        __R t_uint32 OBLRSTF : 0x01U;
        __R t_uint32 PINRSTF : 0x01U;
        __R t_uint32 PORRSTF : 0x01U;
        __R t_uint32 SFTRSTF : 0x01U;
        __R t_uint32 IWDGRSTF : 0x01U;
        __R t_uint32 WWDGRSTF : 0x01U;
        __R t_uint32 LPWRRSTF : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_CSR;

typedef struct __attribute__((packed)) {
    t_CR CR;
    t_ICSCR ICSCR;
    t_CRRCR CRRCR;
    t_CFGR CFGR;
    t_CIER CIER;
    t_CIFR CIFR;
    t_CICR CICR;
    t_IOPRSTR IOPRSTR;
    t_AHBRSTR AHBRSTR;
    t_APB2RSTR APB2RSTR;
    t_APB1RSTR APB1RSTR;
    t_IOPENR IOPENR;
    t_AHBENR AHBENR;
    t_APB2ENR APB2ENR;
    t_APB1ENR APB1ENR;
    t_IOPSMENR IOPSMENR;
    t_AHBSMENR AHBSMENR;
    t_APB2SMENR APB2SMENR;
    t_APB1SMENR APB1SMENR;
    t_CCIPR CCIPR;
    t_CSR CSR;
} t_RCC;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace RCC

namespace REGISTERS {
inline RCC::TYPEDEFS::t_RCC &RCC = *((RCC::TYPEDEFS::t_RCC *)RCC::ADDRESSES::BASE_ADDRESS);
} // namespace REGISTERS
#endif // __STM32L073XX_RCC