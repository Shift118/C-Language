#include <stdio.h>

int main() {
	int x;
	setbuf(stdout, NULL);
	printf("Enter a Number: ");
	scanf("%d", &x);

	int evenORodd = 1; // odd= 1, Even= 0
	for (int i = 0; i <= x; i++) {
		if (x == i) {
			evenORodd = 0;
		}
	}
	if (evenORodd == 0) {
		printf("%d is Even.", x);
		return 0;
	} else {
		printf("%d is Odd", x);
		return 1;
	}
}
