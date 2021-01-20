#include <stdio.h>

int main() {
	char a = 'a';
	scanf("%c", &a);

	if (a == 'a' ||
		a == 'e' ||
		a == 'i' ||
		a == 'o' ||
		a == 'u') {
		printf("%c is a vowel.\n", a);
	}

	// switch statement
	switch (a) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel.\n", a);
		default:
			printf("%c is not a vowel.\n", a);
	}

	return 0;
}