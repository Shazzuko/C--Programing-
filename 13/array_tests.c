#include "array_utils.h"

int main() {
	int arr[MAX_SIZE] = { 1, 2, 3, 4, 5 };
	int size = 5;

	print_array(arr, size);
	size = append(10, arr, size);
	print_array(arr, size);
	size = insert(15, arr, 2, size);
	print_array(arr, size);
	size = prepend(20, arr, size);
	print_array(arr, size);
	size = insert(9, arr, 5, size);
	print_array(arr, size);
	size = insert(0, arr, 1, size);
	print_array(arr, size);
	size = remove_val(5, arr, size);
	print_array(arr, size);
	
	return 0;
}