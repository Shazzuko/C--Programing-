#include <stdio.h>

#define BUFFER_SIZE 128

int strlen_(char str[]) {
	int length = 0;
	while (str[length] != 0) {
		length++;
	}

	return length;
}

int main() {
	char input[BUFFER_SIZE] = { 0 };

	printf("Enter a string: ");
	fgets(input, BUFFER_SIZE, stdin);
	int length = strlen_(input);
	input[length - 1] = 0;

	printf("%s\n", input);
	
	return 0;
}