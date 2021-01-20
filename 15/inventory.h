#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "utils.h"

#define BUFFER_SIZE 1024
#define MAX_ITEMS 1000
#define MAX_LEN 1024
#define NUM_PROPS 4

void list_all(char[][NUM_PROPS][MAX_LEN], int);

#endif // INVENTORY_H_