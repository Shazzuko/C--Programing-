#include <stdio.h>
#include <math.h>

int main() {
	long input = 0;

	printf("Enter an integer: ");
	scanf("%ld", &input);

	// Calculate all even factors
	while (input % 2 == 0) {
		printf("2, ");
		input /= 2;
	}

	// Only search for odd factors
	for (int i = 3; i <= sqrt(input); i += 2) {
		while (input % i == 0) {
			printf("%d, ", i);
			input /= i;
		}
	}

	if (input > 2) {
		printf("%ld!\n", input);
	} else {
		printf("\n");
	}
	
	return 0;
}