#include <stdio.h>

int main() {
	short a = 32767;

	printf("a = %hd\n", a);
	printf("a + 1 (unsigned) = %hu\n", a + 1);
	printf("a + 1 (signed) = %hd\n", a + 1);
	
	return 0;
}

// 0111 1111 1111 1111
// 1000 0000 0000 0000