# Embedded C Library for PS/2 Interface

## Overview

Library for communication between an embedded MCU and a computer mouse controller over the PS/2 interface.

> Note: There is no plan to support keyboards.

Accuracy target: the application chooses the poll rate by how often it reads. Each read returns the movement since the previous read. The mouse counters cover about -256 to 255 counts. Movement beyond that between polls is clipped, and the packet's overflow flags are set. The library reports X and Y from that packet. It does not reconstruct movement the mouse has already lost.

## Library Scope

**Version 1.** Talk to a standard mouse in remote mode. Init sends reset (`0xFF`), waits for `0xFA`, the self-test result `0xAA`, and the device ID `0x00`, then sends Set Remote Mode (`0xF0`) and waits for `0xFA`. Read sends Read Data (`0xEB`), waits for `0xFA` and the standard 3-byte packet, and exposes X and Y. Stream mode, resolution, sample rate, and scroll wheel are out of scope.

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