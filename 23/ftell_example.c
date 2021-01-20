#include <stdio.h>

int main() {
	FILE *fp = fopen("temp.dat", "w+");

	if (fp == NULL) {
		return 1;
	}

	fputs("test", fp);

	// Get current position
	long pos = ftell(fp);

	printf("%ld\n", pos);

	fclose(fp);

	return 0;
}