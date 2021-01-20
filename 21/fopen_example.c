#include <stdio.h>

int main() {
	FILE *fp = fopen("inventory.c", "r");
	int bytes = 0;
	char c = 0;

	if (fp == NULL) {
		printf("File does not exist.\n");
		return 1;
	}

	while((c = getc(fp)) != -1) {
		if (feof(fp)) {
			break;
		}
		printf("%c", c);
		bytes++;
	}

	printf("Read %d bytes\n", bytes);

	fclose(fp);
	
	return 0;
}