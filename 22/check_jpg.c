#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_jpg(FILE *fp) {
	unsigned char signature[2] = { 0 };

	fread(signature, sizeof(unsigned char), 2, fp);

	if (signature[0] == 0xFF && signature[1] == 0xD8) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	char fname[128] = { 0 };
	FILE *fp = NULL;

	printf("Enter a filename: ");
	fgets(fname, 128, stdin);
	fname[strlen(fname) - 1] = 0;

	fp = fopen(fname, "r");

	if (fp == NULL) {
		return 1;
	}

	if (is_jpg(fp)) {
		printf("File is a JPEG\n");
	} else {
		printf("File is not a JPEG\n");
	}

	fclose(fp);

	return 0;
}