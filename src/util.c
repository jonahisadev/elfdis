#include "../include/util.h"

uint8_t* read_binary(const char* path, int* len) {
	FILE* file = fopen(path, "rb");
	if (!file) {
		panic("Could not open file '%s'\n", path);
	}

	fseek(file, 0, SEEK_END);
	*len = ftell(file);
	fseek(file, 0, SEEK_SET);

	uint8_t* buf = malloc(sizeof(uint8_t) * (*len));
	fread(buf, 1, *len, file);
	fclose(file);

	return buf;
}

void dump_binary(const uint8_t* bin, int len) {
	printf("0x00000000: ");
	int index = 0;
	while (TRUE) {
		printf("%02X ", bin[index++]);
		if (index % 16 == 0) {
			printf("\n0x%08X: ", index);
		}

		if (index == len) break;
	}
	printf("\n");
}