#include <stdio.h>

int main() {
	float f = 10.1;
	printf("%d\n", (f = 2 || f < 10.0));
	
	return 0;
}