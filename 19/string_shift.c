#include <stdio.h>
#include <stdlib.h>

int shift_string(char[], int, int);

int main() {
	char str1[] = "C by Discovery";
	size_t size = sizeof(str1) / sizeof(char);

	int operations = shift_string(str1, size, 3);

	printf("operations = %d\n", operations);
	printf("%s\n", str1);
	
	return 0;
}

int shift_string(char str[], int size, int shift) {
	int operation_count = 0;
	for (int i = 0; i < size; i += 2) {
		operation_count++;
		str[i] += shift;
	}

	return operation_count;
}