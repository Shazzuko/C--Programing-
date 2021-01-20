#include "function_examples.h"

int main() {
	int x = 0;

	int result = is_equal(1, 2, 1);
	printf("is_equal(1, 2, 1) = %d\n", result);

	result = is_equal(1, 1, 1);
	printf("is_equal(1, 1, 1) = %d\n", result);

	printf("is_prime(97) = %s\n", is_prime(97));
	printf("is_prime(100) = %s\n", is_prime(100));

	printf("is_odd(1) = %d\n", is_odd(1));
	printf("is_odd(2) = %d\n", is_odd(2));
	
	return 0;
}

// function definition
int is_equal(int a, int b, int c) {
	// if (a == b && b == c) {
	// 	return 1;
	// } else {
	// 	return 0;
	// }

	return (a == b && b == c);
}

int is_prime(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return 0;
		}
	}

	return 1;
}

// char *is_prime(int number) {
// 	for (int i = 2; i <= sqrt(number); i++) {
// 		if (number % i == 0) {
// 			return "prime";
// 		}
// 	}

// 	return "not prime";
// }

int is_odd(int number) {
	return number % 2;
}