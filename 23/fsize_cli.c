#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp = NULL;

	if (argc != 2) {
		printf("USAGE: ./a.out FILE_NAME\n");
		return 1;
	}

	fp = fopen(argv[1], "r");

	if (fp == NULL) {
		return 1;
	}

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	printf("File size = %ld bytes\n", size);
	
	return 0;
}