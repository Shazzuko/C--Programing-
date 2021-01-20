#include <stdio.h>

int main() {
	float input;
	int result = scanf("%f", &input);

	printf("Result is %d\n", result);
	printf("You entered %f\n", input);
	
	return 0;
}