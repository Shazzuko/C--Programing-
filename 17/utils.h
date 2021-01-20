#ifndef UTILS_H_
#define UTILS_H_

#include <string.h>
#include <stdio.h>

#define MAX_LEN 1024
#define BUFFER_SIZE 1024

int remove_newline(char[]);
void parse_csv_line(char[], char[][MAX_LEN]);

#endif