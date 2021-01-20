#include <stdio.h>

int find_first_vowel(char arr[], int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == 'a' ||
			arr[i] == 'e' ||
			arr[i] == 'i' ||
			arr[i] == 'o' ||
			arr[i] == 'u') {
			return i;
		}
	}

	return -1;
}

int main() {
	char arr[] = { 'n', 'a', 'o', 'm', 'i' };

	int index = find_first_vowel(arr, 5);

	if (index > -1) {
		printf("vowel found at index %d\n", index);
	} else {
		printf("no vowels found.\n");
	}

	return 0;
}