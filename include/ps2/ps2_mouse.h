/* SPDX-License-Identifier: MIT */
/* Copyright (c) 2026 Jakub Kokosiński */

#ifndef PS2_MOUSE_H
#define PS2_MOUSE_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include "ps2_types.h"

int8_t ps2_mouse_init(ps2_object_t *ps2_object);
int8_t ps2_mouse_set_remote_mode(ps2_object_t *ps2_object);
int8_t ps2_mouse_read_displacement(ps2_object_t *ps2_object, ps2_displacement_t *displacement);

#ifdef __cplusplus
}
#endif

#endif /* PS2_MOUSE_H */
