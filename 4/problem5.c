#include <stdio.h>

#define GRAVITY 9.81

int main() {
	float mass = 0.0;
	float force = 0.0;

	printf("Enter mass: ");
	int result = scanf("%f", &mass);

	printf("[DEBUG] result = %d\n", result);

	force = mass * GRAVITY;

	printf("Force = %f\n", force);

	return 0;
}