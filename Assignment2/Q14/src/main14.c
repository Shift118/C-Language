#include <stdio.h>

int main(void) {
	int x, y, sum;
	x = 0;
	y = 1;
	printf("0,1,");
	for (int i = 0; i < 20; i++) {
		sum = x + y;
		x = y;
		y = sum;
		printf("%d,", sum);
	}
}
