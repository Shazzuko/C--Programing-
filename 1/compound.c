#include <stdio.h>

int main() {
	int a = 2; // a is 0
	int b = a++; // 1. a is read (value 0) 2. assigns to b 3. adds 1 to a
	int c = --b;
	// int b = ++a; // 1. a is updated 2. value is read 3. assigned b

	printf("%d %d %d\n", a, b, c);

	return 0;
}