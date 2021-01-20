#include <stdio.h>

int main() {
	int input = 0;
	int even_factors = 0;
	int odd_factors = 0;

	printf("Enter an integer: ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		int num_factors = 0;

		// Count number of factors that `i` has.
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				num_factors++;
			}
		}

		if (num_factors % 2) {
			odd_factors++;
		} else {
			even_factors++;
		}
	}

	printf("Odd Factors: %d\n", odd_factors);
	printf("Even Factors: %d\n", even_factors);

	return 0;
}