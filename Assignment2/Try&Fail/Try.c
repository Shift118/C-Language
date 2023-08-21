#include <stdio.h>
#include <math.h>
/////
int squareCheck(int x);
/////

int squareCheck(int x) {
	if (sqrt(x) == (int) sqrt(x)) {
		printf("\nx= %f", sqrt(x));

	} else {

	}

	return 0;
}

int main(void) {
	setbuf(stdout, NULL);
	int x;
	printf("Enter First Number: ");
	scanf("%d", &x);
//	printf("Enter Second Number: ");
//	scanf("%d", &y);

//	printf("x= %d", sqrt(x));
	squareCheck(x);

}
