#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp = fopen("write_chars.txt", "w");
	char str[] = "This is a string.\n";

	if (fp == NULL) {
		printf("Cannot open file.\n");
		return 1;
	}

	for (int i = 0; i < strlen(str); i++) {
		putc(str[i], fp);
	}

	fclose(fp);
	
	return 0;
}