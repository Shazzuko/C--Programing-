#include "inventory.h"

/*
 * Prints an individual item
 */
void print_item(char item[][MAX_LEN]) {
	printf("%-6s %-20.20s %8s %4s\n", item[0], item[1], item[2], item[3]);
}

/*
 * List all items in the database
 */
void list_all(char inv_db[][NUM_PROPS][MAX_LEN], int num_items) {
	// Print heading
	printf("%-6s %-20s %8s %4s\n", "ID", "NAME", "PRICE", "AMT");
	for (int i = 0; i < 41; i++) {
		printf("-");
	}
	printf("\n");

	// Printing each individual item
	for (int i = 0; i < num_items; i++) {
		print_item(inv_db[i]);
	}
}

/*
 * Tokenizing a raw CSV line
 */
void parse_csv_line(char raw_csv[], char inv_db[][MAX_LEN]) {
	char *token = NULL;
	int prop_count = 0;

	// Start tokenization of raw CSV
	token = strtok(raw_csv, ",");

	while (token != NULL) {
		strcpy(inv_db[prop_count++], token);
		token = strtok(NULL, ",");
	}
}

int add_item(char inv_db[][NUM_PROPS][MAX_LEN], int num_items) {
	char buffer[BUFFER_SIZE] = { 0 };
	char ch = 0;

	if (num_items + 1 >= MAX_ITEMS) {
		return num_items;
	}

	printf("Enter ID: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	printf("[DEBUG] buffer = %s\n", buffer);
	remove_newline(buffer);
	// TODO: Verify correct data
	strcpy(inv_db[num_items][0], buffer);

	printf("Enter Name: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	strcpy(inv_db[num_items][1], buffer);

	printf("Enter Price: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	strcpy(inv_db[num_items][2], buffer);

	printf("Enter Quantity: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	strcpy(inv_db[num_items][3], buffer);

	return num_items + 1;
}

int main() {
	char inv_db[MAX_ITEMS][NUM_PROPS][MAX_LEN] = { 0 };
	char buffer[BUFFER_SIZE] = { 0 };
	int num_items = 0;

	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);

	while (strcmp(buffer, "END")) {
		// Tokenization or process file
		parse_csv_line(buffer, inv_db[num_items++]);

		fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
	}

	list_all(inv_db, num_items);

	num_items = add_item(inv_db, num_items);

	list_all(inv_db, num_items);

	return 0;
}