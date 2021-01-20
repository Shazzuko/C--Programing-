#include <stdio.h>

int main() {
	int count = 0;
	while (count < 5) {
		int a;
		printf("Enter a number: ");
		scanf("%d", &a);
		printf("You entered %d\n", a);
		count++;
	}

	return 0;
}