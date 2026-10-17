/* SPDX-License-Identifier: MIT */
/* Copyright (c) 2026 Jakub Kokosiński */

#ifndef PS2_TYPES_H
#define PS2_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

# include <stdint.h>

#define PS2_OK       0
#define PS2_ERROR   -1

typedef struct {
    // TODO
} ps2_object_t;

typedef struct {
    int16_t x;
    int16_t y;
} ps2_displacement_t;

#ifdef __cplusplus
}
#endif

#endif /* PS2_TYPES_H */
