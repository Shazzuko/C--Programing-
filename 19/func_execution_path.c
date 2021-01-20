#include <stdio.h>

double func_test(int a) {
	if (a == 1) {
		return 0;
	}

	return 10.5;
}

int main() {
	func_test(2);
	
	return 0;
}