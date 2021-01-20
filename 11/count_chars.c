#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

void reverse_string(char str[]) {
	int length = strlen(str);
	char temp = 0;

	for (int i = 0; i < (length / 2); i++) {
		// Swap values
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

int count_occurrences(char str[], char key) {
	int count = 0;
	int i = 0;

	while (str[i] != 0) {
		if (str[i] == key) {
			count++;
		}
		i++;
	}

	return count;
}

int clean_newline(char str[]) {
	int length = strlen(str);
	if (str[length-1] == '\n') {
		str[length-1] = 0;
		return 0;
	}

	return 1;
}

int count_chars(char str[]) {
	int length = strlen(str);
	int count = 0;

	for (int i = 0; i < length; i++) {
		// Ignore spaces
		// if (str[i] != ' ') {
		// 	count++;
		// }
		// Count only alphabet characters
		if ((str[i] >= 65 && str[i] <= 97) ||
			(str[i] >= 97 && str[i] <= 122)) {
			count++;
		}
	}

	return count;
}

int strlen_(char str[]) {
	int i = 0;
	while (str[i++] != 0);

	return i - 1;
}

int main() {
	char str[BUFFER_SIZE] = { 0 };
	char key = 0;

	printf("> ");
	fgets(str, BUFFER_SIZE, stdin);

	// Remove the newline character
	clean_newline(str);
	// int length = strlen(str);
	// int length2 = strlen_(str);

	// printf("%s is %d characters long\n", str, length);
	// printf("strlen_(str) = %d\n", length2);

	// printf("\"%s\" has %d actual characters.\n", str, count_chars(str));

	// printf("Enter a key: ");
	// scanf("%c", &key);

	// int key_count = count_occurrences(str, key);
	// printf("\"%s\" has %d occurrences of \'%c\'\n", str, key_count, key);
	reverse_string(str);

	printf("Reversed is \"%s\"\n", str);
	
	return 0;
}