#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[] = "test string\n";
	FILE *fp = fopen("new.dat", "w");

	if (fp == NULL) {
		return 1;
	}

	fwrite(str, sizeof(char), strlen(str), fp);

	fclose(fp);

	return 0;
}