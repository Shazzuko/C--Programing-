#include <stdio.h>

int main() {
	int a = 1;
	int limit = 5;

	do {
		a += 2;
		printf("%d\n", a);
	} while(a < limit);
	
	return 0;
}