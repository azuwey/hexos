#include "rcc.hpp"

unsigned int RCC::HAL::_externalOscillatorFrequency = 0;

void RCC::HAL::setExternalOscillatorFrequency(unsigned int externalOscillatorFrequency) {
    _externalOscillatorFrequency = externalOscillatorFrequency;
};

unsigned int RCC::HAL::getMainCPUClockFrequency(void) { return _externalOscillatorFrequency; }