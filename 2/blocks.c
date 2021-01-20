#include <stdio.h>

int main() {
	int a = 2;

	printf("%d\n", b);
	{
		int b = 100;
		b *= a;
		printf("%d %d\n", a, b);
	}

	printf("%d\n", b);

	return 0;
}