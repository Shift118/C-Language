#include <stdio.h>
#include <math.h>
/////
int squareCheck(int x);
int squareCheck2(int x);
/////

int squareCheck(int x) {
	if (sqrt(x) == (int) sqrt(x)) {
//		printf("\nx= %f", sqrt(x));
		if (squareCheck2(sqrt(x))) {
			return 1;
		} else {
			return 0;
		}
	}
	return 0;
}

int squareCheck2(int x) {
	if (sqrt(x) == (int) sqrt(x)) {
//		printf("\nx= %f", sqrt(x));
		return 1;
	} else {
		return 0;
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
	squareCheck(x) == 1 ?
			printf("Number is a power of 2") : printf("Number is power of 2");

}
