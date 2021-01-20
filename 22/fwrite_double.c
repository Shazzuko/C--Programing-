#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	double arr[5] = { 0.1, 0.2, 10.1, 10.2, 100.12345 };
	FILE *fp = fopen("new.dat", "w");

	if (fp == NULL) {
		return 1;
	}

	size_t result = fwrite(arr, sizeof(double), 5, fp);
	printf("%ld\n", result);

	fclose(fp);

	return 0;
}