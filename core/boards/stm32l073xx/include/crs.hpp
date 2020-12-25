#ifndef __STM32L073XX_CRS
#define __STM32L073XX_CRS

#include "common_types.hpp"

namespace CRS {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS = ((t_uint32)0x40023000U);
} // namespace ADDRESSES

namespace TYPEDEFS {

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 SYNCOKIE : 0x01U;
        __RW t_uint32 SYNCWARNIE : 0x01U;
        __RW t_uint32 ERRIE : 0x01U;
        __RW t_uint32 ESYNCIE : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 CEN : 0x01U;
        __RW t_uint32 AUTOTRIMEN : 0x01U;
        __RW t_uint32 SWSYNC : 0x01U;
        __RW t_uint32 SWSYNC : 0x06U;
        t_uint32 /* RESERVED */ : 0x12U;
    } b;
    __RW t_uint32 w;
} t_CR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 RELOAD : 0x10U;
        __RW t_uint32 FELIM : 0x08U;
        __RW t_uint32 SYNCDIV : 0x03U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 SYNCSRC : 0x02U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 SYNCPOL : 0x01U;
    } b;
    __RW t_uint32 w;
} t_CFGR;

typedef union {
    struct __attribute__((packed)) {
        __R t_uint32 SYNCOKF : 0x01U;
        __R t_uint32 SYNCWARNF : 0x01U;
        __R t_uint32 ERRF : 0x01U;
        __R t_uint32 ESYNCF : 0x01U;
        t_uint32 /* RESERVED */ : 0x04U;
        __R t_uint32 SYNCERR : 0x01U;
        __R t_uint32 SYNCMISS : 0x01U;
        __R t_uint32 TRIMOVF : 0x01U;
        t_uint32 /* RESERVED */ : 0x04U;
        __R t_uint32 FEDIR : 0x01U;
        __R t_uint32 FECAP : 0x10U;
    } b;
    __R t_uint32 w;
} t_ISR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 SYNCOKC : 0x01U;
        __RW t_uint32 SYNCWARNC : 0x01U;
        __RW t_uint32 ERRC : 0x01U;
        __RW t_uint32 ESYNCC : 0x01U;
        t_uint32 /* RESERVED */ : 0x1CU;
    } b;
    __RW t_uint32 w;
} t_ICR;

typedef struct __attribute__((packed)) {
    t_CR CR;
    t_CFGR CFGR;
    t_CFGR CFGR;
    t_ICR ICR;
} t_CRS;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace CRS

namespace REGISTERS {
inline CRS::TYPEDEFS::t_CRS &r_CRS = *((CRS::TYPEDEFS::t_CRS *)CRS::ADDRESSES::BASE_ADDRESS);
} // namespace REGISTERS
#endif // __STM32L073XX_CRS