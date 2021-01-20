#include <stdio.h>

int main() {
	char a = 0;
	char b = 0;

	printf("Enter two characters: ");
	scanf("%c%c", &a, &b);

	// Break down of result step
	float s1 = (float)a + b;
	printf("s1 = %f\n", s1);
	float s2 = s1 / 2;
	printf("s2 = %f\n", s2);
	float s3 = s2 + 0.5;
	printf("s3 = %f\n", s3);
	printf("s4 = %c\n", (char)s3);

	char result = (char) (((float)a + b) / 2 + 0.5);

	printf("Average character: %c\n", result);

	return 0;
}