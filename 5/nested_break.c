#include <stdio.h>

int main() {
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
		for (int j = 0; j < 10; j++) {
			if (i * j > 10) {
				// This will only exit the inner loop
				break;
			}
			printf("j = %d\n", j);
		}
	}

	printf("Bye\n");
	
	return 0;
}