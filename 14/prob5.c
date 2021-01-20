#include <stdio.h>

int main() {
	float x1 = 0.0;
	float y1 = 0.0;
	float x2 = 0.0;
	float y2 = 0.0;
	float mean_x = 0.0, mean_y = 0.0;

	printf("Enter first coordinate: ");
	scanf("%f%f", x1, y1);
	printf("Enter second coordinate: ");
	scanf("%f%f", x2, y2);

	mean_x = (x1 + x2) / 2.0;
	mean_y = (y1 + y2) / 2.0;

	printf("(%f, %f)\n", mean_x, mean_y);

	return 0;
}
