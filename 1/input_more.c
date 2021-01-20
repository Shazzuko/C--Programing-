#include <stdio.h>

int main() {
	int input1, input2, input3, input4;

	printf("Enter your input: \n");
	int result = scanf("%d%d%d%d", &input1, &input2, &input3, &input4);
	printf("Read %d values.\n", result);

	printf("%d%d%d%d\n", input1, input2, input3, input4);

	return 0;
}