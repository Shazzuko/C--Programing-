#include "inventory.h"

void list_test() {
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
}

void add_item_test() {
	char inv_db[MAX_ITEMS][NUM_PROPS][MAX_LEN] = { 0 };
	int num_items = 0;

	for (int i = 0; i < 2; i++) {
		num_items = add_item(inv_db, num_items);

		list_all(inv_db, num_items);
	}
}

void search_item_test() {
	// Local Variable Declarations
	char inv_db[MAX_ITEMS][NUM_PROPS][MAX_LEN] = { 0 };
	char buffer[BUFFER_SIZE] = { 0 };
	int num_items = 0;
	char filtered_db[MAX_ITEMS][NUM_PROPS][MAX_LEN] = { 0 };
	char search_term[] = "AMD";

	// Reading in data
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);

	while (strcmp(buffer, "END")) {
		// Tokenization or process file
		parse_csv_line(buffer, inv_db[num_items++]);

		fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
	}

	list_all(inv_db, num_items);

	int num_found_items = search_inv(inv_db, search_term, filtered_db, num_items);

	list_all(filtered_db, num_found_items);
}

int main() {
	// List Test
	// list_test();

	// Add item test
	// add_item_test();

	// Search Item Test
	search_item_test();

	return 0;
}