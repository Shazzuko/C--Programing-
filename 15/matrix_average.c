/*
* Create a program that computes the average value
* in a 2D square matrix.
*/

#include <stdio.h>

#define MAT_SIZE 4

double matrix_average(double mat[][MAT_SIZE]) {
	double sum = 0.0;

	// (a + b) / (MAT_SIZE * MAT_SIZE)

	for (int i = 0; i < MAT_SIZE; i++) {
		for (int j = 0; j < MAT_SIZE; j++) {
			sum += mat[i][j];
		}
	}

	return sum / (MAT_SIZE * MAT_SIZE);
}

double matrix_average1d(double mat[]) {
	double sum = 0.0;
	// for (int i = 0; i < MAT_SIZE * MAT_SIZE; i++) {
	// 	sum += mat[i];
	// }

	for (int i = 0; i < MAT_SIZE; i++) {
		for (int j = 0; j < MAT_SIZE; j++) {
			printf("(%d * %d) + %d = %d\n", i, MAT_SIZE, j, (i * MAT_SIZE) + j);
			sum += mat[(i * MAT_SIZE) + j];
		}
	}

	return sum / (MAT_SIZE * MAT_SIZE);
}

int main() {
	double mat[MAT_SIZE][MAT_SIZE] = {
		1, 9, 5, 6,
		0.5, 1.3, 10.5, 7.7,
		100.3, 89, 2.2, -5.1,
		40, 909, 2, 1.1
	};

	double mat1d[MAT_SIZE * MAT_SIZE] = {
		1, 9, 5, 6,
		0.5, 1.3, 10.5, 7.7,
		100.3, 89, 2.2, -5.1,
		40, 909, 2, 1.1
	};

	// double avg = matrix_average(mat);
	double avg = matrix_average1d(mat1d);

	printf("Matrix Average = %.2lf\n", avg);

	return 0;
}