#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp = fopen("prices.csv", "r");
	unsigned char buffer[4] = { 0 };

	if (fp == NULL) {
		return 1;
	}

	size_t bytes = fread(buffer, sizeof(unsigned char), 4, fp);
	printf("bytes = %ld\n", bytes);
	for (int i = 0; i < 4; i++) {
		printf("0x%X ", buffer[i]);
	}

	printf("\n");

	fclose(fp);
	
	return 0;
}