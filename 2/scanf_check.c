#include <stdio.h>

int main() {
	char input1 = 0, input2 = 0;

	int result = scanf("%c%c", &input1, &input2);
	printf("Read %d characters\n", result);

	if (result) {
		printf("input1: %d\ninput2: %d\n", input1, input2);
	} else {
		printf("ERROR: Expected 2 characters.\n");
	}

	return 0;
}