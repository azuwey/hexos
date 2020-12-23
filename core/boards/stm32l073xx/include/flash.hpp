#ifndef __STM32L073XX_FLASH
#define __STM32L073XX_FLASH

#include "common_types.hpp"

namespace FLASH {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS = ((t_uint32)0x40022000U);
} // namespace ADDRESSES

namespace TYPEDEFS {
typedef union {
    struct {
        __RW t_uint32 LATENCY : 0x01U;
        __RW t_uint32 PRFTEN : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 SLEEP_PD : 0x01U;
        __RW t_uint32 RUN_PD : 0x01U;
        __RW t_uint32 DISAB_BUF : 0x01U;
        __RW t_uint32 PRE_READ : 0x01U;
        t_uint32 /* RESERVED */ : 0x19U;
    } BIT;
    __RW t_uint32 WORD;
} t_ACR;

typedef union {
    struct {
        __RW t_uint32 PE_LOCK : 0x01U;
        __RW t_uint32 PRG_LOCK : 0x01U;
        __RW t_uint32 PROG : 0x01U;
        __RW t_uint32 DATA : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 FIX : 0x01U;
        __RW t_uint32 ERASE : 0x01U;
        __RW t_uint32 FPRG : 0x01U;
        t_uint32 /* RESERVED */ : 0x04U;
        __RW t_uint32 PARRALELBANK : 0x01U;
        __RW t_uint32 EOPIE : 0x01U;
        __RW t_uint32 ERRIE : 0x01U;
        __RW t_uint32 OBL_LAUNCH : 0x01U;
        t_uint32 /* RESERVED */ : 0x04U;
        __RW t_uint32 NZDISABLE : 0x01U;
        t_uint32 /* RESERVED */ : 0x08U;
    } BIT;
    __RW t_uint32 WORD;
} t_PECR;

typedef union {
    struct {
        __W t_uint32 PDKEY : 0x01U;
    } BIT;
    __W t_uint32 WORD;
} t_PDKEYR;

typedef union {
    struct {
        __W t_uint32 PKEY : 0x01U;
    } BIT;
    __W t_uint32 WORD;
} t_PKEYR;

typedef union {
    struct {
        __W t_uint32 PRGKEY : 0x01U;
    } BIT;
    __W t_uint32 WORD;
} t_PRGKEYR;

typedef union {
    struct {
        __W t_uint32 OPTKEY : 0x01U;
    } BIT;
    __W t_uint32 WORD;
} t_OPTKEYR;

typedef union {
    struct {
        __R t_uint32 BSY : 0x01U;
        __RW t_uint32 EOP : 0x01U;
        __R t_uint32 ENDHV : 0x01U;
        __R t_uint32 READY : 0x01U;
        t_uint32 /* RESERVED */ : 0x04U;
        __RW t_uint32 WRPERR : 0x01U;
        __RW t_uint32 PGAERR : 0x01U;
        __RW t_uint32 SIZERR : 0x01U;
        __RW t_uint32 OPTVERR : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 RDERR : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 NOTZEROERR : 0x01U;
        __RW t_uint32 FWWER : 0x01U;
        t_uint32 /* RESERVED */ : 0x0EU;
    } BIT;
    __RW t_uint32 WORD;
} t_SR;

typedef union {
    struct {
        __R t_uint32 RDPROT : 0x08U;
        __R t_uint32 WPRMOD : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __R t_uint32 BOR_LEV : 0x04U;
        __R t_uint32 WDG_SW : 0x01U;
        __R t_uint32 nRTS_STOP : 0x01U;
        __R t_uint32 nRST_STDBY : 0x01U;
        __R t_uint32 BFB2 : 0x01U;
        t_uint32 /* RESERVED */ : 0x07U;
        __R t_uint32 nBOOT1 : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_OPTR;

typedef union {
    struct {
        __R t_uint32 WRPROT1 : 0x01U;
    } BIT;
    __R t_uint32 WORD;
} t_WRPROT1R;

typedef union {
    struct {
        __R t_uint32 WRPROT2 : 0x10U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __R t_uint32 WORD;
} t_WRPROT2R;

typedef struct {
    t_ACR ACR;
    t_PECR PECR;
    t_PDKEYR PDKEYR;
    t_PKEYR PKEYR;
    t_PRGKEYR PRGKEYR;
    t_OPTKEYR OPTKEYR;
    t_SR SR;
    t_OPTR OPTR;
    t_WRPROT1R WRPROT1R;
    t_WRPROT2R WRPROT2R;
} t_FLASH;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace FLASH

namespace REGISTERS {
inline FLASH::TYPEDEFS::t_FLASH &FLASH = *((FLASH::TYPEDEFS::t_FLASH *)FLASH::ADDRESSES::BASE_ADDRESS);
} // namespace REGISTERS
#endif // __STM32L073XX_FLASH