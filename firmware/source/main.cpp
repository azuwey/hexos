#include "main.hpp"

#define SRAM_BASE (0x20000000UL)
#define SRAM_SIZE (20 * 1024) // 20kb RAM
#define SRAM_END (SRAM_BASE + SRAM_SIZE)

int main(void) {
    REGISTERS::r_RCC.IOPENR.BIT.IOPAEN = 0x01U;
    // REGISTERS::FLASH.ACR.BIT.PRE_READ = 0x01U;
    while (1) {
        // REGISTERS::GPIOA.MODER.WORD = 0xEBFFF4FFU;
    }
}

/* vector table */
t_uint32 *vector_table[] __attribute__((section(".vector_table"))) = {
    (t_uint32 *)SRAM_END,
    (t_uint32 *)main,
};