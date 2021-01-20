#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t t;
	time(&t);
	srand(t);

	printf("%u\n", RAND_MAX);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", rand());
	}
	
	return 0;
}