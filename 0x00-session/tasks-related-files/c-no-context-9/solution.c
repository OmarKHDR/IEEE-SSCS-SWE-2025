#include "_putchar.h"
#include <stdio.h>

void divide(int n) {
	if (n == 0) return;
	divide(n/10);
	_putchar(n%10 + '0');
}
int main() {
	int num;
	scanf("%d", &num);
	if(num >=15) return 0;

	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= num; j++) {
			int product = i * j;
			if (product == 0) {
				_putchar('0');
				_putchar(' ');
				continue;
			}
			divide(product);
			_putchar(' ');

		}
		_putchar('\n');
	}
	_putchar('\n');
}