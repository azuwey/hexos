TOOLCHAIN_PATH := /usr/bin
STD := gnu++17

# Linker settings
LINKER_FILE := ${CORE_BOARD_PATH}/linker/$(MODEL).ld

# Toolchain definitions
CC := $(TOOLCHAIN_PATH)/arm-none-eabi-g++
LD := $(TOOLCHAIN_PATH)/arm-none-eabi-ld
CP := $(TOOLCHAIN_PATH)/arm-none-eabi-objcopy
AS := $(TOOLCHAIN_PATH)/arm-none-eabi-as
DP := $(TOOLCHAIN_PATH)/arm-none-eabi-objdump

# Compiler flags
CFLAGS := ${CPP_INCLUDES} -MD -mcpu=$(CPU) -mthumb -std=${STD}
CFLAGS += ${ERRORS} ${OPTIMIZATION} ${DEAD_CODE_ELLIMINATION} -fno-exceptions

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

.PHONY: all
all: ${BUILD_DIR} ${BUILD_DIR}/${TARGET}.bin

.PHONY: dump
dump:
	$(DP) -d -S ${BUILD_DIR}/${TARGET}.elf > ${BUILD_DIR}/${TARGET}.dump

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)/*.o
	rm -rf $(BUILD_DIR)/*.elf
	rm -rf $(BUILD_DIR)/*.bin
	rm -rf $(BUILD_DIR)/*.map
	rm -rf $(BUILD_DIR)/*.dump
	rm -rf $(BUILD_DIR)/*.d

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

${BUILD_DIR}/${TARGET}.elf: $(OBJECTS)
	$(LD) $(LFLAGS) -o $@ $^

${BUILD_DIR}/${TARGET}.bin: ${BUILD_DIR}/${TARGET}.elf
	$(CP) $(CPFLAGS) $^ $@

${BUILD_DIR}:
	mkdir ${BUILD_DIR}

-include $(OBJECTS:.o=.d)