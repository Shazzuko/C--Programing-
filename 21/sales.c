#include "sales.h"

void list_all_sales(char sales_db[][NUM_SALES_PROP][MAX_LEN], int num_items) {
	// Print heading
	printf("%-10s %-10s %10s %10s\n", "ID", "AMTSOLD", "CUSTID", "EMPID");
	for (int i = 0; i < 43; i++) {
		printf("-");
	}
	printf("\n");

	// Printing each individual item
	for (int i = 0; i < num_items; i++) {
		printf("%-10s %-10s %10s %10s\n",
			sales_db[i][0], sales_db[i][1], sales_db[i][2], sales_db[i][3]);
	}
}

int log_sales(char sales_db[][NUM_SALES_PROP][MAX_LEN], int num_items) {
	char buffer[BUFFER_SIZE] = { 0 };

	printf("Enter product ID: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	strcpy(sales_db[num_items][0], buffer);

	printf("Enter amount sold: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	strcpy(sales_db[num_items][1], buffer);

	printf("Enter customer ID: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	strcpy(sales_db[num_items][2], buffer);

	printf("Enter employee ID: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	strcpy(sales_db[num_items][3], buffer);

	return num_items + 1;
}

/*
 * Populates `filtered_sales` with found data based on
 * the desired `product_id`.
 * Returns the number of found items.
 */
int get_sales(char sales_db[][NUM_SALES_PROP][MAX_LEN],
	char product_id[],
	char filtered_sales[][NUM_SALES_PROP][MAX_LEN],
	int num_sales) {

	int num_filtered_sales = 0;

	// Compare IDs
	for (int i = 0; i < num_sales; i++) {
		// Compare individual sales log with product_id
		if (!strcmp(product_id, sales_db[i][0])) {
			// Copy entry from sales_db to filtered_sales
			for (int j = 0; j < NUM_SALES_PROP; j++) {
				strcpy(filtered_sales[num_filtered_sales][j], sales_db[i][j]);
			}

			// Increment sales count
			num_filtered_sales++;
		}
	}

	return num_filtered_sales;
}