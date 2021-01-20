#include <stdio.h>

extern int pow_(int a, int b);

int main() {
	printf("2^7 = %d\n", pow_(2, 7));

	return 0;
}