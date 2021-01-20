#include <stdio.h>

int main() {
	// for (int i = 0; i < 10; i++) {
	// 	printf("i = %d\n", i);
	// 	for (int j = 0; j < 10; j++) {
	// 		// printf("%d * %d = %d\n", i, j, i * j);
	// 		if (i * j > 10) {
	// 			// This will go back to the top of this loop
	// 			continue;
	// 		}
	// 		printf("j = %d\n", j);

	// 		// some other stuff
	// 	}
	// }

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("index %d is ", i);
		printf("%d\n", i);
	}

	printf("Bye\n");
	
	return 0;
}