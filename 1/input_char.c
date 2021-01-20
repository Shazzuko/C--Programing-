#include <stdio.h>

int main() {
	char input1, input2;
	int result = scanf("%c%c", &input1, &input2);

	printf("Result is %d\n", result);
	printf("You entered %c%c\n", input1, input2);
	
	return 0;
}