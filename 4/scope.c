#include <stdio.h>

int main() {
	int j = 0;

	for (int i = 0; i < 10; i++) {
		printf("loop i = %d\n", i);
		j = i;
	}

	printf("j = %d\n", j);

	return 0;
}