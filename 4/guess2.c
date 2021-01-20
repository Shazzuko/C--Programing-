#include <stdio.h>

#define ANSWER 67
#define OFFSET 3

int main() {
	int guess = 0;

	do {
		printf("What's your guess? ");
		scanf("%d", &guess);
	} while (ANSWER != guess);

	printf("You got it!\n");
	
	return 0;
}