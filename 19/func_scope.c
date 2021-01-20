#include <stdio.h>

void modify(int a) {
	a *= 2;
}

int main() {
	int a = 2;
	
	modify(a);

	printf("a = %d\n", a);
	
	return 0;
}