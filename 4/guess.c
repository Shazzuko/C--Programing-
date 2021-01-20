#include <stdio.h>

#define ANSWER 67
#define OFFSET 3

int main() {
	int guess = 0;

	printf("What's your guess? ");
	scanf("%d", &guess);

	while (guess != ANSWER) {
		if (guess < ANSWER + OFFSET && guess > ANSWER - OFFSET) {
			printf("You're close!\n");
		} else {
			printf("Wrong!\n");
		}
		printf("Guess again: ");
		scanf("%d", &guess);
	}

	printf("You got it!\n");
	
	return 0;
}