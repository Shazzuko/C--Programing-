#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char string_array[4][1024] = { 0 };
	char str[] = "test";

	for (int i = 0; i < 4; i++) {
		fgets(string_array[i], 1024, stdin);
		string_array[i][strlen(string_array[i]) - 1] = 0;
	}

	for (int i = 0; i < 4; i++) {
		printf("%s\n", string_array[i]);
	}

	return 0;
}