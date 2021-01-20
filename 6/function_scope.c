#include <stdio.h>

void func(int a) {
	printf("IN func()\n");
	printf("  Address of a = %p\n", &a);
	printf("  Value of a = %d\n", a);

	a *= 2;

	printf("  Address of a = %p\n", &a);
	printf("  Value of a = %d\n", a);
}

int is_odd(int number) {
	return number % 2;
}

int main() {
	int a = 5;

	printf("IN main()\n");
	printf("  Address of a = %p\n", &a);
	printf("  Value of a = %d\n", a);
	func(a);
	printf("result of is_odd(a) = %d\n", is_odd(a));
	printf("IN main()\n");
	printf("  Address of a = %p\n", &a);
	printf("  Value of a = %d\n", a);

	return 0;
}