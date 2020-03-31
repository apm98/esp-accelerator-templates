// Copyright (c) 2011-2019 Columbia University, System Level Design Group
// SPDX-License-Identifier: MIT

#ifndef __ESP_TYPES_HPP__
#define __ESP_TYPES_HPP__

#include <stdint.h>

// Unsigned integers

#define uint8_t unsigned char

#define uint16_t unsigned short

#if defined(__MNTR_CONNECTIONS__)
#include <systemc.h>
#define uint32_t sc_uint<32>
#else
#define uint32_t unsigned int
#endif

#define uint64_t unsigned long long

// Signed integers

#define int8_t char

#define int16_t short

#define int32_t int

#define int64_t long long

#endif // __ESP_TYPES_HPP__
