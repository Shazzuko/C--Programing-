#include <stdio.h>

int main() {
	short a = 32767;

	printf("a = %hd\n", a);
	printf("a + 1 = %hd\n", a + 1);
	
	return 0;
}

// 0111 1111 1111 1111
// 1000 0000 0000 0000

// // 2s Complement
// 0010

// // Step 1: Invert the bits
// 1110

// // Step 2: Add 1
// 1110

// 0111 1111 1111 1111
// 1000 0000 0000 0001