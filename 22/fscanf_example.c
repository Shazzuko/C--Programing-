#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp = fopen("test.dat", "r");
	int a;
	double b;
	char str[4];

	if (fp == NULL) {
		printf("Cannot open file\n");
		return 1;
	}

	fscanf(fp, "%d %lf %s", &a, &b, str);

	printf("%d %lf %s\n", a, b, str);

	fclose(fp);
	
	return 0;
}