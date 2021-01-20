#include "pos.h"

void print_menu() {
	printf("==================================\n");
	printf("|      Point of Sale v%d.%d        |\n", MAJOR_VERSION, MINOR_VERSION);
	printf("|--------------------------------|\n");
	printf("|     1. List Inventory          |\n");
	printf("|     2. List Sales Log          |\n");
	printf("|     3. Log Sale                |\n");
	printf("|     4. Add Inventory           |\n");
	printf("|     5. Quit                    |\n");
	printf("==================================\n");
}

void add_sale(char sales_db[][NUM_SALES_PROP][MAX_LEN],
			  char inv_db[][NUM_PROPS][MAX_LEN],
			  int num_inv_items,
		      int num_sales) {

	char buffer[BUFFER_SIZE] = { 0 };

	// Get the product number
	printf("Enter product ID: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);

	// Cross check with data base
	int product_index = get_inv_item(inv_db, buffer, num_inv_items);
	if (product_index == -1) {
		printf("Warning: Item does not exist.\n");
		return;
	}

	// Add sale log to sales database
	// Update inventory database with new product count
}

int main() {
	char inv_db[MAX_ITEMS][NUM_PROPS][MAX_LEN] = { 0 };
	int num_inv_items = 0;
	char sales_db[MAX_SALES][NUM_SALES_PROP][MAX_LEN] = { 0 };
	int num_sales = 0;
	char choice = 0;

	while (choice != 5) {
		print_menu();
		scanf("%c", &choice);
		while (getchar() != '\n');

		switch (choice) {
			case '1':
				list_all(inv_db, num_inv_items);
				break;
			case '2':
				list_all_sales(sales_db, num_sales);
				break;
			case '3':
				add_sale(sales_db, inv_db, num_inv_items, num_sales);
				break;
			case '4':
				num_inv_items = add_item(inv_db, num_inv_items);
				break;
			case '5':
				printf("Exiting...\n");
				return 1;
				break;
			default:
				printf("Invalid selection.\n");
		}
	}

	return 0;
}