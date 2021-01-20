#include <stdio.h>

#define BUFFER_SIZE 10

void histogram(int arr[], int length) {
	int hist[BUFFER_SIZE] = { 0 };

	for (int i = 0; i < length; i++) {
		hist[arr[i]]++;
	}

	// Print histogram
	for (int i = 0; i < 10; i++) {
		int count = hist[i];

		printf("%d: ", i);
		for (int j = 0; j < count; j++) {
			printf("=");
		}
		printf("\n");
	}
}

int main() {
	int arr[12] = { 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9, 9 };

	histogram(arr, 12);

	return 0;
}