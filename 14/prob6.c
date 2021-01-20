#include <stdio.h>

int main() {
	for (int i = 9; i > 0; i--) {
		for (int j = 9; j > 0; j--) {
			printf("%2d ", i * j);
		}
		printf("\n");
	}

	return 0;
}