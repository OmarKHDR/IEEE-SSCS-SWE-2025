#include "_putchar.h"

int main() {
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			int product = i * j;

			if (product >= 10) {
				_putchar('0' + product / 10);
			}
			_putchar('0' + product % 10);
			_putchar(' ');

		}
		_putchar('\n');
	}
	_putchar('\n');
}