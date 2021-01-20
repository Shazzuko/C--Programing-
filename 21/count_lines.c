#include <stdio.h>

#define BUFFER_SIZE 1024

char *fgets_(char *s, int size, FILE *fp) {
	int c = 0;
	int num_chars = 0;
	while (c != '\n') {
		c = getc(fp);
		if (feof(fp)) {
			return NULL;
		}
		s[num_chars++] = c;
	}

	return s;
}

int main() {
	int num_lines = 0;
	char buffer[BUFFER_SIZE] = { 0 };
	FILE *fp = fopen("inventory.c", "r");

	while (fgets_(buffer, BUFFER_SIZE, fp)) {
		num_lines++;
	}

	printf("%d lines in file \"%s\"\n", num_lines, "inventory.c");

	return 0;
}