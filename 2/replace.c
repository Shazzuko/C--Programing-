#include <stdio.h>

int main() {
	char input;

	printf("ENTER VALUE: ");
	scanf("%c", &input);

	if (input == 'y') {
		input = 'Y';
	} else if (input == 'n') {
		input = 'N';
	}

	printf("Final character: %c\n", input);

	return 0;
}