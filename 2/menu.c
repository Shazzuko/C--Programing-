#include <stdio.h>

int main() {
	char input = '\0';

	printf("================\n");
	printf("|     MENU     |\n");
	printf("================\n");
	printf("| S - Save     |\n");
	printf("| L - Load     |\n");
	printf("| Q - Quit     |\n");
	printf("================\n");

	printf("> ");
	scanf("%c", &input);

	if (input == 'S' || input == 's') {
		printf("Saving file...\n");
	} else if (input == 'L' || input == 'l') {
		printf("Loading file...\n");
	} else if (input == 'Q' || input == 'q') {
		printf("Quitting...\n");
	} else {
		printf("Invalid command.\n");
	}

	return 0;
}