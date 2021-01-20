#include <stdio.h>

void print_array(int arr[], int length) {
	printf("[");
	for (int i = 0; i < length - 1; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d]\n", arr[length - 1]);
}

int main() {
	int my_arr[10] = { 5, 10, 15, 20 };

	print_array(my_arr, 10);

	return 0;
}