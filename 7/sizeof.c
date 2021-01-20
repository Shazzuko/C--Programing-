#include <stdio.h>

int to_bits(int bytes) {
	return bytes * 8;
}

int main() {
	printf("sizeof(char) = %ld bytes\n", sizeof(char));
	printf("sizeof(short) = %ld bytes\n", sizeof(short));
	printf("sizeof(int) = %ld bytes\n", sizeof(int));
	printf("sizeof(long) = %ld bytes\n", sizeof(long));
	printf("sizeof(float) = %ld bytes\n", sizeof(float));
	printf("sizeof(double) = %ld bytes\n", sizeof(double));
	printf("sizeof(size_t) = %ld bytes\n", sizeof(size_t));

	printf("sizeof(char) = %d bits\n", to_bits(sizeof(char)));
	printf("sizeof(short) = %d bits\n", to_bits(sizeof(short)));
	printf("sizeof(int) = %d bits\n", to_bits(sizeof(int)));
	printf("sizeof(long) = %d bits\n", to_bits(sizeof(long)));
	printf("sizeof(float) = %d bits\n", to_bits(sizeof(float)));
	printf("sizeof(double) = %d bits\n", to_bits(sizeof(double)));
	
	return 0;
}