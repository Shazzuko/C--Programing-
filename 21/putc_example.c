#include <stdio.h>

int main() {
	FILE *fp = fopen("myfile", "w");

	putc('!', fp);

	fclose(fp);

	return 0;
}