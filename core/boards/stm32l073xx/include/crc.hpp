#ifndef __STM32L073XX_CRC
#define __STM32L073XX_CRC

#include "common_types.hpp"

namespace CRC {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS = ((t_uint32)0x40023000U);
} // namespace ADDRESSES

namespace TYPEDEFS {
typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 D : 0x20U;
    } BIT;
    __RW t_uint32 WORD;
} t_DR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 ID : 0x08U;
        t_uint32 /* RESERVED */ : 0x18U;
    } BIT;
    __RW t_uint32 WORD;
} t_IDR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 RESET : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 POLYSIZE : 0x02U;
        __RW t_uint32 REINV : 0x02U;
        __RW t_uint32 REV_OUT : 0x01U;
        t_uint32 /* RESERVED */ : 0x18U;
    } BIT;
    __RW t_uint32 WORD;
} t_CR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 INIT : 0x20U;
    } BIT;
    __RW t_uint32 WORD;
} t_INITR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 POL : 0x20U;
    } BIT;
    __RW t_uint32 WORD;
} t_POLR;

typedef struct __attribute__((packed)) {
    t_DR DR;
    t_IDR IDR;
    t_CR CR;
    t_INITR INITR;
    t_POLR POLR;
} t_CRC;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace CRC

namespace REGISTERS {
inline CRC::TYPEDEFS::t_CRC &r_CRC = *((CRC::TYPEDEFS::t_CRC *)CRC::ADDRESSES::BASE_ADDRESS);
} // namespace REGISTERS
#endif // __STM32L073XX_CRC