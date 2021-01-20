#include <stdio.h>

int strlen_(char str[]) {
	int length = 0;
	while (str[length] != 0) {
		length++;
	}

	return length;
}

int main() {
	char str[] = "this is a string.";

	printf("%s\n", str);

	for (int i = 0; i < strlen_(str); i++) {
		printf("%c", str[i]);
	}
	printf("\n");

	for (int i = strlen_(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
	
	return 0;
}