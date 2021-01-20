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