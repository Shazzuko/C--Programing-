#include "pow.h"

// int main() {
// 	printf("2^3 = %d\n", pow_(2, 3));
	
// 	return 0;
// }

int pow_(int base, int exp) {
	int result = base;

	for (int i = 1; i < exp; i++) {
		result *= base;
	}

	return result;
}