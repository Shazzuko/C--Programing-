#include "inventory.h"

void list_all(char inv_db[][MAX_ITEMS][MAX_LEN], int num_items) {
	// Print heading
	printf("%-6s %-20s %8s %4s\n", "ID", "NAME", "PRICE", "AMT");
	for (int i = 0; i < 41; i++) {
		printf("-");
	}
	printf("\n");

	for (int i = 0; i < num_items; i++) {
		printf("%-6s %-20s %8s %4s\n", inv_db[i][0], inv_db[i][1], inv_db[i][2], inv_db[i][3]);
	}
}

int main() {
	char buffer[BUFFER_SIZE] = { 0 };

	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);

	while (strcmp(buffer, "END")) {
		// Tokenization or process file

		fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
	}

	return 0;
}