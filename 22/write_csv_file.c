#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

int remove_newline(char str[]) {
	int length = strlen(str);
	
	if (str[length - 1] == '\n') {
		str[length - 1] = 0;
		return 0;
	}

	return 1;
}

void write_data(FILE *fp) {
	char raw_csv[BUFFER_SIZE] = { 0 };
	char buffer[BUFFER_SIZE] = { 0 };

	fputc('\n', fp);

	printf("Enter ID: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	fputs(buffer, fp);
	putc(',', fp);

	printf("Enter Name: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	fputs(buffer, fp);
	putc(',', fp);

	printf("Enter Price: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	fputs(buffer, fp);
	putc(',', fp);

	printf("Enter Quantity: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	remove_newline(buffer);
	fputs(buffer, fp);
}

int main() {
	char fname[BUFFER_SIZE] = { 0 };
	FILE *fp = NULL;

	printf("Enter a filename: ");
	fgets(fname, BUFFER_SIZE, stdin);
	remove_newline(fname);

	fp = fopen(fname, "a");

	if (fp == NULL) {
		printf("Cannot open file\n");
		return 1;
	}

	write_data(fp);

	fclose(fp);

	return 0;
}