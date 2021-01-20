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

int add_item(char inv_db[][NUM_PROPS][MAX_LEN], int num_items) {
	char buffer[BUFFER_SIZE] = { 0 };
	char ch = 0;

	if (num_items + 1 >= MAX_ITEMS) {
		return num_items;
	}

	printf("Enter ID: ");
	fgets(buffer, BUFFER_SIZE, stdin);
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

int get_inv_item(char inv_db[][NUM_PROPS][MAX_LEN], char product_id[], int num_items) {
	int result = -1;

	for (int i = 0; i < num_items; i++) {
		if (!strcmp(inv_db[i][0], product_id)) {
			return i;
		}
	}

	return result;
}

int search_inv(char inv_db[][NUM_PROPS][MAX_LEN],
	char search_term[],
	char filtered_db[][NUM_PROPS][MAX_LEN],
	int num_items) {

	int num_found_items = 0;

	// Loop through all products
	for (int i = 0; i < num_items; i++) {
		// TODO: Compare search_term to product name
		if (strstr(inv_db[i][1], search_term) != NULL) {
			// Copy information from `inv_db` to `filtered_db`
			for (int j = 0; j < NUM_PROPS; j++) {
				strcpy(filtered_db[num_found_items][j], inv_db[i][j]);
			}
			num_found_items++;
		}
	}

	return num_found_items;
}