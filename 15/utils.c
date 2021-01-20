#include "utils.h"

/*
 * Returns 0 if a newline is removed, 1 otherwise.
 */
int remove_newline(char str[]) {
	int length = strlen(str);
	
	if (str[length - 1] == '\n') {
		str[length - 1] = 0;
		return 0;
	}

	return 1;
}