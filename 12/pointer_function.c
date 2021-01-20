#include <stdio.h>

void modify_int(int *a) {
	printf("modify_int()\n");
	*a *= 2;
	printf("  &a = %p\n", a);
	printf("  a  = %d\n", *a);
}

int main() {
	int a = 10;
	int *a_ptr = &a;

	modify_int(a_ptr);
	printf("main()\n");
	printf("  &a = %p\n", &a);
	printf("  a  = %d\n", a);

	return 0;
}