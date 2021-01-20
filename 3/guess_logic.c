#include <stdio.h>

#define ANSWER 34

int main() {
	int input = 0;
	int hint_range = 5;

	printf("0 || 0 = %d\n", 0 || 0);
	printf("0 || 1 = %d\n", 0 || 1);
	printf("1 || 0 = %d\n", 1 || 0);
	printf("1 || 1 = %d\n", 1 || 1);
	printf("0 && 0 = %d\n", 0 && 0);
	printf("0 && 1 = %d\n", 0 && 1);
	printf("1 && 0 = %d\n", 1 && 0);
	printf("1 && 1 = %d\n", 1 && 1);

	printf("Guess the number (1 - 50): ");
	scanf("%d", &input);

	if (input < 1 || input > 50) {
		printf("Your number is outside the range.\n");
	} else if (input == ANSWER) {
		printf("You got it!\n");
	} else if (input > ANSWER - hint_range && input < ANSWER + hint_range) {
		printf("You're close!\n");
	} else {
		printf("Wrong!\n");
	}

	return 0;
}