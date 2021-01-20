#include <stdio.h>

int main() {
	FILE *src_fp = fopen("sales.c", "r");
	FILE *dest_fp = fopen("sales_copy.c", "w");
	char temp = 0;

	if (src_fp == NULL || dest_fp == NULL) {
		printf("Cannot open files.\n");
		return 1;
	}

	while ((temp = getc(src_fp)) != -1) {
		if (feof(src_fp)) {
			break;
		}

		putc(temp, dest_fp);
	}

	fclose(src_fp);
	fclose(dest_fp);

	return 0;
}