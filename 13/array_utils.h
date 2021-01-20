#ifndef ARRAY_UTILS_H_
#define ARRAY_UTILS_H_

#include <stdio.h>

#define MAX_SIZE 10

void print_array(int[], int);
int insert(int, int[], int, int);
int append(int, int[], int);
int prepend(int, int[], int);
int remove_val(int, int[], int);

#endif // ARRAY_UTILS_H_