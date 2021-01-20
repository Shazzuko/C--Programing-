#include <stdio.h>

int main() {
	char a = 0;

	if (a == 'a' ||
		a == 'e' ||
		a == 'i' ||
		a == 'o' ||
		a == 'u') {
		printf("%c is a vowel.\n", a);
	}

	return 0;
}