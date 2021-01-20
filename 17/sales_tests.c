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

int main() {
	// list_sales_test();
	log_sale_test();
	
	return 0;
}