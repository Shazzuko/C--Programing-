#include <stdio.h>

int main() {
	char input = '\0';

	while ((input = getchar()) != '.') {
		printf("%c", input);
	}
	
	return 0;
}