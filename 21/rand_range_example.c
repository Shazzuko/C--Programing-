#include <stdio.h>
#include <stdlib.h>

// range [32, 127]

int generate_int(int low, int high) {
	int x = rand(); // [0, RAND_MAX]
	x %= (high - low + 1); // [0, high-low]
	x += low; // [low, high]

	return x;
}

int main() {
	int high = 127;
	int low = 32;

	// for (int i = 0; i < 10; i++) {
	// 	printf("%d\n", generate_int(low, high));
	// }

	int c = 126;
	c += 2;

	while (c > high) {
		c -= (high - low + 1);
	}

	printf("%d\n", c);
	
	return 0;
}