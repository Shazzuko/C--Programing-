#include <stdio.h>

int main() {
	float temp = 0.0;

	scanf("%f", &temp);

	if (temp < 32) {
		printf("It is freezing.\n");
	} else if (temp >= 32 && temp < 60) {
		printf("it is cold\n");
	} else if (temp >= 60 && temp < 80) {
		printf("it is nice\n");
	} else {
		printf("it is hot\n");
	}

	return 0;
}