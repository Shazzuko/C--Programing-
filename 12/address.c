#include <stdio.h>

int main() {
	double a = 10.0;
	double *a_ptr = &a;
	char c = 0;
	char *c_ptr = &c;

	printf("%p: %c\n", c_ptr, *c_ptr);

	// *a_ptr *= 2;

	// printf("%p: %lf\n", a_ptr, *a_ptr);
	// printf("%p: %lf\n", &a, a);

	return 0;
}