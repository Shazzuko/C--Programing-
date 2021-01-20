#include <stdio.h>
#include <string.h>

int main() {
	char str1[100] = "This is a string.";
	char str2[] = "This is another string.";

	// strcmp example
	// int result = strcmp("testing", "testin1");
	// printf("results = %d\n", result);

	// strcat example
	// strcat(str1, str2);
	// str2[0] = '!';
	// printf("%s\n", str1);

	// strcpy example
	// char buffer[1024] = "initial string";
	// strcpy(buffer, "new string");
	// printf("%s\n", buffer);

	// strtok example
	char *token = strtok(str1, " ");
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	
	return 0;
}