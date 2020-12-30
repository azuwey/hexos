BOARD := stm32l073xx
MODEL := rz
CPU := cortex-m0plus
ARCH := armv6-m
OPTIMIZATION := -Os
ERRORS := -Wall -Wextra
DEBUG := 1 # 0 - OFF, 1 - ON
DEBUG_LEVEL := -g3
DEAD_CODE_ELLIMINATION := -ffunction-sections -fdata-sections
EXTERNAL_OSCILLATOR_FREQUENCY := 0x7A1200U # 8Mhz in hex as an unsigned integer

BUILD_DIR := build
TARGET := firmware