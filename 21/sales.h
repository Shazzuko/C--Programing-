#ifndef SALES_H_
#define SALES_H_

#include "utils.h"

#define NUM_SALES_PROP 4
#define MAX_SALES 1000

void list_all_sales(char[][NUM_SALES_PROP][MAX_LEN], int);
int log_sales(char[][NUM_SALES_PROP][MAX_LEN], int);
int get_sales(char[][NUM_SALES_PROP][MAX_LEN], char[], char[][NUM_SALES_PROP][MAX_LEN], int);

#endif // SALES_H_