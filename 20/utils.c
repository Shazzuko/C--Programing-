#include "utils.h"

/*
 * Returns 0 if a newline is removed, 1 otherwise.
 */
int remove_newline(char str[]) {
	int length = strlen(str);
	
	if (str[length - 1] == '\n') {
		str[length - 1] = 0;
		return 0;
	}

	return 1;
}

/*
 * Tokenizing a raw CSV line
 */
void parse_csv_line(char raw_csv[], char data[][MAX_LEN]) {
	char *token = NULL;
	int prop_count = 0;

	// Start tokenization of raw CSV
	token = strtok(raw_csv, ",");

	while (token != NULL) {
		strcpy(data[prop_count++], token);
		token = strtok(NULL, ",");
	}
}