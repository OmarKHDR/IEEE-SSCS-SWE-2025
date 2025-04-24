#include "_putchar.h"


int main() {
	for (int i = 0; i < 5; i++) {
		for (char ch = 'a'; ch <= 'z'; ch++) {
			_putchar(ch);
		}
		_putchar('\n');
	}
}