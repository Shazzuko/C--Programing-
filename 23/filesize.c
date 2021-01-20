#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024

void remove_newline(char str[]) {
	int length = strlen(str);
	if (str[length-1] == '\n') {
		str[length-1] = 0;
	}
}

int main() {
	FILE *fp = NULL;
	char buffer[BUF_SIZE] = { 0 };

	printf("Enter a file name: ");
	fgets(buffer, BUF_SIZE, stdin);
	remove_newline(buffer);

	fp = fopen(buffer, "r");

	if (fp == NULL) {
		return 1;
	}

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	printf("File size = %ld bytes\n", size);
	
	return 0;
}