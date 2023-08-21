#include <stdio.h>
#include <math.h>

int main() {
	setbuf(stdout, NULL);
	int x;
	printf("Enter Number: ");
	scanf("%d", &x);
	printf("%f", cbrt(x));

	if (cbrt(x) == (int) cbrt(x)) {
		return 0;
	} else {
		return 1;
	}
}
