#include "_putchar.h"


int main(){
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) {
		if (ch == 'q') continue;
		_putchar(ch);
	}

	for (ch = 'Z'; ch >= 'A'; ch--) {
		if (ch == 'Q') continue;
		_putchar(ch);
	}

	_putchar('\n');
}