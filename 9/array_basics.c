#include <stdio.h>

int main() {
	// int arr[10] = { 0, 10, 5, 4 };
	// char c_arr[10] = { 0 };
	char word[] = { 'h', 'e', 'l', 'p' };
	char test[] = { 'c', 's', 'e', '1', '3', '1', '0' };

	// for (int i = 0; i < 10; i++) {
	// 	printf("arr[%d]  = %d\n", i, arr[i]);
	// 	printf("&arr[%d] = %p\n", i, &arr[i]);
	// }

	// for (int i = 0; i < 10; i++) {
	// 	printf("c_arr[%d]  = %c\n", i, c_arr[i]);
	// 	printf("&c_arr[%d] = %p\n", i, &c_arr[i]);
	// }

	for (int i = 0; i < 10; i++) {
		printf("word[%d] = %c\n", i, word[i]);
	}

	return 0;
}