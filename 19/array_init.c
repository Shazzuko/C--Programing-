#include <stdio.h>
#include <stdlib.h>

void array_func(double arr[]) {
	printf("in function: %ld\n", sizeof(arr));
}

int main() {
	double arr[1000000];

	// printf("%ld\n", sizeof(arr) / sizeof(double));
	array_func(arr);
	
	return 0;
}