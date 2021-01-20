#include <stdio.h>

int main() {
	int a = 0;

	scanf("%d", &a);

	if (a == 1) {
		printf("You entered 1!\n");
	} else {
		printf("You entered %d\n", a);
	}

	return 0;
}