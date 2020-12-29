include $(CURDIR)/../../Makefile

CORE_PATH = ../../core
CORE_BOARD_PATH = ${CORE_PATH}/boards/$(BOARD)

CPP_SOURCES := \
source/main.cpp \
${CORE_BOARD_PATH}/source/rcc.cpp

CPP_INCLUDES := \
-I $(CURDIR)/include \
-I ${CORE_PATH}/common/include \
-I ${CORE_BOARD_PATH}/include

ASM_SOURCES := \
${CORE_BOARD_PATH}/startup.s

include ${CORE_PATH}/Makefile