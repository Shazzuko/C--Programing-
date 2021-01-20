#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "utils.h"

#define MAX_ITEMS 1000
#define NUM_PROPS 4

void list_all(char[][NUM_PROPS][MAX_LEN], int);
int add_item(char[][NUM_PROPS][MAX_LEN], int);
int get_inv_item(char[][NUM_PROPS][MAX_LEN], char[], int);
int search_inv(char[][NUM_PROPS][MAX_LEN], char[], char[][NUM_PROPS][MAX_LEN], int);

#endif // INVENTORY_H_