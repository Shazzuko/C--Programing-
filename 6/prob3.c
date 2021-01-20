#include <stdio.h>

int main() {
	int input = 0;

	scanf("%d", &input); // should be %d

	if (input > 5 && input < 15) { // && instead of ||
		printf("Case 1\n");
	} else if (input == 20) { // equality, not assignment
		printf("Case 2\n");
	} else {
		printf("Case 3\n");
	}

	return 0;
}
