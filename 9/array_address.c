#include <stdio.h>

int main() {
	char arr[10] = { 0 };

	printf("arr = %p\n", arr);
	printf("&arr[0] = %p\n", &arr[0]);

	return 0;
}