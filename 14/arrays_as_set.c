// F = {n | n an integer 0 <= n <= 19}

#include <stdio.h>

int main() {
	// int arr[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int arr[20] = { 0 };
	double d_arr[20] = { 0 };
	char str[] = "test";

	for (int i = 0; i <= 19; i++) {
		arr[i] = i;
		printf("%d ", arr[i]);
	}

	printf("\n");
	
	return 0;
}