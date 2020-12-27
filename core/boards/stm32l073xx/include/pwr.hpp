#ifndef __STM32L073XX_PWR
#define __STM32L073XX_PWR

#include "common_types.hpp"

namespace PWR {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS = ((t_uint32)0x40007000U);
} // namespace ADDRESSES

namespace TYPEDEFS {
typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 LPSDSR : 0x01U;
        __RW t_uint32 PDDS : 0x01U;
        __RW t_uint32 CWUF : 0x01U;
        __RW t_uint32 CSBF : 0x01U;
        __RW t_uint32 PVDE : 0x01U;
        __RW t_uint32 PLS : 0x03U;
        __RW t_uint32 DBP : 0x01U;
        __RW t_uint32 ULP : 0x01U;
        __RW t_uint32 FWU : 0x01U;
        __RW t_uint32 VOS : 0x02U;
        __RW t_uint32 DS_EE_KOFF : 0x01U;
        __RW t_uint32 LPRUN : 0x01U;
        t_uint32 /* RESERVED */ : 0x11U;
    } BIT;
    __RW t_uint32 WORD;
} t_CR;

typedef union {
    struct __attribute__((packed)) {
        __R t_uint32 WUF : 0x01U;
        __R t_uint32 SBF : 0x01U;
        __R t_uint32 PVDO : 0x01U;
        __R t_uint32 VREFINTRDYF : 0x01U;
        __R t_uint32 VOSF : 0x01U;
        __R t_uint32 REGLPF : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 EWUP1 : 0x01U;
        __RW t_uint32 EWUP2 : 0x01U;
        __RW t_uint32 EWUP3 : 0x01U;
        t_uint32 /* RESERVED */ : 0x15U;
    } BIT;
    __RW t_uint32 WORD;
} t_CSR;

typedef struct __attribute__((packed)) {
    t_CR CR;
    t_CSR CSR;
} t_PWR;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace PWR

namespace REGISTERS {
inline PWR::TYPEDEFS::t_PWR &r_PWR = *((PWR::TYPEDEFS::t_PWR *)PWR::ADDRESSES::BASE_ADDRESS);
} // namespace REGISTERS
#endif // __STM32L073XX_PWR