#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024

int parse_line(char *line) {
	int token_count = 0;
	char *token = strtok(line, ",");

	while (token != NULL) {
		token_count++;
		printf("%s  ", token);
		token = strtok(NULL, ",");
	}

	return token_count;
}

int main() {
	char buffer[BUF_SIZE] = { 0 };
	FILE *fp = fopen("prices.csv", "r");

	if (fp == NULL) {
		printf("Cannot find file.\n");
		return 1;
	}

	// Read each line
	while (fgets(buffer, BUF_SIZE, fp)) {
		if (buffer[strlen(buffer) - 1] == '\n') {
			buffer[strlen(buffer) - 1] = 0;
		}

		// Parse each line
		parse_line(buffer);
		printf("\n");
	}

	return 0;
}