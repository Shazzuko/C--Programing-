#include <stdio.h>

int main() {
	int i = 0;
	int a = 9;

	while (i < a) {
		printf("%d, %d\n", i, a);
		if (i++ == 8) {
			break;
		}
	}

	printf("Bye\n");
	
	return 0;
}