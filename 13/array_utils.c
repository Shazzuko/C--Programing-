#include "array_utils.h"

void print_array(int arr[], int size) {
	printf("[");
	for (int i = 0; i < size - 1; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d] (%d elements)\n", arr[size - 1], size);
}

int insert(int value, int arr[], int index, int size) {
	if (size >= MAX_SIZE) {
		printf("[WARNING] Array is full. Remove elements first.\n");
		return size;
	}

	if (index > size) {
		printf("[WARNING] Attempt to insert at invalid index %d.\n", index);
		return size;
	}

	// Append
	if (index == size) {
		arr[index] = value;
		return size + 1;
	} else if (index < size) {
		int i = size - 1;
		// Shift values over
		while (i >= index) {
			arr[i + 1] = arr[i];
			i--;
		}

		// Add new value
		arr[index] = value;
		return size + 1;
	}

	return size;
}

int append(int value, int arr[], int size) {
	return insert(value, arr, size, size);
}

int prepend(int value, int arr[], int size) {
	return insert(value, arr, 0, size);
}

int remove_val(int index, int arr[], int size) {
	for (int i = index; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}

	return size - 1;
}