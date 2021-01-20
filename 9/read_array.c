#include <stdio.h>

#define ARRAY_SIZE 20

int main() {
	int arr[ARRAY_SIZE] = { 0 };
	int a = 0;

	printf("> ");

	for (int i = 0; i < ARRAY_SIZE; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
}