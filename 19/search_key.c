#include <stdio.h>

#define MAX_LEN 128

int strlen_(char str[]) {
	int i = 0;
	while (str[i++] != 0);
	return i - 1;
}

int search_key(char str[], char c, int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (str[i] == c) {
			count++;
		}
	}

	return count;
}

int main() {
	char str_buf[MAX_LEN] = { 0 };
	char c = 0;

	printf("Enter a string: ");
	fgets(str_buf, MAX_LEN, stdin);
	str_buf[strlen_(str_buf) - 1] = 0;

	printf("Enter a key: ");
	scanf("%c", &c);

	int count = search_key(str_buf, c, strlen_(str_buf));

	printf("%d found!\n", count);

	return 0;
}