#include <stdio.h>

int main(void) {
	int inp;
	// you need to pass the address not the variable it self "search passing by reference and passing by value"
	scanf("%d", &inp);
	printf("%c\n", inp+'0');
}