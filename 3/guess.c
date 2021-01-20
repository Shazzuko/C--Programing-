#include <stdio.h>

#define ANSWER 34

int main() {
	int input = 0;

	printf("Guess the number (1 - 50): ");
	scanf("%d", &input);

	if (input < 1) {
		printf("That's too low for the given range.\n");
	} else if (input > 50) {
		printf("That's too high for the given range.\n");
	} else if (input == ANSWER) {
		printf("You got it!\n");
	} else {
		printf("Wrong!\n");
	}

	return 0;
}