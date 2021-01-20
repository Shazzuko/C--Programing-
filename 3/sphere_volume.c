#include <stdio.h>

#define PI 3.14159

// Calculates the volume of a sphere
int main() {
	// Variables
	float radius = 0.0;
	float volume = 0.0;

	// Getting our input
	printf("Enter radius: ");
	scanf("%f", &radius);

	// Calculating the volume
	volume = (4 / 3) * PI * radius * radius * radius;
	printf("Volume is %f\n", volume);

	return 0;
}