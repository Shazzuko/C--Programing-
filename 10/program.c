/*
 * Write a program that takes in user input (integer) and
 * - prints the positive version of the number if the input is negative,
 * - prints the number squared if it is divisible by 3
 * - prints the number if it is 0.
 */

#include <stdio.h>

int main() {
	int input = 0;
	scanf("%d", &input);

	if (input < 0) {
		printf("%d\n", -1 * input);
	}
	if (input % 3 == 0) {
		printf("%d\n", input * input);
	}
	if (input == 0) {
		printf("%d\n", input);
	}

	return 0;
}