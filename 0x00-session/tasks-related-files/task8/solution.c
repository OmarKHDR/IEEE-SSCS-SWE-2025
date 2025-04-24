#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("number: %d\n",n);
	int last_digit = (n > 0)? n % 10 : (-1 * n) % 10;
	char *isEven = (n % 2)?"odd":"even";
	char *isMore = (last_digit < 5)?"less":"more";
	printf("number %d is %s, and the last digit is %d, and it is %s than 5\n", n, isEven, last_digit, isMore);
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
	return (0);
}