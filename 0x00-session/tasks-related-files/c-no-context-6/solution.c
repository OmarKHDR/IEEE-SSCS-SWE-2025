#include "_putchar.h"

int main() {
	for (int i = '0'; i <= '9'; i++) {
		for (int j = i +1; j <= '9'; j++) {
			_putchar(i);
			_putchar(j);
			if (i >= '8') continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}