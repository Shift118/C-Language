#include <stdio.h>

int main(void) {
	int x = 3;
	int y = 2.5;
	printf("X: %d Y: %d\n", x, y);
	printf("<- SWAP ->\n");
	{
		int x = y;
		printf("X: %d ", x);

	}
	{
		int y = x;
		printf("Y: %d \n", y);
	}
}
