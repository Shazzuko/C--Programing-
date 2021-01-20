#include <stdio.h>

int main() {
	char last_char = ' ';
	char input = 0;
	int count = 0;

	while ((input = getchar()) != '\n') {
		if (last_char == ' ' && input != ' ') {
			count++;
		}
		last_char = input;
	}

	printf("%d words in input.\n", count);

	return 0;
}