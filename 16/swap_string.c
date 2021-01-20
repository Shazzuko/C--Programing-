#include <stdio.h>
#include <string.h>

int main() { 
	char str1[] = "string one";
	char str2[] = "string two";

	char temp[1024] = { 0 };

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	return 0;
}