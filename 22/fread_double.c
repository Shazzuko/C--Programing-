#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	double arr[5] = { 0 };
	FILE *fp = fopen("new.dat", "r");

	if (fp == NULL) {
		return 1;
	}

	fread(arr, sizeof(double), 5, fp);

	for (int i = 0; i < 5; i++) {
		printf("%lf\n", arr[i]);
	}

	fclose(fp);

	return 0;
}