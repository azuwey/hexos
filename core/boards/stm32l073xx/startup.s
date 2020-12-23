.cpu cortex-m0plus
.fpu softvfp
.thumb

.word _sidata
.word _sdata
.word _edata
.word _sbss
.word _ebss
.word _reset

.thumb_func
_reset:
    b main
