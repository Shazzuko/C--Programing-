#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int main() {
	int input = 0;
	int is_prime = TRUE;
	int i = 2;

	printf("Enter an integer: ");
	scanf("%d", &input);

	while (is_prime && i <= sqrt(input)) {
		if (input % i == 0) {
			// we found another factor, not prime
			is_prime = FALSE;
		}
		i++;
	}

	if (is_prime) {
		printf("%d is prime.\n", input);
	} else {
		printf("%d is not prime.\n", input);
	}
	
	return 0;
}