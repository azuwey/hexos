#include "rcc_hal.hpp"

unsigned int RCC::HAL::ui_AHBPrescaler(void) {
    switch (REGISTERS::r_RCC.CFGR.BIT.HPRE) {
    case 0x00U ... 0x07U:
        return 0x001U;
    case 0x08U:
        return 0x002U;
    case 0x09U:
        return 0x004U;
    case 0x0AU:
        return 0x008U;
    case 0x0BU:
        return 0x010U;
    case 0x0CU:
        return 0x040U;
    case 0x0DU:
        return 0x080U;
    case 0x0EU:
        return 0x100U;
    case 0x0FU:
        return 0x200U;
    }
}

unsigned int RCC::HAL::ui_PLLMultiplicationFactor(void) {
    switch (REGISTERS::r_RCC.CFGR.BIT.PLLMUL) {
    case 0x00U:
        return 0x03U;
    case 0x01U:
        return 0x04U;
    case 0x02U:
        return 0x06U;
    case 0x03U:
        return 0x08U;
    case 0x04U:
        return 0x0CU;
    case 0x05U:
        return 0x10U;
    case 0x06U:
        return 0x18U;
    case 0x07U:
        return 0x20U;
    case 0x08U:
        return 0x30U;
    default: /* Not allowed values */
        return 0x00U;
    }
}

unsigned int RCC::HAL::ui_PLLPrescaler(void) {
    switch (REGISTERS::r_RCC.CFGR.BIT.PLLDIV) {
    case 0x01U:
        return 0x02U;
    case 0x02U:
        return 0x03U;
    case 0x03U:
        return 0x04U;
    default: /* Not allowed values */
        return 0x00U;
    }
}

unsigned int RCC::HAL::ui_HSIPrescaler(void) {
    switch (REGISTERS::r_RCC.CR.BIT.HSI16DIVF) {
    case 0x00U:
        return 0x01U;
    case 0x01U:
        return 0x04U;
    }
}

unsigned int RCC::HAL::ui_MSIOscillatorFrequency(void) {
    switch (REGISTERS::r_RCC.ICSCR.BIT.MSIRANGE) {
    case 0x00U: /* ~65536 Hz */
        return 0x010000U;
    case 0x01U: /* ~131072 Hz */
        return 0x020000U;
    case 0x02U: /* ~262144 Hz */
        return 0x040000U;
    case 0x03U: /* ~524288 Hz */
        return 0x080000U;
    case 0x04U: /* ~1048576 Hz */
        return 0x100000U;
    case 0x05U: /* ~2097152 Hz */
        return 0x200000U;
    case 0x06U: /* ~4194304 Hz */
        return 0x400000U;
    default: /* Not allowed values */
        return 0x00U;
    }
}

unsigned int RCC::HAL::ui_CalculatePWRClockFrequency(void) {
    unsigned int muxedClockFrequency = 0x00U;
    switch (REGISTERS::r_RCC.CFGR.BIT.SWS) {
    case 0x00U: /* MSI */
        muxedClockFrequency = ui_MSIOscillatorFrequency();
        break;
    case 0x01U: /* HSI16 */
        muxedClockFrequency = CONSTS::internalOscillatorFrequency;
        muxedClockFrequency /= ui_HSIPrescaler();
        break;
    case 0x02U: /* HSE */
        muxedClockFrequency = CONSTS::externalOscillatorFrequency;
        break;
    case 0x03U: /* PLL */
        if (REGISTERS::r_RCC.CFGR.BIT.PLLSRC == 0x00U) {
            /* PLL Source HSI16 */
            muxedClockFrequency = CONSTS::internalOscillatorFrequency;
            muxedClockFrequency /= ui_HSIPrescaler();
        } else {
            /* PLL Source HSE */
            muxedClockFrequency = CONSTS::externalOscillatorFrequency;
        }
        muxedClockFrequency /= ui_PLLPrescaler();
        muxedClockFrequency *= ui_PLLMultiplicationFactor();
        break;
    }
    return muxedClockFrequency;
}

unsigned int RCC::HAL::ui_CalculateMainCPUClockFrequency(void) {
    return ui_CalculatePWRClockFrequency() / ui_AHBPrescaler();
}