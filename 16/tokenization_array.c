#include <stdio.h>
#include <string.h>

#define NUM_VALS 4
#define MAX_LEN 1024

void tokenize(char vals[][MAX_LEN], char buffer[]) {
	char *token = strtok(buffer, ",");
	int i = 0;

	while (token != NULL) {
		printf("[DEBUG] token = %p -> %c\n", token, token[1]);
		token[4] = 'r';
		strcpy(vals[i++], token);
		token = strtok(NULL, ",");
	}
}

int main() {
	char data[] = "yellow,red,orange,purple,blue";
	char vals[NUM_VALS][MAX_LEN] = { 0 };

	tokenize(vals, data);

	for (int i = 0; i < NUM_VALS; i++) {
		printf("%s\n", vals[i]);
	}

	return 0;
}