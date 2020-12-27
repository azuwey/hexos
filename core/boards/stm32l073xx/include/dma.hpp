#ifndef __STM32L073XX_DMA
#define __STM32L073XX_DMA

#include "common_types.hpp"

namespace DMA {
namespace ADDRESSES {
const inline t_uint32 BASE_ADDRESS = ((t_uint32)0x40020000U);
} // namespace ADDRESSES

namespace TYPEDEFS {
typedef union {
    struct __attribute__((packed)) {
        __R t_uint32 GIF1 : 0x01U;
        __R t_uint32 TCIF1 : 0x01U;
        __R t_uint32 HTIF1 : 0x01U;
        __R t_uint32 TEIF1 : 0x01U;
        __R t_uint32 GIF2 : 0x01U;
        __R t_uint32 TCIF2 : 0x01U;
        __R t_uint32 HTIF2 : 0x01U;
        __R t_uint32 TEIF2 : 0x01U;
        __R t_uint32 GIF3 : 0x01U;
        __R t_uint32 TCIF3 : 0x01U;
        __R t_uint32 HTIF3 : 0x01U;
        __R t_uint32 TEIF3 : 0x01U;
        __R t_uint32 GIF4 : 0x01U;
        __R t_uint32 TCIF4 : 0x01U;
        __R t_uint32 HTIF4 : 0x01U;
        __R t_uint32 TEIF4 : 0x01U;
        __R t_uint32 GIF5 : 0x01U;
        __R t_uint32 TCIF5 : 0x01U;
        __R t_uint32 HTIF5 : 0x01U;
        __R t_uint32 TEIF5 : 0x01U;
        __R t_uint32 GIF6 : 0x01U;
        __R t_uint32 TCIF6 : 0x01U;
        __R t_uint32 HTIF6 : 0x01U;
        __R t_uint32 TEIF6 : 0x01U;
        __R t_uint32 GIF7 : 0x01U;
        __R t_uint32 TCIF7 : 0x01U;
        __R t_uint32 HTIF7 : 0x01U;
        __R t_uint32 TEIF7 : 0x01U;
        t_uint32 /* RESERVED */ : 0x04U;
    } BIT;
    __R t_uint32 WORD;
} t_ISR;

typedef union {
    struct __attribute__((packed)) {
        __W t_uint32 CGIF1 : 0x01U;
        __W t_uint32 CTCIF1 : 0x01U;
        __W t_uint32 CHTIF1 : 0x01U;
        __W t_uint32 CTEIF1 : 0x01U;
        __W t_uint32 CGIF2 : 0x01U;
        __W t_uint32 CTCIF2 : 0x01U;
        __W t_uint32 CHTIF2 : 0x01U;
        __W t_uint32 CTEIF2 : 0x01U;
        __W t_uint32 CGIF3 : 0x01U;
        __W t_uint32 CTCIF3 : 0x01U;
        __W t_uint32 CHTIF3 : 0x01U;
        __W t_uint32 CTEIF3 : 0x01U;
        __W t_uint32 CGIF4 : 0x01U;
        __W t_uint32 CTCIF4 : 0x01U;
        __W t_uint32 CHTIF4 : 0x01U;
        __W t_uint32 CTEIF4 : 0x01U;
        __W t_uint32 CGIF5 : 0x01U;
        __W t_uint32 CTCIF5 : 0x01U;
        __W t_uint32 CHTIF5 : 0x01U;
        __W t_uint32 CTEIF5 : 0x01U;
        __W t_uint32 CGIF6 : 0x01U;
        __W t_uint32 CTCIF6 : 0x01U;
        __W t_uint32 CHTIF6 : 0x01U;
        __W t_uint32 CTEIF6 : 0x01U;
        __W t_uint32 CGIF7 : 0x01U;
        __W t_uint32 CTCIF7 : 0x01U;
        __W t_uint32 CHTIF7 : 0x01U;
        __W t_uint32 CTEIF7 : 0x01U;
        t_uint32 /* RESERVED */ : 0x04U;
    } BIT;
    __W t_uint32 WORD;
} t_IFCR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EN : 0x01U;
        __RW t_uint32 TCIE : 0x01U;
        __RW t_uint32 HTIE : 0x01U;
        __RW t_uint32 TEIE : 0x01U;
        __RW t_uint32 DIR : 0x01U;
        __RW t_uint32 CIRC : 0x01U;
        __RW t_uint32 PINC : 0x01U;
        __RW t_uint32 MINC : 0x01U;
        __RW t_uint32 PSIZE : 0x02U;
        __RW t_uint32 MSIZE : 0x02U;
        __RW t_uint32 PL : 0x02U;
        __RW t_uint32 MEM2MEM : 0x01U;
        t_uint32 /* RESERVED */ : 0x11U;
    } BIT;
    __RW t_uint32 WORD;
} t_CCR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 NDT : 0x10U;
        t_uint32 /* RESERVED */ : 0x10U;
    } BIT;
    __RW t_uint32 WORD;
} t_CNDTR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 PA : 0x20U;
    } BIT;
    __RW t_uint32 WORD;
} t_CPAR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 MA : 0x20U;
    } BIT;
    __RW t_uint32 WORD;
} t_CMAR;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 C1S : 0x04U;
        __RW t_uint32 C2S : 0x04U;
        __RW t_uint32 C3S : 0x04U;
        __RW t_uint32 C4S : 0x04U;
        __RW t_uint32 C5S : 0x04U;
        __RW t_uint32 C6S : 0x04U;
        __RW t_uint32 C7S : 0x04U;
        t_uint32 /* RESERVED */ : 0x04U;
    } BIT;
    __RW t_uint32 WORD;
} t_CSELR;

typedef struct __attribute__((packed)) {
    t_ISR ISR;
    t_IFCR IFCR;
    t_CCR CCR1;
    t_CNDTR CNDTR1;
    t_CPAR CPAR1;
    t_CMAR CMAR1;
    t_uint32 RESERVED0[1];
    t_CCR CCR2;
    t_CNDTR CNDTR2;
    t_CPAR CPAR2;
    t_CMAR CMAR2;
    t_uint32 RESERVED1[1];
    t_CCR CCR3;
    t_CNDTR CNDTR3;
    t_CPAR CPAR3;
    t_CMAR CMAR3;
    t_uint32 RESERVED2[1];
    t_CCR CCR4;
    t_CNDTR CNDTR4;
    t_CPAR CPAR4;
    t_CMAR CMAR4;
    t_uint32 RESERVED3[1];
    t_CCR CCR5;
    t_CNDTR CNDTR5;
    t_CPAR CPAR5;
    t_CMAR CMAR5;
    t_uint32 RESERVED4[1];
    t_CCR CCR6;
    t_CNDTR CNDTR6;
    t_CPAR CPAR6;
    t_CMAR CMAR6;
    t_uint32 RESERVED5[1];
    t_CCR CCR7;
    t_CNDTR CNDTR7;
    t_CPAR CPAR7;
    t_CMAR CMAR7;
    t_uint32 RESERVED6[6];
    t_CSELR CSELR;
} t_DMA;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace DMA

namespace REGISTERS {
inline DMA::TYPEDEFS::t_DMA &r_DMA = *((DMA::TYPEDEFS::t_DMA *)DMA::ADDRESSES::BASE_ADDRESS);
} // namespace REGISTERS
#endif // __STM32L073XX_DMA