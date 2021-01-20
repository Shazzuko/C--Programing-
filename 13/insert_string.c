#include <stdio.h>
#include <string.h>

#define MAX_WORDS 1024
#define BUFFER_SIZE 1024

int insert(char arr[][BUFFER_SIZE], char token[], int num_items, int index) {
	if (index == num_items) {
		strcpy(arr[index], token);
		return num_items + 1;
	} else if (index < num_items) {
		int i = num_items - 1;

		while (i >= index) {
			strcpy(arr[i + 1], arr[i]);
			i--;
		}

		strcpy(arr[index], token);
		return num_items + 1;
	} else {
		printf("[WARNING] sort_words.c::insert CANNOT INSERT\n");
		return num_items;
	}
}

int main() {
	int size = 0;
	char words[MAX_WORDS][BUFFER_SIZE] = { 0 };
	char token[] = { "test input" };

	size = insert(words, token, size, 0);
	size = insert(words, "double check", size, 0);
	for (int i = 0; i < size; i++) {
		printf("words[%d] = %s\n", i, words[i]);
	}

	return 0;
}