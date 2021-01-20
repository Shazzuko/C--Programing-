#include <stdio.h>

int main() {
	char input = '\0';

	while (input != 'Q' && input != 'q') {
		printf("================\n");
		printf("|     MENU     |\n");
		printf("================\n");
		printf("| S - Save     |\n");
		printf("| L - Load     |\n");
		printf("| Q - Quit     |\n");
		printf("================\n");

		printf("> ");
		scanf("%c", &input);

		switch (input) {
			case 'S':
			case 's':
				printf("Saving file...\n");
				break;
			case 'L':
			case 'l':
				printf("Loading file...\n");
				break;
			case 'Q':
			case 'q':
				printf("Quitting...\n");
				break;
			default:
				printf("Invalid command.\n");
		}

		// clear the buffer
		while (getchar() != '\n');
	}

	return 0;
}