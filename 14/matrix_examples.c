#include <stdio.h>

void mult_arr(int A[][2], int B[][2], int C[][2]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

int main() {
	int A[2][2] = { 1, 2,
		            3, 4 };
	int B[2][2] = { 5, 6, 
		            7, 8 };
	int C[2][2] = { 0 };

	// C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
	// C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
	// C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
	// C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
	mult_arr(A, B, C);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%2d ", C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}