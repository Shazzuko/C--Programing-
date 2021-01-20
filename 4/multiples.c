#include <stdio.h>

int main() {
	int input = 0;
	int sum = 0;

	printf("Enter an integer: ");
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	printf("Sum = %d\n", sum);

	return 0;
}