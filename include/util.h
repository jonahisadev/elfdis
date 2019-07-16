#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "common.h"

uint8_t* read_binary(const char* path, int* len);
void dump_binary(const uint8_t* bin, int len);

#endif // UTIL_H