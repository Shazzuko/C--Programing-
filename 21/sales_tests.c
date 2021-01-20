#include "sales.h"

void list_sales_test() {
	char sales_db[MAX_SALES][NUM_SALES_PROP][MAX_LEN] = { 0 };
	char buffer[BUFFER_SIZE] = { 0 };
	int num_items = 0;

	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);

	while (strcmp(buffer, "END")) {
		// Tokenization or process file
		parse_csv_line(buffer, sales_db[num_items++]);

		fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
	}

	list_all_sales(sales_db, num_items);
}

void log_sale_test() {
	char sales_db[MAX_SALES][NUM_SALES_PROP][MAX_LEN] = { 0 };
	int num_items = 0;

	for (int i = 0; i < 2; i++) {
		num_items = log_sales(sales_db, num_items);
		list_all_sales(sales_db, num_items);
	}
}

void get_sales_test() {
	char sales_db[MAX_SALES][NUM_SALES_PROP][MAX_LEN] = { 0 };
	char buffer[BUFFER_SIZE] = { 0 };
	int num_items = 0;

	// Read in data from shell
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);

	while (strcmp(buffer, "END")) {
		// Tokenization or process file
		parse_csv_line(buffer, sales_db[num_items++]);

		fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
	}

	list_all_sales(sales_db, num_items);

	char filtered_db[MAX_SALES][NUM_SALES_PROP][MAX_LEN] = { 0 };
	char product_id[BUFFER_SIZE] = { 0 };

	fgets(product_id, BUFFER_SIZE, stdin);
	product_id[strlen(product_id) - 1] = 0;

	int num_found = get_sales(sales_db, product_id, filtered_db, num_items);

	list_all_sales(filtered_db, num_found);

	if (num_found == 2) {
		printf("get_sales_test(): PASS\n");
	} else {
		printf("get_sales_test(): FAIL\n");
	}
}

int main() {
	// list_sales_test();
	// log_sale_test();
	get_sales_test();
	
	return 0;
}