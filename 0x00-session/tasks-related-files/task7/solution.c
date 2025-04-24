#include <stdio.h>

void isEven(int n) {
	// if the number is divisable by 2 it should be even not odd
	if (n % 2 != 0) {
		printf("%d is nodd\n", n);
	} else {
		printf("%d is even", n);
	}
}

void calculateArea(float n) {
	// that was = which is an assignment operator,
	// assignment return the value assigned so n = 0 will give 0 instead of true
	// instead use == for comparison
	if (n  == 0) {
		printf("no radius specified");
	} else {
		printf("the radius exists");
	}
}

int main() {

}
