#include <stdio.h>

int main() {
	char input;
	scanf("%c", &input);

	if (input >= 'A' && input <= 'Z') {
		printf("Upper\n");
	} else if (input >= 'a' && input <= 'z') {
		printf("Lower\n");
	} else {
		printf("Invalid input\n");
	}

	return 0;
}