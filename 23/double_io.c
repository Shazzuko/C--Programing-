#include <stdio.h>
#include <stdlib.h>

int main() {
	double arr[4] = { 0.5, 1.5, 10.3, 9.6 };
	FILE *fp = fopen("temp.dat", "w+");

	if (fp == NULL) {
		return 1;
	}

	fwrite(arr, sizeof(double), 4, fp);

	long pos = ftell(fp);
	printf("Wrote %ld bytes of data\n", pos);

	fseek(fp, -16, SEEK_END);
	double arr2[2] = { 0 };

	fread(arr2, sizeof(double), 2, fp);

	for (int i = 0; i < 2; i++) {
		printf("%lf\n", arr2[i]);
	}

	fclose(fp);

	return 0;
}