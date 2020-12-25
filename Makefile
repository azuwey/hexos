# User settings
BOARD := stm32l073xx
MODEL := rz
CPU := cortex-m0plus
TOOLCHAIN_PATH := /usr/bin
BUILD_DIR := build
TARGET := firmware
OPTIMIZATION := -Os
ERRORS := -Wall -Wextra
DEBUG := 1 # 0 - OFF, 1 - ON
DEBUG_LEVEL := -g3
DEAD_CODE_ELLIMINATION := -ffunction-sections -fdata-sections
STD := gnu++17

CPP_SOURCES := \
firmware/source/main.cpp

CPP_INCLUDES := \
-I firmware/include \
-I core/common/include \
-I core/boards/$(BOARD)/include

ASM_SOURCES := \
core/boards/$(BOARD)/startup.s

# Linker settings
LINKER_FILE := core/boards/$(BOARD)/linker/$(MODEL).ld

# Toolchain definitions
CC := $(TOOLCHAIN_PATH)/arm-none-eabi-g++
LD := $(TOOLCHAIN_PATH)/arm-none-eabi-ld
CP := $(TOOLCHAIN_PATH)/arm-none-eabi-objcopy
AS := $(TOOLCHAIN_PATH)/arm-none-eabi-as
DP := $(TOOLCHAIN_PATH)/arm-none-eabi-objdump

# Compiler flags
CFLAGS := ${CPP_INCLUDES} -MD -mcpu=$(CPU) -mthumb -std=${STD}
CFLAGS += ${ERRORS} ${OPTIMIZATION} ${DEAD_CODE_ELLIMINATION}

# Linker flags
LFLAGS := -T $(LINKER_FILE) -Map=${BUILD_DIR}/${TARGET}.map
LFLAGS += --print-memory-usage -N

# Assembler flags
CPFLAGS := -O binary
ASFLAGS :=

ifeq ($(DEBUG), 1)
CFLAGS += ${DEBUG_LEVEL}
endif

OBJECTS := $(addprefix $(BUILD_DIR)/,$(notdir $(CPP_SOURCES:.cpp=.o)))
vpath %.cpp $(sort $(dir $(CPP_SOURCES)))
OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.s=.o)))
vpath %.s $(sort $(dir $(ASM_SOURCES)))

all: ${BUILD_DIR}/${TARGET}.bin

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

${BUILD_DIR}/${TARGET}.elf: $(OBJECTS)
	$(LD) $(LFLAGS) -o $@ $^

${BUILD_DIR}/${TARGET}.bin: ${BUILD_DIR}/${TARGET}.elf
	$(CP) $(CPFLAGS) $^ $@

dump:
	$(DP) -d -S ${BUILD_DIR}/${TARGET}.elf > ${BUILD_DIR}/${TARGET}.dump

clean:
	rm -fr $(BUILD_DIR)/*.o $(BUILD_DIR)/*.elf $(BUILD_DIR)/*.bin $(BUILD_DIR)/*.map

-include $(OBJECTS:.o=.d)