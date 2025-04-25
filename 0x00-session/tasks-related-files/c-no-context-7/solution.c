#include "_putchar.h"

int main() {
	for (int i = '0'; i <= '9'; i++) {
		for (int j = i + 1; j <= '9'; j++) {
			for (int k = j + 1; k <= '9'; k++) {
				_putchar(i);
				_putchar(j);
				_putchar(k);
				if (i >= '7') continue;
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}