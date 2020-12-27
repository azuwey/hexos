#ifndef __STM32L073XX_COMP
#define __STM32L073XX_COMP

#include "common_types.hpp"

namespace COMP {
namespace TYPEDEFS {
typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 INNSEL : 0x02U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 WM : 0x01U;
        t_uint32 /* RESERVED */ : 0x03U;
        __RW t_uint32 LPTIMIN1 : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 POLARITY : 0x01U;
        t_uint32 /* RESERVED */ : 0x0EU;
        __R t_uint32 VALUE : 0x01U;
        __RW t_uint32 LOCK : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_CS1R;

typedef union {
    struct __attribute__((packed)) {
        __RW t_uint32 EN : 0x01U;
        t_uint32 /* RESERVED */ : 0x02U;
        __RW t_uint32 SPEED : 0x01U;
        __RW t_uint32 INNSEL : 0x03U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 INPSEL : 0x03U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 LPTIMIN2 : 0x01U;
        __RW t_uint32 LPTIMIN1 : 0x01U;
        t_uint32 /* RESERVED */ : 0x01U;
        __RW t_uint32 POLARITY : 0x01U;
        t_uint32 /* RESERVED */ : 0x0EU;
        __R t_uint32 VALUE : 0x01U;
        __RW t_uint32 LOCK : 0x01U;
    } BIT;
    __RW t_uint32 WORD;
} t_CS2R;
} // namespace TYPEDEFS

namespace HAL {} // namespace HAL
} // namespace COMP

#endif // __STM32L073XX_COMP