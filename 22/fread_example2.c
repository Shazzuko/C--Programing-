#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp = fopen("prices.csv", "r");
	int a = 0;

	if (fp == NULL) {
		return 1;
	}

	size_t bytes = fread(&a, sizeof(int), 1, fp);
	printf("bytes = %ld\n", bytes);
	printf("%d\n", a);

	printf("\n");

	fclose(fp);
	
	return 0;
}