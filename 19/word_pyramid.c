#include <stdio.h>
#include <string.h>

int main() {
	char buffer[1024] = { 0 };

	printf("Enter a string: ");
	fgets(buffer, 1024, stdin);
	buffer[strlen(buffer)-1] = 0;

	for (int i = strlen(buffer); i >= 0; i--) {
		// for (int j = 0; j < i; j++) {
		// 	printf("%c", buffer[j]);
		// }
		// printf("\n");
		buffer[i] = 0;
		printf("%s\n", buffer);
	}

	return 0;
}