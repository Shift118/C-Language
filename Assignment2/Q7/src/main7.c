#include <stdio.h>

int main(void) {
	setbuf(stdout, NULL);
	int x, y;
	printf("Enter First Number: ");
	scanf("%d", &x);
	printf("Enter Second Number: ");
	scanf("%d", &y);

	if (x == 0 || x % y) {
		printf("%d isn't Multiple of %d", x, y);
	} else {
		printf("%d is Multiple of %d", x, y);
	}
}
