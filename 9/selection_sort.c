#include <stdio.h>

#define ARRAY_SIZE 10

void print_array(int arr[], int length) {
	printf("[");
	for (int i = 0; i < length - 1; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d]\n", arr[length - 1]);
}

int main() {
	int arr[ARRAY_SIZE] = { 10, 4, 20, 15, 0, 1, 7, 81, 22, 9 };

	printf("Unsorted Array\n");
	print_array(arr, ARRAY_SIZE);

	// Sort Array
	for (int i = 0; i < ARRAY_SIZE; i++) {
		int min_j = i;
		for (int j = i + 1; j < ARRAY_SIZE; j++) {
			if (arr[j] < arr[min_j]) {
				min_j = j;
			}
		}

		// Swap values
		if (min_j != i) {
			int temp = arr[i];
			arr[i] = arr[min_j];
			arr[min_j] = temp;
		}
	}

	printf("Sorted Array\n");
	print_array(arr, ARRAY_SIZE);

	return 0;
}