#include <stdlib.h>
#include <time.h>


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
	return (0);
}