#include "_putchar.h"


int _isalpha(int c) {
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
		return 1;
	}
	return 0;
}

int main() {
	char ch;
	for (ch = ' '; ch <= '~'; ch++) {
		if (_isalpha(ch)) {
			_putchar(ch);
		}
	}
	_putchar('\n');
}