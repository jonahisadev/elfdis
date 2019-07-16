#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

#define VA_ARGS(...) , ##__VA_ARGS__

#define panic(fmt, ...) \
{ \
	fprintf(stderr, fmt VA_ARGS(__VA_ARGS__)); \
	exit(1); \
}

#endif // COMMON_H