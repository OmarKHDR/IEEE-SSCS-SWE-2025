#include <stdio.h>
#include <stdbool.h>

int main() {
	int j = 0;
	for(int i = 0; i < 10; i++) {
		printf("%d", i);
		if (j ==1) {
			helloworld("this is a fake function");
		} else {
			printf("i hate python lang\n");
		}
	}
}