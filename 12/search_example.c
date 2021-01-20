#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "1000,Intel Core i7-10700K,399.99,10";
	char *key = "Intel";

	for (int i = 0; i < strlen(str); i++) {
		printf("%p: %c\n", &str[i], str[i]);
	}

	char *found_key = strstr(str, key);
	if (found_key != NULL) {
		printf("Key found at %p\n", found_key);
	} else {
		printf("Key not found.\n");
	}
	
	return 0;
}