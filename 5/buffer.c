#include <stdio.h>

int main() {
	char input = '\0';

	while (!0) {
		scanf("%c", &input);
		printf("%d\n", input);

		// Clear the buffer
		while (getchar() != '\n');
	}
	
	return 0;
}