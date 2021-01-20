#include <stdio.h>

#include "utils.h"

int main() {

	// Testing pow3()
	if (pow3(2) == 8) {
		printf("pow3(): PASS\n");
	} else {
		printf("pow3(): FAIL\n");
	}

	// Testing isquestion()
	if (isquestion('?')) {
		printf("isquestion(): PASS\n");
	} else {
		printf("isquestion(): FAIL\n");
	}

	return 0;
}