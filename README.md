# Embedded C Library for PS/2 Interface

## Overview

Library for communication between an embedded MCU and a computer mouse controller over the PS/2 interface.

> Note: There is no plan to support keyboards.

Accuracy target: similar to a normal PC mouse connection. A missed packet is a small skip, the same as on a PC. The library does not try to guarantee lossless delivery.

## Library Scope

**Version 1.** Initialize the mouse and read its default stream. Init is reset (`0xFF`), wait for the self-test reply (`0xAA 0x00`), then enable data reporting (`0xF4`) and wait for ACK (`0xFA`). After that, decode the standard 3-byte packets and expose X and Y. Resolution, sample rate, scroll wheel, and remote mode are out of scope.

**STM32 port.** The STM32L476 port uses the STM32 HAL.

## Project structure

```
ps2_lib/
├── docs
├── include/ps2/
│   ├── ps2_mouse.h
│   ├── ps2_bus.h
│   └── ps2_types.h
├── src/
│   ├── ps2_mouse.c
│   └── ps2_bus.c
├── ports/
│   └── stm32l476/
│       ├── stm32l476.h
│       └── stm32l476.c
├── tests
├── .gitignore
└── README.md
```