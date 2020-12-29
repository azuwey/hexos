BOARD := stm32l073xx
MODEL := rz
CPU := cortex-m0plus
OPTIMIZATION := -Os
ERRORS := -Wall -Wextra
DEBUG := 1 # 0 - OFF, 1 - ON
DEBUG_LEVEL := -g3
DEAD_CODE_ELLIMINATION := -ffunction-sections -fdata-sections

BUILD_DIR := build
TARGET := firmware