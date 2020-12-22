# User settings
BOARD := stm32l073xx
MODEL := rz
CPU := cortex-m0plus
TOOLCHAIN_PATH := ~/.local/opt/gcc-arm-none-eabi-9-2020-q2-update
BUILD_DIR := build
TARGET := firmware
OPTIMIZATION := -Os
ERRORS := -Wall -Wextra
DEBUG := 1 # 0 - OFF, 1 - ON
DEBUG_LEVEL := -g3
DEAD_CODE_ELLIMINATION := -ffunction-sections -fdata-sections
STD := gnu++17

CPP_SOURCES := \
source/main.cpp

CPP_INCLUDES := \
-I include \
-I core/common/include \
-I core/boards/$(BOARD)/include

ASM_SOURCES := \
core/boards/$(BOARD)/startup.s

# Linker settings
LINKER_FILE := core/boards/$(BOARD)/linker/$(MODEL).ld

# Toolchain definitions
CC := $(TOOLCHAIN_PATH)/bin/arm-none-eabi-g++
LD := $(TOOLCHAIN_PATH)/bin/arm-none-eabi-ld
CP := $(TOOLCHAIN_PATH)/bin/arm-none-eabi-objcopy
AS := $(TOOLCHAIN_PATH)/bin/arm-none-eabi-as

# Compiler flags
CFLAGS := ${CPP_INCLUDES} -mcpu=$(CPU) -mthumb -std=${STD} -c
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
	$(CC) $(CFLAGS) -o $@ $<

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

${BUILD_DIR}/${TARGET}.elf: $(OBJECTS)
	$(LD) $(LFLAGS) -o $@ $^

${BUILD_DIR}/${TARGET}.bin: ${BUILD_DIR}/${TARGET}.elf
	$(CP) $(CPFLAGS) $^ $@

clean:
	rm -fr $(BUILD_DIR)/*.o $(BUILD_DIR)/*.elf $(BUILD_DIR)/*.bin $(BUILD_DIR)/*.map