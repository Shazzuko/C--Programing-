#include <stdio.h>

int main() {
	int input = 0;
	printf("> ");
	scanf("%d", &input);

	if (input == 3) {
		printf("The value is %d\n", input);
	} else if (input == 5) {
		printf("Actually it is %d\n", input);
	} else {
		printf("No, it was really %d\n", input);
	}

	return 0;
}