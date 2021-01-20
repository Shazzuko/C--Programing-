#include <stdio.h>

int main() {
	int n = 1000;
	int m = 1000;
	int N = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < N; k++) {
				printf("(%d, %d, %d)\n", i, j, k);
			}
		}
	}
	
	return 0;
}