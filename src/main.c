#include <stdio.h>
#include <stdlib.h>

#include "../include/util.h"

int main(int argc, char** argv) {
	int len = 0;
	uint8_t* bin = read_binary(argv[1], &len);

	dump_binary(bin, len);

	free(bin);
	return 0;
}